#include <iostream>

#include "./parser/MlangBaseListener.h"
#include "./parser/MlangLexer.h"
#include "./parser/MlangParser.h"
#include "antlr4-runtime.h"
#include "src/parser/MlangVisitor.h"

using namespace std;
using namespace antlr4;

class ExpressionListener : public MlangBaseListener {

  void enterExpr(MlangParser::ExprContext *ctx) { std::cout << "enter"; }

  void exitExpr(MlangParser::ExprContext *ctx) { std::cout << "exit"; }

};

int main(int argc, const char* argv[]) {
  std::ifstream stream;
  stream.open("input.mlang");

  ANTLRInputStream input(stream);
  MlangLexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  MlangParser parser(&tokens);

  ExpressionListener listener;

  tree::ParseTree *tree = parser.expr();

  antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

  return 0;
}