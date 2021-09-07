/* GRUPO F
Nomes: Tatiana Pacheco de Almeida (252561) - Vinícius Roratto Carvalho (160094)
Disciplina: INF01147 - Compiladores - Prof. Lucas Schnorr  */


%{
#include "parser.tab.h"

int linha = 1;
int get_line_number(void);

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
"<="                          { return TK_OC_LE; }
">="                          { return TK_OC_GE; }
"=="                          { return TK_OC_EQ; }
"!="                          { return TK_OC_NE; }
"&&"                          { return TK_OC_AND; }
"||"                          { return TK_OC_OR; }
">>"                          { return TK_OC_SR; }
"<<"                          { return TK_OC_SL; }

 /* Palavras reservadas*/
int                          { return TK_PR_INT; }
float                        { return TK_PR_FLOAT; }
bool                         { return TK_PR_BOOL; }
char                         { return TK_PR_CHAR; }
string                       { return TK_PR_STRING; }
if                           { return TK_PR_IF; }
then                         { return TK_PR_THEN; }
else                         { return TK_PR_ELSE; }
while                        { return TK_PR_WHILE; }
do                           { return TK_PR_DO; }
input                        { return TK_PR_INPUT; }
output                       { return TK_PR_OUTPUT; }
return                       { return TK_PR_RETURN; }
const                        { return TK_PR_CONST; }
static                       { return TK_PR_STATIC; }
foreach                      { return TK_PR_FOREACH; }
for                          { return TK_PR_FOR; }
switch                       { return TK_PR_SWITCH; }
case                         { return TK_PR_CASE; }
break                        { return TK_PR_BREAK; }
continue                     { return TK_PR_CONTINUE; }
class                        { return TK_PR_CLASS; }
private                      { return TK_PR_PRIVATE; }
public                       { return TK_PR_PUBLIC; }
protected                    { return TK_PR_PROTECTED; }

 /* Caracteres Especiais */

 ","                         { return yytext[0]; }
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
false                         { return TK_LIT_FALSE; }
true                          { return TK_LIT_TRUE; }

[-+]*{INTEIRO}                { return TK_LIT_INT; }
[-+]*{REAL}                   { return TK_LIT_FLOAT; }

'([^']?)'                      { return TK_LIT_CHAR; }
\"[^\"]*\"                    { return TK_LIT_STRING; }

 /*Identificador*/
[a-zA-Z_]+[a-zA-Z0-9_]*       { return TK_IDENTIFICADOR; }

 /*Identificador de Erros - tudo que ele nao reconhece retorna erro*/
.                             {return TOKEN_ERRO;}

%%
    
    
 /* retorna o número de linhas executadas*/
int get_line_number(void){
    return linha;
}
