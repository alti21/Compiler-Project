grammar Pcl2;

@lexer::members {

  int nesting = 0;

}

@header {
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;
}

prog: stat+ ;

stat: assign NEWLINE

    | expr NEWLINE

    | declaration NEWLINE

    | if_stm NEWLINE

    | while_stm NEWLINE
    
    | print NEWLINE
    
    | call NEWLINE
    
  // | pass_by_value

    | NEWLINE

    ;
    //x = set_var(x);
//pass_by_value:  decl '==' expr ';'
//
//|variable_id '==' expr ';'
//
//      ; 

call: ID '(' expr ')' ;

if_stm: IF '(' expr ')' stat ;

while_stm: WHILE '(' expr ')' stat ;

print: PRINT INSERTION out;

out: variable_id | STRING;

declaration: decl | func;

return_type: ID;

returning: 'return' ID;

func: return_type ':' ID '(' assign ')' '{' stat+  '}' returning ;
//declList     : decl ( ',' decl )* ;
decl: type_id variable_list ;
//var_list to end
//then type_id to end
variable_list: variable_id ;

variable_id: ID;

type_id: ID;
//for if stmt: [54 44 30]
assign: variable_id '=' expr

      | declaration '=' expr ;

expr locals [ TypeSpec *type = nullptr ]
	:  expr MUL_DIV_OP expr     # mul_div_op

    |  expr ADD_SUB_OP expr     # add_sub_op

    |  INT                      # integer

    |  CHAR                     # char

    |  ID                       # identifier

    |  '(' expr ')'             #parentheses
    
    |	expr EQUALITY expr			#equality
    
   // |   call					#f_call

    ;

EQUALITY: '===' ;

MUL_DIV_OP: MUL_OP | DIV_OP ;

ADD_SUB_OP: ADD_OP | SUB_OP ;

MUL_OP: '*' ;

DIV_OP: '/' ;

ADD_OP: '+' ;

SUB_OP: '-' ;

INT: [0-9]+;

CHAR: '\''[ a-zA-Z0-9\p{P}]'\'';

IF: 'if' ;

WHILE: 'while' ;

PRINT:  'print' ;

INSERTION: '<<' ;

STRING: '"'[ a-zA-Z0-9\p{P}][ a-zA-Z0-9\p{P}]*'"';

ID: [a-zA-Z_][a-zA-Z_0-9]* ;

//IDEN:  [a-z_][a-z_]* ;

COMMENT: '#' ~[\r\n]* ->skip ;

WS: [ \t] -> skip ;

NEWLINE: '\r'? '\n' {nesting==0}?;

LINE_ESCAPE: '\\' '\r'? '\n' -> skip ;

IGNORE_NEWLINE: '\r'? '\n' {nesting>0}? -> skip ;

LPAREN: '(' {nesting++;} ;

RPAREN: ')' {nesting--;} ;

LBRACK: '[' {nesting++;} ;

RBRACK: ']' {nesting--;} ;
