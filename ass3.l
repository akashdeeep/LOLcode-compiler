%{
#include "parser.tab.h"
#include <stdio.h>
#include "misc.h"


#define YYSTYPE int
extern YYSTYPE yyltype;

%}

%option noyywrap
%option yylineno

start "OBTW"
end "TLDR"



%%
{start}(.*\n)*.*{end} {multiline_comment();};
"BTW".* {printf("%s is initialisation of a comment \n",yytext);}

[\t];
[\s];
[\n] { yylineno = yylineno + 1;};
"NUMBR" {trace("NUMBR");strcpy(yylval.char_ptr, yytext);return NUMBR;}
"YARN" {trace("YARN");strcpy(yylval.char_ptr, yytext);return YARN;}
"NUMBAR" {trace("NUMBAR");strcpy(yylval.char_ptr, yytext);return NUMBAR;}
"TROOF" {trace("TROOF");strcpy(yylval.char_ptr, yytext);return TROOF;}
"BUKKIT" {trace("BUKKIT");strcpy(yylval.char_ptr, yytext);return BUKKIT;}
"NOOB" {trace("NOOB");strcpy(yylval.char_ptr, yytext);return NOOB;}
"GIMMEH" {trace("INPUT");return INPUT;}
"GTFO" {trace("GTFO");return GTFO;}
"ITZ" {trace("IT");return IT;}
"HAI 1.2"|"HAI 1.3" {trace("HAI");return HAI;}
"I"[ ]+"HAS"[ ]+"A" {trace("HAS");return HAS;}
"I"[ ]+"IZ" {printf("%s",yytext);trace("I");return I;}
"A" {trace("A");return A;}
"HAS"[ ]+"A" {trace("HASA");return HASA;}
"IM" {trace("IM");return IM;}
"IN" {trace("IN");return IN;}
"YR" {trace("YR");return YR;}
"KTHXBYE" {trace("EXIT");return EXIT;}
"NO"[ ]+"WAI" {trace("ELSE");return ELSE;}
"RELSE" {trace("IFELSE");return IFELSE;}
"VISIBLE" {trace("VISIBLE");return VISIBLE;}
"O"[ ]+"RLY?" {trace("IFSTMT");return IFSTMT;}
"YA"[ ]+"RLY" {trace("IF");return IF;}
"OIC" {trace("IFBREAK");return IFBREAK;}
"WTF\?" {trace("SWITCH");printf("SOMETHANG");return SWITCH;}
"OMGWTF" {trace("DEFAULT");return DEFAULT;}
"NERFIN" {trace("NERFIN");return NERFIN;}
"UPPIN" {trace("UPPIN");return UPPIN;}
"OUTTA" {trace("OUTTA");return OUTTA;}
"FOUND" {trace("FOUND");return FOUND;}
"MKAY" {trace("MKAY");printf(" kay fdkjf");return MKAY;}
"AN" {trace("AN");return AN;}
"OMG" {printf(" sfdsfaf ");trace("OMG");return OMG;}
"TIL" {trace("TIL");return TIL;}
"WILE" {trace("WILE");return WILE;}
"BOTH" {trace("BOTH");return BOTH;}
"SAEM" {trace("SAEM");return SAEM;}
"OF" {trace("OF");return OF;}
"EITHER" {trace("EITHER");return EITHER;}
"WON" {trace("WON");return WON;}
"NOT" {trace("NOT");return NOT;}
"ALL" {trace("ALL");return ALL;}
"ANY" {trace("ANY");return ANY;}
"DIFFRINT" {trace("DIFFERENT");return DIFFERENT;}
"SUM"[ ]+"OF" {trace("SUM");return SUM;}
"DIFF"[ ]+"OF" {trace("DIFF");return DIFF;}
"PRODUKT"[ ]+"OF" {trace("MULT");return MULT;}
"QUOSHUNT"[ ]+"OF" {trace("DIV");return DIV;}
"MOD"[ ]+"OF" {trace("MOD");return MOD;}
"BIGGR"[ ]+"OF" {trace("MAX");return MAX;}
"SMALLR"[ ]+"OF" {trace("MIN");return MIN;}
"R" {trace("R");return R;}
"," {printf("comma");trace("COMMA");return COMMA;}
"IF"[ ]+"U"[ ]+"SAY"[ ]+"SO" {trace("IFUSAYSO");return IFUSAYSO;}
"HOW"[ ]+"IZ"[ ]+"I" {trace("FUNC");return FUNC;}
[A-Za-z_][A-Za-z0-9_]* {strcpy(yylval.char_ptr, yytext);trace("VAR");return VAR;}
[0-9]+ {strcpy(yylval.char_ptr, yytext);trace("NUM");return NUM;}
"\"".*"\"" {if(yytext[yyleng-1]!='"'){yyerror("String is unclosed\n");}trace("STRING");strcpy(yylval.char_ptr, yytext);return STRING;}
"" {trace("EMPT");strcpy(yylval.char_ptr, yytext);return EMPT;}
%%
void multiline_comment()
{
    int abc;
    while ((abc = input()) != 0){

        if (abc == '*'){
          
	  while ((abc = input()) == '*');
           
	   if (abc=='/')
               return;

            if (abc== 0)
                break;
        }
    }     yyerror("Unterminated   Multiline   Comment");