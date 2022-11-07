/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_TEST_TAB_H_INCLUDED
# define YY_YY_TEST_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    HAI = 258,                     /* HAI  */
    COMMA = 259,                   /* COMMA  */
    HAS = 260,                     /* HAS  */
    A = 261,                       /* A  */
    IT = 262,                      /* IT  */
    HASA = 263,                    /* HASA  */
    NUM = 264,                     /* NUM  */
    VAR = 265,                     /* VAR  */
    YR = 266,                      /* YR  */
    FUNC = 267,                    /* FUNC  */
    I = 268,                       /* I  */
    IM = 269,                      /* IM  */
    IN = 270,                      /* IN  */
    LOOP = 271,                    /* LOOP  */
    EXIT = 272,                    /* EXIT  */
    ELSE = 273,                    /* ELSE  */
    IFELSE = 274,                  /* IFELSE  */
    PRINT = 275,                   /* PRINT  */
    IF = 276,                      /* IF  */
    BREAK = 277,                   /* BREAK  */
    SWITCH = 278,                  /* SWITCH  */
    CASE = 279,                    /* CASE  */
    NUMBR = 280,                   /* NUMBR  */
    YARN = 281,                    /* YARN  */
    NUMBAR = 282,                  /* NUMBAR  */
    TROOF = 283,                   /* TROOF  */
    BUKKIT = 284,                  /* BUKKIT  */
    NOOB = 285,                    /* NOOB  */
    EMPT = 286,                    /* EMPT  */
    BTW = 287,                     /* BTW  */
    INPUT = 288,                   /* INPUT  */
    GTFO = 289,                    /* GTFO  */
    DEFAULT = 290,                 /* DEFAULT  */
    UPPIN = 291,                   /* UPPIN  */
    OUTTA = 292,                   /* OUTTA  */
    FOUND = 293,                   /* FOUND  */
    MKAY = 294,                    /* MKAY  */
    IFUSAYSO = 295,                /* IFUSAYSO  */
    AN = 296,                      /* AN  */
    SUM = 297,                     /* SUM  */
    DIFF = 298,                    /* DIFF  */
    MULT = 299,                    /* MULT  */
    DIV = 300,                     /* DIV  */
    MOD = 301,                     /* MOD  */
    MIN = 302,                     /* MIN  */
    MAX = 303,                     /* MAX  */
    IFSTMT = 304,                  /* IFSTMT  */
    IFBREAK = 305,                 /* IFBREAK  */
    NERFIN = 306,                  /* NERFIN  */
    WILE = 307,                    /* WILE  */
    TIL = 308,                     /* TIL  */
    VISIBLE = 309,                 /* VISIBLE  */
    DIFFERENT = 310,               /* DIFFERENT  */
    R = 311,                       /* R  */
    BOTH = 312,                    /* BOTH  */
    SAEM = 313,                    /* SAEM  */
    EITHER = 314,                  /* EITHER  */
    WON = 315,                     /* WON  */
    NOT = 316,                     /* NOT  */
    ALL = 317,                     /* ALL  */
    ANY = 318,                     /* ANY  */
    OF = 319,                      /* OF  */
    OIC = 320,                     /* OIC  */
    OMG = 321,                     /* OMG  */
    STRING = 322,                  /* STRING  */
    IfWithoutElse = 323            /* IfWithoutElse  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TEST_TAB_H_INCLUDED  */
