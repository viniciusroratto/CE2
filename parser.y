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

%start programa
%%

/* Declaracao de variaveis */

programa: decl
    ;
    
decl:
    | globalvar
    | func
    |
    ;

globalvar:
    type TK_IDENTIFICADOR lista decl
    | type TK_IDENTIFICADOR '[' TK_LIT_INT ']' ';' decl
    ;
    

    
type:
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
/*
A lista e dada entre par ´ enteses ˆ
e e composta por zero ou mais par ´ ametros de entrada, se- ˆ
parados por v´ırgula. Cada parametro ˆ e definido pelo seu ´
tipo e nome, e nao pode ser do tipo vetor. O tipo de um ˜
parametro pode ser opcionalmente precedido da palavra re- ˆ
servada const.
 
 */

func:
    cabecalho corpo decl
	;

cabecalho:
    type TK_IDENTIFICADOR '(' param ')'
    ;

param:
    const type TK_IDENTIFICADOR lista_parametros
    ;
    
lista_parametros:
    ',' const type TK_IDENTIFICADOR lista_parametros
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
      TK_IDENTIFICADOR '=' expr ';' comando
    | TK_IDENTIFICADOR '[' expr ']' '=' expr ';' comando
    |
    ;
    

/* Expressoes Aritmeticas e Logicas*/
expr:
    TK_IDENTIFICADOR
    | lit
    | TK_PR_RETURN expr
    | expr '+' expr
    | expr '-' expr
    | expr '*' expr
    | expr '/' expr
    | expr '<' expr
    | expr '>' expr
    | expr '|' expr
    | expr '^' expr
    | expr '~' expr
    | expr TK_OC_LE expr
    | expr TK_OC_GE expr
    | expr TK_OC_EQ expr
    | '(' expr ')'
    | TK_IDENTIFICADOR '(' expr ')'
    | '~' expr
    ;
    
    
lit:
    TK_LIT_INT
    | TK_LIT_FLOAT
    | TK_LIT_FALSE
    | TK_LIT_TRUE
    | TK_LIT_CHAR
    | TK_LIT_STRING
    ;

%%

void yyerror(char const *s){
    fprintf(stderr, "Erro de Sintaxe [linha:%d]\n", get_line_number());
    printf("%s\n",s);
    }




