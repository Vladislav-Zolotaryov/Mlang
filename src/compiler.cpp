#include <iostream>
#include "antlr4-runtime/antlr4-runtime.h"
#include "../parser/ExprLexer.h"
#include "../parser/ExprParser.h"
#include "../parser/ExprVisitor.h"

using namespace std;
using namespace antlr4;



int main(int argc, const char* argv[]) {
    std::ifstream stream;
    stream.open("main.expr");
    
    ANTLRInputStream input(stream);
    ExprLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    ExprParser parser(&tokens);    
    ExprParser::FileContext* tree = parser.file();
    ExprVisitor visitor;
    Expr scene = visitor.visitFile(tree).as<Scene>();
    scene.draw();
    return 0;
}