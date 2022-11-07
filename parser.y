%{
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "symbol_table.h"
#include "scope.h"
#include "misc.h"
#include "stack.h"
#include "test.tab.h"
#include "lex.yy.c"

#define TRACE_ENABLED false


// Number of rows in Hash table for symbol and constant tables
#define MAX_NODES 1000

void yyerror(const char * s);

symbol_node_t *symbol_table[MAX_NODES];
symbol_node_t *constant_table[MAX_NODES];

scope_node_t *curr_scope;

extern char *yytext;
extern int yylineno;

char datatype[100];
int num_params;

symbol_node_t * redefined_error_check(char *symbol);


// ICG 3-address-code
stack *three_address_code_stack;
TAC_code_stack *TAC_code;

TAC_buffer_node *curr_buff = NULL;
bool BUFFER_ENABLED = true;
// If BUFFER_ENABLED is true, TAC is directed to a buffer instead of stdout

char temp_buf[100];
int LABEL_COUNT = 1;
int loopStartLabel = -1, loopEndLabel = -1;
extern FILE *fp;
%}
%start start

%token HAI COMMA
%token HAS A IT HASA
%token <char_ptr> NUM 
%token <char_ptr> VAR
%token YR FUNC I 
%token IM IN LOOP EXIT 
%token ELSE IFELSE PRINT IF 
%token BREAK SWITCH CASE
%token <char_ptr> NUMBR 
%token <char_ptr> YARN
%token <char_ptr> NUMBAR
%token <char_ptr> TROOF
%token <char_ptr> BUKKIT
%token <char_ptr> NOOB 
%token <char_ptr> EMPT
%token BTW INPUT GTFO
%token DEFAULT UPPIN OUTTA 
%token FOUND MKAY IFUSAYSO 
%token AN SUM DIFF MULT DIV MOD MIN MAX
%token IFSTMT
%token IFBREAK
%token NERFIN WILE TIL 
%token VISIBLE DIFFERENT R
%token BOTH SAEM EITHER WON NOT ALL ANY OF
%token OIC OMG
%token <char_ptr> STRING

%type <char_ptr> Type
%type <a> IfNotGoto RepeatForLabel ElseNotGoto IfWithoutElse IncTop ForExitGoto

%left '*' '/' '%'
%left '+' '-' 
%left '(' ')'  

%nonassoc IfWithoutElse
%nonassoc ELSE


%%

start :Prog EXIT
    ;


Prog:  Prog Funct
    | Prog Declaration
    | Prog PreProDirective
    | PreProDirective
    | Funct
    | Declaration
    | Prog PrintFunc
    | PrintFunc
    ;



PreProDirective : HAI
    ;

/*Identifier_List
    : Array_Notation
    | IDENTIFIER ',' Identifier_List        {   redeclaration_error_check($1);
                                                symbl_tbl_insrt(symbol_table,$1 , curr_scope->scope_num, datatype, "", yylineno);
                                            }
    | '*' IDENTIFIER ',' Identifier_List    {
                                                redeclaration_error_check($2);
                                                int len = strlen(datatype);
                                                datatype[len] = '*';
                                                datatype[len +1] = '\0';
                                                symbl_tbl_insrt(symbol_table,$2 , curr_scope->scope_num, datatype, "", yylineno);
                                                datatype[len] = '\0';
                                            }
    | Array_Notation ',' Identifier_List
    | IDENTIFIER                            {
                                                redeclaration_error_check($1);
                                                symbl_tbl_insrt(symbol_table,$1 , curr_scope->scope_num, datatype, "", yylineno);}
    | '*' IDENTIFIER                        {
                                                redeclaration_error_check($2);
                                                int len = strlen(datatype);
                                                datatype[len] = '*';
                                                datatype[len +1] = '\0';
                                                symbl_tbl_insrt(symbol_table,$2 , curr_scope->scope_num, datatype, "", yylineno);
                                                datatype[len] = '\0';
                                            }
    ;

Array_Notation
    : VAR '[' NUM ']'   {
                                                char arrayType[100] = "Array: ";strcat(arrayType, datatype);
                                                arr_dimension_check($1, $3);
                                                symbl_tbl_insrt(symbol_table,$1, curr_scope->scope_num, arrayType, $3, yylineno);
                                                arr_subscript_check($1);
                                            }
    | '*' VAR '[' NUM ']'   {
                                                    redeclaration_error_check($2);
                                                    arr_dimension_check($2, $4);
                                                    int len = strlen(datatype);
                                                    datatype[len] = '*';
                                                    datatype[len +1] = '\0';
                                                    char arrayType[100] = "Array: ";strcat(arrayType, datatype);
                                                    symbl_tbl_insrt(symbol_table,$2, curr_scope->scope_num, arrayType, $4, yylineno);
                                                    datatype[len] = '\0';
                                                    arr_subscript_check($2);
                                                }
    | '&' VAR '[' NUM ']'   {
                                                    redeclaration_error_check($2);
                                                    arr_dimension_check($2, $4);
                                                    char arrayType[100] = "Array: ";strcat(arrayType, datatype);
                                                    symbl_tbl_insrt(symbol_table,$2, curr_scope->scope_num, arrayType, $4, yylineno);
                                                    arr_subscript_check($2);
                                                }
    | VAR '[' '-' NUM ']' {
                                        yyerror(strcat($1, " has non-positive array size"));
                                    }
    | '*' VAR '[' '-' NUM ']' {
                                        yyerror(strcat($2, " has non-positive array size"));
                                    }
    | '&' VAR '[' '-' NUM ']' {
                                        yyerror(strcat($2, " has non-positive array size"));
                                    }
    ;
*/


Argument : Parameter {printf(" para ");}
    |
    ;
ArgumentFunction : ParameterFunction {printf(" para ");}
    |
    ;

ParameterFunction : ParameterFunction AN YR E 
                | YR E
                ;

Parameter : Parameter AN YR E
    | YR E {printf(" NO ");}
    ;
Declaration : HAS VAR IT E
            | HAS VAR IT A Type
            | FunctCall
            | Assignment
            | ArrayUsage
            ;

Type : BUKKIT{ strcpy($$, $1); strcpy(datatype, $1);}
    | NUMBAR{ strcpy($$, $1); strcpy(datatype, $1);}
    | NUMBR{ strcpy($$, $1); strcpy(datatype, $1);}
    | YARN{ strcpy($$, $1); strcpy(datatype, $1);}
    | TROOF{ strcpy($$, $1); strcpy(datatype, $1);}
    | NOOB{ strcpy($$, $1); strcpy(datatype, $1);}
    | EMPT{ strcpy($$, $1); strcpy(datatype, $1);}
    ;

Assignment: VAR R E
    | VAR R FunctCall
    | VAR R ArrayUsage
    ;

FunctCall : I VAR Argument MKAY { scope_error_check($2); num_param_check($2); check_is_function($2); /*symbl_tbl_insrt(symbol_table, $1, curr_scope->scope_num, "Function", "", yylineno);trace("Function Call\n"); */}
            ;

ArrayUsage : VAR HASA VAR IT E
            ;


Funct : FUNC VAR ArgumentFunction {   curr_buff = get_new_node(TAC_code);
                                sprintf(temp_buf, "Function  %s begins here:\n", $2);
                                strcat(curr_buff->code, temp_buf);
                            }
        comp_stmt
                {

                                    symbol_node_t *node = redefined_error_check($2);
                                    char funcType[100] = "Function: ";
                                    strcat(funcType, datatype);

                                    if(!node) {
                                        symbol_node_t *node = symbl_tbl_insrt(symbol_table,$2, curr_scope->scope_num, funcType, "", yylineno);
                                        node->num_params = num_params;
                                        curr_buff = get_new_node(TAC_code);
                                        sprintf(temp_buf, "Function ends here:\n");
                                        strcat(curr_buff->code, temp_buf);
                                    }


                                    else {
                                        node->is_function_defined = true;
                                        node->num_params = num_params;
                                        curr_buff = get_new_node(TAC_code);
                                        sprintf(temp_buf, "Function ends here\n");
                                        strcat(curr_buff->code, temp_buf);
                                    }

                                }
        ;
comp_stmt : Scope_Start StmtList Scope_End


Scope_Start : EMPT {curr_scope = add_child_scope(curr_scope);}
Scope_End : IFUSAYSO {curr_scope = goto_parent_scope(curr_scope);}

StmtList : StmtList Stmt
        |comp_stmt StmtList
        |
        ;

Stmt: loopy
    | Declaration
    | IfStmt
    | PrintFunc
    | GTFO
    | Return_Statement
    | Switch
    ;

Return_Statement : FOUND ParameterFunction   {trace("Return_Statement Call\n");} 
                ;

Switch : VAR COMMA SWITCH Cases Default IFBREAK
        ;

Cases : Cases Case
    |
    ;

Case : OMG STRING StmtList
    ;

Default : DEFAULT  StmtList
    |
    ;

loopy : Type IM IN YR VAR ForExitGoto Operation YR VAR IncTop Const RepeatForLabel E StmtList IM OUTTA YR VAR{
                                                                                                TAC_buffer_node *temp = TAC_code->stack_arr[TAC_code->top -1];
                                                                                                while(temp->next != NULL)
                                                                                                    temp = temp->next;
                                                                                                temp->next = TAC_code->stack_arr[TAC_code->top];
                                                                                                TAC_code->stack_arr[TAC_code->top] = NULL;

                                                                                                while(temp->next != NULL)
                                                                                                    temp = temp->next;
                                                                                                temp->next = TAC_code->stack_arr[TAC_code->top -2];
                                                                                                TAC_code->stack_arr[TAC_code->top -2] = TAC_code->stack_arr[TAC_code->top -1];
                                                                                                TAC_code->stack_arr[TAC_code->top -1] = NULL;
                                                                                                TAC_code->top -= 2;

                                                                                                curr_buff = get_new_node(TAC_code);
                                                                                                sprintf(curr_buff->code, "GOTO Label%d\n", $12);
                                                                                                curr_buff = get_new_node(TAC_code);
                                                                                                sprintf(curr_buff->code, "\nLabel%d:\n", $6);
                                                                                            }
    ;

ForExitGoto
    :   {
            stack_node reg = popStack(three_address_code_stack);
            curr_buff = get_new_node(TAC_code);

            sprintf(temp_buf, "IF NOT %s GOTO Label%d\n", reg.var_name, LABEL_COUNT);
            strcat(curr_buff->code, temp_buf);
            loopEndLabel = LABEL_COUNT;

            $$ = LABEL_COUNT++;
            TAC_code->top++;
        }
    ;

IncTop
    : { TAC_code->top++; }
    ;

RepeatForLabel
    :   {
            curr_buff = get_new_node(TAC_code);
            sprintf(temp_buf, "Label%d:\n", LABEL_COUNT);
            strcat(curr_buff->code, temp_buf);
            loopStartLabel = LABEL_COUNT;
            $$ = LABEL_COUNT++;
        }
    ;



Const : TIL
        | WILE
        ;

Operation : UPPIN
        | NERFIN
        ;

Temp : AN Printables Temp
    |
    ;

IfStmt : E IfNotGoto IFSTMT IF StmtList {
                                                                                        curr_buff = get_new_node(TAC_code);
                                                                                        sprintf(temp_buf, "\nLabel%d:\n", $2);
                                                                                        strcat(curr_buff->code, temp_buf);
                                                                                    }
        IFBREAK
        | E IfNotGoto IFSTMT IF StmtList ELSE ElseNotGoto {
                                                                                        curr_buff = get_new_node(TAC_code);
                                                                                        sprintf(temp_buf, "\nLabel%d:\n", $2);
                                                                                        strcat(curr_buff->code, temp_buf);
                                                                                    }
        StmtList {
                                                                                        curr_buff = get_new_node(TAC_code);
                                                                                        sprintf(temp_buf, "\nLabel%d:\n", $7);
                                                                                        strcat(curr_buff->code, temp_buf);
                                                                                    } %prec ELSE
        IFBREAK
        ;

IfNotGoto
    :   {
            stack_node reg = popStack(three_address_code_stack);
            curr_buff = get_new_node(TAC_code);

            if(BUFFER_ENABLED) {
                sprintf(temp_buf, "IF NOT %s GOTO Label%d\n", reg.var_name, LABEL_COUNT);
                strcat(curr_buff->code, temp_buf);
            }
            else
                printf("IF NOT %s GOTO Label%d\n", reg.var_name, LABEL_COUNT);

            $$ = LABEL_COUNT++;
        }
    ;

ElseNotGoto
    :   {
            curr_buff = get_new_node(TAC_code);
            sprintf(temp_buf, "GOTO Label%d\n", LABEL_COUNT);
            strcat(curr_buff->code, temp_buf);
            $$ = LABEL_COUNT++;
        }
    ;



PrintFunc : VISIBLE Printables Temp
            ;


Printables : SUM E AN E
    | DIFF E AN E
    | MULT E AN E
    | DIV E AN E 
    | MOD E AN E 
    | STRING
    | NUM {printf(" num ");}
    | VAR
    | FunctCall
    ;



E : SUM E AN E
  | DIFF E AN E
  | MULT E AN E
  | DIV E AN E 
  | MOD E AN E 
  | BOTH SAEM E AN E
  | BOTH OF E AN E
  | EITHER OF E AN E
  | WON OF E AN E
  | NOT E
  | DIFFERENT E AN E
  | ALL OF E Temp MKAY
  | ANY OF E Temp MKAY
  | STRING
  | NUM {printf(" num ");}
  | VAR
  ;


%%
inline void print_TAC_operator(char *op) {

    curr_buff = get_new_node(TAC_code);
    stack_node op2 = popStack(three_address_code_stack);
    stack_node op1 = popStack(three_address_code_stack);

    pushStack(three_address_code_stack, TEMP_VAR);
    print_st(three_address_code_stack, curr_buff);

    if(BUFFER_ENABLED) {
        sprintf(temp_buf, " = %s %s %s\n", op1.var_name, op, op2.var_name);
        strcat(curr_buff->code, temp_buf);
    }
    else
        printf(" = %s %s %s\n", op1.var_name, op, op2.var_name);
}

// used the function defined in scope.c for checing the scope error
inline void scope_error_check(char *symbol){
    if(!scope_check(symbol_table, symbol, curr_scope)){
        yyerror(strcat(symbol, " not found in current or ancestor scopes"));
    }
}


// we had count of parameter which we are again verfitying 
// it should have equal count as it has in declaration.
inline void num_param_check(char *symbol) {

    symbol_node_t *node = scope_check(symbol_table, symbol, curr_scope);
    char msg[100] = "Too few arguments passed to ";
    if(node != NULL && num_params > node->num_params) {
        yyerror(strcat(msg, symbol));
    }
    else if(node != NULL && num_params < node->num_params) {
        yyerror(strcat(msg, symbol));
    }
}

inline void redeclaration_error_check(char *symbol){
    if(check_in_current_scope(symbol_table, symbol, curr_scope)){
        yyerror(strcat(symbol, " already declared in current scope"));
    }
}

symbol_node_t * redefined_error_check(char *symbol){
    symbol_node_t *node = scope_check(symbol_table, symbol, curr_scope);


    if(node != NULL && node->is_function_defined)
        yyerror(strcat(symbol, " : a redefinition"));

    return node;
}

inline void arr_dimension_check(char *symbol, char *arr_size){

    if(atoi(arr_size) < 1){ //  function of ascii to integer 
        yyerror(strcat(symbol, " has non-positive array size"));
    }
}

inline void arr_subscript_check(char *symbol){


    symbol_node_t *node = symbl_tbl_lkp(symbol_table, symbol);

    if(!strstr(node->type, "Array")){ // this function returns the first occurence of substring in other
        yyerror(strcat(symbol, " is not an array"));
    }
}



inline void void_param_check(char *type) {
    if(!strcmp(type, "void")) {
        yyerror("Parameter of function has void datatype");
    }
}

inline void check_is_function(char *func_name) {

    symbol_node_t *node = symbl_tbl_lkp(symbol_table, func_name);
    if(node == NULL) {
        yyerror(strcat(func_name, " function not declared"));
    }
    if(!strstr(node->type, "Function")) {
        yyerror(strcat(func_name, " is not a function"));
    }
}

inline void trace(char *s){
    if(TRACE_ENABLED)
        fprintf(stderr, FORE_CYN "%-20.20s%20.20s%20d\n" RESET, s, yytext, yylineno);
}

extern FILE *yyin;
int main(int argc , char **argv)
{
    curr_scope = init_scope();
    symbl_tbl_initlze(symbol_table);
    symbl_tbl_initlze(constant_table);
    three_address_code_stack = init_s();

    TAC_code = init_code_stack();
    printf("\n");
    yyin = fopen(argv[1], "r");
    yyparse();

    print_TAC_code(TAC_code);

    // symbl_tbl_prnt(symbol_table, "Symbol Table");
    // symbl_tbl_prnt(constant_table, "Constant Table"); 
    printf(FORE_GRN "\n\n Parsing of the sample input code given in test.c is  complete  ✔ \n\n" RESET);

    symbl_tbl_fr(symbol_table);
    symbl_tbl_fr(constant_table);

    // TODO: Free Scope
    f_s(three_address_code_stack);
    return 0;
}


void yyerror(const char *s) {


        printf(FORE_RED "%d : %s %s\n" RESET, yylineno, s, yytext ); // FOR_RED are for color, defined in ascii color code 

        // these re defined in misc.h so that we can use them here easily and convinently
    printf(FORE_RED "\nParsing failed for code in test.c ✘ \n\n" RESET);
    exit(-2);
}
