%{
    
#include <stdio.h>
#include <stdlib.h>


int yylex(void);
void yyerror (char const *s);
%}

%token TK_PR_INT
%token TK_PR_FLOAT
%token TK_PR_BOOL
%token TK_PR_CHAR
%token TK_PR_STRING
%token TK_PR_IF
%token TK_PR_THEN
%token TK_PR_ELSE
%token TK_PR_WHILE
%token TK_PR_DO
%token TK_PR_INPUT
%token TK_PR_OUTPUT
%token TK_PR_RETURN
%token TK_PR_CONST
%token TK_PR_STATIC
%token TK_PR_FOREACH
%token TK_PR_FOR
%token TK_PR_SWITCH
%token TK_PR_CASE
%token TK_PR_BREAK
%token TK_PR_CONTINUE
%token TK_PR_CLASS
%token TK_PR_PRIVATE
%token TK_PR_PUBLIC
%token TK_PR_PROTECTED
%token TK_PR_END
%token TK_PR_DEFAULT
%token TK_OC_LE
%token TK_OC_GE
%token TK_OC_EQ
%token TK_OC_NE
%token TK_OC_AND
%token TK_OC_OR
%token TK_OC_SL
%token TK_OC_SR
%token TK_LIT_INT
%token TK_LIT_FLOAT
%token TK_LIT_FALSE
%token TK_LIT_TRUE
%token TK_LIT_CHAR
%token TK_LIT_STRING
%token TK_IDENTIFICADOR
%token TOKEN_ERRO

%left '|' '^'
%left '?'
%left '<' '>' '=' TK_OC_LE TK_OC_GE TK_OC_EQ TK_OC_NE
%left '+' '-' TK_OC_SL TK_OC_SR
%left '/'
%left '%'
%left '~'

%right '&'
%right '#'
%right '*'


%start programa
%%

/* Declaracao de variaveis */

programa: decl
    ;
    
decl:
    varglobal decl
    | func decl
    |
    ;

varglobal:
    tipo TK_IDENTIFICADOR lista
    | tipo TK_IDENTIFICADOR '[' TK_LIT_INT ']' ';'
    ;
    

    
tipo:
    static TK_PR_BOOL
    | static TK_PR_CHAR
    | static TK_PR_FLOAT
    | static TK_PR_INT
    | static TK_PR_STRING
    ;

static:
    TK_PR_STATIC
    |
    ;
        
lista:
    ','  TK_IDENTIFICADOR lista
    | ';'
    ;

	
/* Definicao de funcoes */

func:
    cabecalho corpo
	;

cabecalho:
    tipo TK_IDENTIFICADOR '(' param ')'
    ;

param:
    const tipo TK_IDENTIFICADOR lista_parametros
    |
    ;
    
lista_parametros:
    ',' const tipo TK_IDENTIFICADOR lista_parametros
    |
    ;

const:
    TK_PR_CONST
    |
    ;
        
corpo:
    '{' comando '}'
    ;
    
/* Bloco de comandos */

/* Comandos Simples*/
comando:
    varlocal ';' comando
    | TK_IDENTIFICADOR '=' expr ';' comando
    | TK_IDENTIFICADOR '[' expr ']' '=' expr ';' comando
    | TK_PR_RETURN expr ';' comando
    | TK_PR_INPUT TK_IDENTIFICADOR ';' comando
    | TK_PR_OUTPUT saida ';' comando
    | shift ';' comando
    | TK_IDENTIFICADOR'('expr')' ';'
    | TK_PR_BREAK ';'comando
    | TK_PR_CONTINUE ';'
    | fluxo ';' comando
    | corpo ';' comando
    |
    ;

varlocal:
    static const tipo2 TK_IDENTIFICADOR lista_varlocal
    | static const tipo2 TK_IDENTIFICADOR '<''=' TK_IDENTIFICADOR
    | static const tipo2 TK_IDENTIFICADOR '<''=' lit
    ;
    
    
    
tipo2:
    TK_PR_BOOL
    | TK_PR_CHAR
    | TK_PR_FLOAT
    | TK_PR_INT
    | TK_PR_STRING
    ;
    
lista_varlocal:
    ',' TK_IDENTIFICADOR lista_varlocal
    |
    ;
    
    
saida:
    TK_IDENTIFICADOR
    | lit
    ;
    
shift:
    TK_IDENTIFICADOR TK_OC_SR TK_LIT_INT
    | TK_IDENTIFICADOR'[' expr ']' TK_OC_SR TK_LIT_INT
    | TK_IDENTIFICADOR TK_OC_SL TK_LIT_INT
    | TK_IDENTIFICADOR'[' expr ']' TK_OC_SL TK_LIT_INT
    
    
fluxo:
    TK_PR_IF '(' expr ')' corpo
    | TK_PR_IF '(' expr ')' corpo TK_PR_ELSE corpo
    | TK_PR_FOR '(' atrib_for ':' expr ':' atrib_for ')' corpo
    | TK_PR_WHILE '(' expr ')' corpo
    ;
    
atrib_for:
    TK_IDENTIFICADOR '=' expr
    ;

/* Expressoes Aritmeticas e Logicas*/
expr:
    TK_IDENTIFICADOR
    | TK_IDENTIFICADOR'['expr']'
    | lit_num
    | TK_IDENTIFICADOR '(' expr ')'
    | '(' expr ')'
    | bool
    | '+' expr
    | '-' expr
    | '!' expr
    | '&' expr
    | '*' expr
    | '?' expr
    | '#' expr
    | expr '+' expr
    | expr '-' expr
    | expr '*' expr
    | expr '/' expr
    | expr '%' expr
    | expr '<' expr
    | expr '>' expr
    | expr '|' expr
    | expr '&' expr
    | expr '^' expr
    | expr TK_OC_OR expr
    | expr TK_OC_AND expr
    | expr TK_OC_LE expr
    | expr TK_OC_GE expr
    | expr TK_OC_EQ expr
    | expr TK_OC_NE expr
    | expr '?' expr ':' expr
    |
    ;
    
lit:
    TK_LIT_INT
    | TK_LIT_FLOAT
    | TK_LIT_FALSE
    | TK_LIT_TRUE
    | TK_LIT_CHAR
    | TK_LIT_STRING
    ;
    
lit_num:
    TK_LIT_INT
    | TK_LIT_FLOAT
    ;
    
bool:
    TK_LIT_TRUE
    | TK_LIT_FALSE
    ;

%%

void yyerror(char const *s){
    fprintf(stderr, "Erro de sintaxe na linha %d \n", get_line_number());
    }
