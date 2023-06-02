#include <iostream>

#include "antlr4-runtime.h"
#include "../parser/MlangLexer.h"
#include "../parser/MlangParser.h"

using namespace std;
using namespace antlr4;

int main(int argc, const char* argv[]) {
    std::ifstream stream;
    stream.open("input.mlang");
    
    ANTLRInputStream input(stream);
    MlangLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    MlangParser parser(&tokens);    
    
    MlangParser::FileContext* tree = parser.file();

    return 0;
}