/* GRUPO F
Nomes: Tatiana Pacheco de Almeida (252561) - Vinícius Roratto Carvalho (160094)
Disciplina: INF01147 - Compiladores - Prof. Lucas Schnorr  
*/


%{
#ifndef SCANNER
#include "parser.tab.h"
#include <stdbool.h>

int linha = 1;
int get_line_number(void);
struct LexVal *create_value (char* yytext, int type);
bool stob (char* yytext);
char* removequote(char * yytext); 

%}

%x comentario
/*como visto na aula N2A4.*/
DIGITO [0-9]
INTEIRO {DIGITO}+
EXPONENCIAL [eE][+-]?{INTEIRO}
REAL {INTEIRO}("."{INTEIRO})?{EXPONENCIAL}?

%%
 /* BRANCO { }  Nao fazer nada se espaço em branco ou tab. */
[ \t]
\n    {linha++;} /* incrementa linha */
"//".* { } /* ignora comentários de linha simples. */

 /* fonte para comentário de linhas múltiplas -> http:\//dinosaur.compilertools.net/flex/manpage.html */
"/*"        BEGIN(comentario);
<comentario>[^*\n]*
<comentario>"*"+[^*/\n]*
<comentario>\n           ++linha;
<comentario>"*"+"/"       BEGIN(INITIAL);

    
    /*Operadores Compostos*/
"<="                          { yylval.valor_lexico = create_value(yytext, TK_OC_LE);}
">="                          { yylval.valor_lexico = create_value(yytext, TK_OC_GE);}
"=="                          { yylval.valor_lexico = create_value(yytext, TK_OC_EQ);}
"!="                          { yylval.valor_lexico = create_value(yytext, TK_OC_NE);}
"&&"                          { yylval.valor_lexico = create_value(yytext, TK_OC_AND);}
"||"                          { yylval.valor_lexico = create_value(yytext, TK_OC_OR);}
">>"                          { yylval.valor_lexico = create_value(yytext, TK_OC_SR);}
"<<"                          { yylval.valor_lexico = create_value(yytext, TK_OC_SL);}

 /* Palavras reservadas*/
int                          { yylval.valor_lexico = create_value(yytext, TK_PR_INT);}
float                        { yylval.valor_lexico = create_value(yytext, TK_PR_FLOAT);}
bool                         { yylval.valor_lexico = create_value(yytext, TK_PR_BOOL);}
char                         { yylval.valor_lexico = create_value(yytext, TK_PR_CHAR);}
string                       { yylval.valor_lexico = create_value(yytext, TK_PR_STRING);}
if                           { yylval.valor_lexico = create_value(yytext, TK_PR_IF);}
then                         { yylval.valor_lexico = create_value(yytext, TK_PR_THEN);}
else                         { yylval.valor_lexico = create_value(yytext, TK_PR_ELSE);}
while                        { yylval.valor_lexico = create_value(yytext, TK_PR_WHILE);}
do                           { yylval.valor_lexico = create_value(yytext, TK_PR_DO);}
input                        { yylval.valor_lexico = create_value(yytext, TK_PR_INPUT);}
output                       { yylval.valor_lexico = create_value(yytext, TK_PR_OUTPUT);}
return                       { yylval.valor_lexico = create_value(yytext, TK_PR_RETURN);}
const                        { yylval.valor_lexico = create_value(yytext, TK_PR_CONST);}
static                       { yylval.valor_lexico = create_value(yytext, TK_PR_STATIC);}
foreach                      { yylval.valor_lexico = create_value(yytext, TK_PR_FOREACH);}
for                          { yylval.valor_lexico = create_value(yytext, TK_PR_FOR);}
switch                       { yylval.valor_lexico = create_value(yytext, TK_PR_SWITCH);}
case                         { yylval.valor_lexico = create_value(yytext, TK_PR_CASE);}
break                        { yylval.valor_lexico = create_value(yytext, TK_PR_BREAK);}
continue                     { yylval.valor_lexico = create_value(yytext, TK_PR_CONTINUE);}
class                        { yylval.valor_lexico = create_value(yytext, TK_PR_CLASS);}
private                      { yylval.valor_lexico = create_value(yytext, TK_PR_PRIVATE);}
public                       { yylval.valor_lexico = create_value(yytext, TK_PR_PUBLIC);}
protected                    { yylval.valor_lexico = create_value(yytext, TK_PR_PROTECTED);}

 /* Caracteres Especiais */

","                          { return yytext[0]; }
";"                          { return yytext[0]; }
":"                          { return yytext[0]; }
"("                          { return yytext[0]; }
")"                          { return yytext[0]; }
"["                          { return yytext[0]; }
"]"                          { return yytext[0]; }
"{"                          { return yytext[0]; }
"}"                          { return yytext[0]; }
"+"                          { return yytext[0]; }
"-"                          { return yytext[0]; }
"|"                          { return yytext[0]; }
"*"                          { return yytext[0]; }
"/"                          { return yytext[0]; }
"<"                          { return yytext[0]; }
">"                          { return yytext[0]; }
"="                          { return yytext[0]; }
"!"                          { return yytext[0]; }
"&"                          { return yytext[0]; }
"%"                          { return yytext[0]; }
"#"                          { return yytext[0]; }
"^"                          { return yytext[0]; }
"."                          { return yytext[0]; }
"$"                          { return yytext[0]; }
"?"                          { return yytext[0]; }

 /* Literais */
false                         { yylval.valor_lexico = create_value(yytext, TK_LIT_FALSE);}
true                          { yylval.valor_lexico = create_value(yytext, TK_LIT_TRUE);}

[-+]*{INTEIRO}                { yylval.valor_lexico = create_value(yytext, TK_LIT_INT);}
[-+]*{REAL}                   { yylval.valor_lexico = create_value(yytext, TK_LIT_FLOAT);}

'([^']?)'                     { yylval.valor_lexico = create_value(yytext, TK_LIT_CHAR);}
\"[^\"]*\"                    { yylval.valor_lexico = create_value(yytext, TK_LIT_STRING);}

 /*Identificador*/
[a-zA-Z_]+[a-zA-Z0-9_]*       { yylval.valor_lexico = create_value(yytext, TK_IDENTIFICADOR); return TK_IDENTIFICADOR; }

 /*Identificador de Erros - tudo que ele nao reconhece retorna erro*/
.                             {return TOKEN_ERRO;}

%%
    
    
 /* retorna o número de linhas executadas*/
int get_line_number(void){
    return linha;
}


typedef struct LexVal {
	int linha;
	int tipo;
 	union Valor *val;
} LexVal;

typedef union Valor {
	int i;
	float f;
	char c;
	char* s;
	bool b;
} Valor;


struct LexVal *create_value (char* yytext, int type){

	struct LexVal * newVal = (struct LexVal*)calloc(1, sizeof(LexVal*));
	newVal->val = (union Valor*)calloc(1, sizeof(union Valor));
	newVal->linha = linha;
	newVal->tipo = type;
	
	switch (newVal->tipo)
	{
		case TK_LIT_INT: newVal->val->i = atoi(yytext); 	break;
		case TK_LIT_FLOAT: newVal->val->f = atof(yytext); 	break;
		case TK_LIT_CHAR: newVal->val->c = *strdup(removequote(yytext)); 	break;
		case TK_LIT_STRING: newVal->val->s = strdup(removequote(yytext));	break;
		case TK_LIT_TRUE: newVal->val->b = true; 	break;
		case TK_LIT_FALSE: newVal->val->b = false; 	break;
		default: 
			newVal->val->s = (char *)calloc(strlen(yytext)+1,sizeof(char));
			newVal->val->s = strdup(yytext);
			}	
	return newVal;

}


char* removequote(char * yytext){

	int j = 0;
	int lineLength = strlen(yytext);
	for (int i = 0; i < lineLength;  i++) {
            if (yytext[i] != '"' && yytext[i] != '\\') { 
                 yytext[j++] = yytext[i];
            } else if (yytext[i+1] == '"' && yytext[i] == '\\') { 
                 yytext[j++] = '"';
            } else if (yytext[i+1] != '"' && yytext[i] == '\\') { 
                 yytext[j++] = '\\';
            }
	}
	yytext[j] = '\0';
	return yytext;
}


#endif // SCANNER
