grammar Mlang;		
prog:	expr EOF ;
expr:	expr ('*'|'/') expr
    |	expr ('+'|'-') expr
    |	INT
    |	'(' expr ')'
    ;
WS  :   (' ')+ {skip();};
NEWLINE : [\r\n]+ -> skip;
INT     : [0-9]+ ;