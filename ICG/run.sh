yacc parser.y -d
lex lexical-analysis.l
cc y.tab.c lex.yy.c -ll -L -ly
./a.out < input.c > output.txt
