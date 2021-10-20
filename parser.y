/*  # GRUPO Y
  # Nomes:  Vinícius Roratto Carvalho (160094)
  # disciplina - INF01147 - Compiladores - Prof. Lucas Schnorr
*/

%{
#ifndef PARSER
#include <stdio.h>
#include <stdlib.h>
#include "AST.h"
#define YYERROR_VERBOSE 1


int yylex(void);
void yyerror (char const *s);
int get_line_number();


extern void *arvore;
void exporta (void *arvore);
void libera (void *arvore);
Nodo * criaNodo (Nodo * data[], int filhos);


%}

%union{
	struct LexVal *valor_lexico;
    struct Nodo * nodo;
}

%token<nodo> TK_PR_INT
%token<nodo> TK_PR_FLOAT
%token<nodo> TK_PR_BOOL
%token<nodo> TK_PR_CHAR
%token<nodo> TK_PR_STRING

%token<nodo>TK_PR_IF
%token<nodo> TK_PR_THEN
%token<nodo> TK_PR_ELSE
%token<nodo> TK_PR_WHILE
%token<nodo> TK_PR_DO
%token<nodo>TK_PR_INPUT
%token<nodo> TK_PR_OUTPUT
%token<nodo> TK_PR_RETURN
%token<nodo>  TK_PR_CONST
%token<nodo>  TK_PR_STATIC
%token<nodo> TK_PR_FOREACH
%token<nodo>  TK_PR_FOR
%token<nodo> TK_PR_SWITCH
%token<nodo> TK_PR_CASE
%token<nodo> TK_PR_BREAK
%token<nodo> TK_PR_CONTINUE
%token<nodo> TK_PR_CLASS
%token<nodo> TK_PR_PRIVATE
%token<nodo> TK_PR_PUBLIC
%token<nodo> TK_PR_PROTECTED
%token<nodo> TK_PR_END
%token<nodo> TK_PR_DEFAULT

%token<nodo>  TK_OC_LE
%token<nodo>  TK_OC_GE
%token<nodo>  TK_OC_EQ
%token<nodo>  TK_OC_NE
%token<nodo>  TK_OC_AND
%token<nodo>  TK_OC_OR
%token<nodo>  TK_OC_SL
%token<nodo>  TK_OC_SR

%token<nodo> TK_LIT_INT
%token<nodo> TK_LIT_FLOAT
%token<nodo> TK_LIT_FALSE
%token<nodo> TK_LIT_TRUE
%token<nodo> TK_LIT_CHAR
%token<nodo> TK_LIT_STRING
%token<nodo> TK_IDENTIFICADOR
%token TOKEN_ERRO

%type<nodo> programa
%type<nodo> decl
%type<nodo> varglobal
%type<nodo> func
%type<nodo> cabecalho
%type<nodo> param
%type<nodo> lista_parametros

%type<nodo> corpo
%type<nodo> comando
%type<nodo> varlocal

%type<nodo> lista_varlocal
%type<nodo> saida
%type<nodo> shift
%type<nodo> fluxo
%type<nodo> atrib_for
%type<nodo> expr
%type<nodo> expr_pr
%type<nodo> expr_pr_lst
%type<nodo> lit
%type<nodo> lit_num
%type<nodo> bool

%left '|' '^'
%left '<' '>' '=' TK_OC_LE TK_OC_GE TK_OC_EQ TK_OC_NE
%left '+' '-' TK_OC_SL TK_OC_SR
%left TK_OC_OR TK_OC_AND
%left '/'
%left '%'
%left '~'
%left "<="

%right '&'
%right '#'
%right '*'
%right '?' '!'

%nonassoc  ':'

%start programa

%%

/* Declaracao de variaveis */

programa: decl {arvore = $$; printf("DECL\n");}
    ;
    
decl:
    varglobal decl	{ printf("VARGLOBAL\n"); }
    | func decl 	{printf("FUNC"); Nodo * data[2] = {$1,$2}; $$ = criaNodo(data,2);}  
    | { }			
    ;

varglobal:
    tipo TK_IDENTIFICADOR lista { }
    | tipo TK_IDENTIFICADOR '[' TK_LIT_INT ']' ';' {}
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
    cabecalho corpo {Nodo * data[2] = {$1,$2}; $$ = criaNodo(data,2);}  
	;

cabecalho:
    tipo TK_IDENTIFICADOR '(' param ')' {Nodo * data[2] = {$2, $4}; $$ = criaNodo(data,2);}  
    ;

param:
    const tipo TK_IDENTIFICADOR lista_parametros {Nodo * data[2] = {$3, $4}; $$ = criaNodo(data,2);}  
    | { } 
    ;
    
lista_parametros:
    ',' const tipo TK_IDENTIFICADOR lista_parametros {Nodo * data[2] = {$4, $5}; $$ = criaNodo(data,2);} 
    | { }
    ;

const:
    TK_PR_CONST
    | 
    ;
        
corpo:
    '{' comando '}' {Nodo * data[1] = {$2}; $$ = criaNodo(data,1);} 
    ;
    
/* Bloco de comandos */

/* Comandos Simples*/
comando:
    varlocal ';' comando {Nodo * data[2] = {$1, $3}; $$ = criaNodo(data,2);}  
    | TK_IDENTIFICADOR '=' expr ';' comando {Nodo * data[3] = {$1, $3, $5}; $$ = criaNodo(data,3);}  
    | TK_IDENTIFICADOR '[' expr ']' '=' expr ';' comando {Nodo * data[4] = {$1, $3, $6, $8}; $$ = criaNodo(data,4);}  
    | TK_PR_RETURN expr ';' comando {Nodo * data[3] = {$1, $2, $4}; $$ = criaNodo(data,3);}  
    | TK_PR_INPUT TK_IDENTIFICADOR ';' comando {Nodo * data[3] = {$1, $2, $4}; $$ = criaNodo(data,3);}  
    | TK_PR_OUTPUT saida ';' comando {Nodo * data[3] = {$1, $2, $4}; $$ = criaNodo(data,3);}  
    | shift ';' comando {Nodo * data[2] = {$1, $3}; $$ = criaNodo(data,2);}
    | TK_IDENTIFICADOR'('expr')' ';' comando {Nodo * data[3] = {$1, $3, $6}; $$ = criaNodo(data,3);}
    | TK_PR_BREAK ';'comando {Nodo * data[2] = {$1, $3}; $$ = criaNodo(data,2);}
    | TK_PR_CONTINUE ';'{Nodo * data[1] = {$1}; $$ = criaNodo(data,1);}
    | fluxo ';' comando {Nodo * data[2] = {$1, $3}; $$ = criaNodo(data,2);}
    | corpo ';' comando {Nodo * data[2] = {$1, $3}; $$ = criaNodo(data,2);}
    | { }
    ;

varlocal:
    static const tipo2 TK_IDENTIFICADOR lista_varlocal { }
    | static const tipo2 TK_IDENTIFICADOR '<''=' TK_IDENTIFICADOR  {Nodo * data[2] = {$4, $7}; $$ = criaNodo(data,2);}
    | static const tipo2 TK_IDENTIFICADOR '<''=' lit  {Nodo * data[2] = {$4, $7}; $$ = criaNodo(data,2);}
    ;
    
    
    
tipo2:
    TK_PR_BOOL 
    | TK_PR_CHAR 
    | TK_PR_FLOAT 
    | TK_PR_INT 
    | TK_PR_STRING 
    ;
    
lista_varlocal:
    ',' TK_IDENTIFICADOR lista_varlocal { }
    | { }
    ;
    
    
saida:
    TK_IDENTIFICADOR {Nodo * data[1] = {$1}; $$ = criaNodo(data,1);}
    | lit {Nodo * data[1] = {$1}; $$ = criaNodo(data,1);}
    ;
    
shift:
    TK_IDENTIFICADOR TK_OC_SR TK_LIT_INT {Nodo * data[3] = {$1, $2, $3}; $$ = criaNodo(data,3);}
    | TK_IDENTIFICADOR'[' expr ']' TK_OC_SR TK_LIT_INT {Nodo * data[4] = {$1, $3, $5, $6}; $$ = criaNodo(data,4);}
    | TK_IDENTIFICADOR TK_OC_SL TK_LIT_INT {Nodo * data[3] = {$1, $2, $3}; $$ = criaNodo(data,3);}
    | TK_IDENTIFICADOR'[' expr ']' TK_OC_SL TK_LIT_INT {Nodo * data[4] = {$1, $3, $5, $6}; $$ = criaNodo(data,4);}
    ;
    
fluxo:
    TK_PR_IF '(' expr ')' corpo {Nodo * data[3] = {$1,$3,$5}; $$ = criaNodo(data, 3);}
    | TK_PR_IF '(' expr ')' corpo TK_PR_ELSE corpo {Nodo * data[5] = {$1,$3,$5, $6, $7}; $$ = criaNodo(data,5);}
    | TK_PR_FOR '(' atrib_for ':' expr ':' atrib_for ')' corpo {Nodo * data[5] = {$1,$3,$5, $7, $9}; $$ = criaNodo(data, 5);}
    | TK_PR_WHILE '(' expr ')' TK_PR_DO corpo {Nodo * data[4] = {$1,$3,$5, $6}; $$ = criaNodo(data, 4);}
    ;
    
atrib_for:
    TK_IDENTIFICADOR '=' expr {Nodo * data[2] = {$1,$3}; $$ = criaNodo(data, 2);}
    ;

/* Expressoes Aritmeticas e Logicas*/
expr:
    TK_IDENTIFICADOR {Nodo * data[1] = {$1}; $$ = criaNodo(data, 1);}
    | TK_IDENTIFICADOR'['expr']' {Nodo * data[2] = {$1,$3}; $$ = criaNodo(data, 2);}
    | lit_num {Nodo * data[1] = {$1}; $$ = criaNodo(data, 1);}
    | TK_IDENTIFICADOR '(' expr_pr ')' {Nodo * data[2] = {$1,$3}; $$ = criaNodo(data, 2);}
    | '(' expr ')'  {Nodo * data[1] = {$2}; $$ = criaNodo(data, 1);}
    | bool {Nodo * data[1] = {$1}; $$ = criaNodo(data, 1);}
    | '+' expr {Nodo * data[1] = {$2}; $$ = criaNodo(data, 1);}
    | '-' expr  {Nodo * data[1] = {$2}; $$ = criaNodo(data, 1);}
    | '!' expr  {Nodo * data[1] = {$2}; $$ = criaNodo(data, 1);}
    | '&' expr  {Nodo * data[1] = {$2}; $$ = criaNodo(data, 1);}
    | '*' expr  {Nodo * data[1] = {$2}; $$ = criaNodo(data, 1);}
    | '#' expr  {Nodo * data[1] = {$2}; $$ = criaNodo(data, 1);}
    | expr '+' expr {Nodo * data[2] = {$1, $3}; $$ = criaNodo(data, 2);}
    | expr '-' expr {Nodo * data[2] = {$1, $3}; $$ = criaNodo(data, 2);}
    | expr '*' expr {Nodo * data[2] = {$1, $3}; $$ = criaNodo(data, 2);}
    | expr '/' expr {Nodo * data[2] = {$1, $3}; $$ = criaNodo(data, 2);}
    | expr '%' expr {Nodo * data[2] = {$1, $3}; $$ = criaNodo(data, 2);}
    | expr '<' expr {Nodo * data[2] = {$1, $3}; $$ = criaNodo(data, 2);}
    | expr '>' expr {Nodo * data[2] = {$1, $3}; $$ = criaNodo(data, 2);}
    | expr '|' expr {Nodo * data[2] = {$1, $3}; $$ = criaNodo(data, 2);}
    | expr '&' expr {Nodo * data[2] = {$1, $3}; $$ = criaNodo(data, 2);}
    | expr '^' expr {Nodo * data[2] = {$1, $3}; $$ = criaNodo(data, 2);}
    | expr TK_OC_OR expr {Nodo * data[2] = {$1, $3}; $$ = criaNodo(data, 2);}
    | expr TK_OC_AND expr {Nodo * data[2] = {$1, $3}; $$ = criaNodo(data, 2);}
    | expr TK_OC_LE expr {Nodo * data[2] = {$1, $3}; $$ = criaNodo(data, 2);}
    | expr TK_OC_GE expr {Nodo * data[2] = {$1, $3}; $$ = criaNodo(data, 2);}
    | expr TK_OC_EQ expr {Nodo * data[2] = {$1, $3}; $$ = criaNodo(data, 2);}
    | expr TK_OC_NE expr {Nodo * data[2] = {$1, $3}; $$ = criaNodo(data, 2);}
    | expr '?' expr ':' expr {Nodo * data[2] = {$1, $3}; $$ = criaNodo(data, 2);}
    ;
    
expr_pr:
    expr expr_pr_lst  {Nodo * data[2] = {$1, $2}; $$ = criaNodo(data, 2);}
    ;

expr_pr_lst:
    ',' expr expr_pr_lst {Nodo * data[2] = {$2, $3}; $$ = criaNodo(data, 2);}
    | { }
    ;
    
lit:
    TK_LIT_INT {Nodo * data[1] = {$1}; $$ = criaNodo(data, 1);}
    | TK_LIT_FLOAT  {Nodo * data[1] = {$1}; $$ = criaNodo(data, 1);}
    | TK_LIT_FALSE  {Nodo * data[1] = {$1}; $$ = criaNodo(data, 1);}
    | TK_LIT_TRUE  {Nodo * data[1] = {$1}; $$ = criaNodo(data, 1);}
    | TK_LIT_CHAR {Nodo * data[1] = {$1}; $$ = criaNodo(data, 1);}
    | TK_LIT_STRING  {Nodo * data[1] = {$1}; $$ = criaNodo(data, 1);}
    ;
    
lit_num:
    TK_LIT_INT {Nodo * data[1] = {$1}; $$ = criaNodo(data, 1);}
    | TK_LIT_FLOAT {Nodo * data[1] = {$1}; $$ = criaNodo(data, 1);}
    ;
    
bool:
    TK_LIT_TRUE {Nodo * data[1] = {$1}; $$ = criaNodo(data, 1);}
    | TK_LIT_FALSE {Nodo * data[1] = {$1}; $$ = criaNodo(data, 1);}
    ;

%%

void yyerror(char const *s){
    fprintf(stderr, "Erro Encontrado: %s na linha %d \n", s, get_line_number());
}
    
#endif // PARSER
