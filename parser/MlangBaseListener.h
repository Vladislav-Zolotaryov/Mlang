
// Generated from ./parser/Mlang.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "MlangListener.h"


/**
 * This class provides an empty implementation of MlangListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  MlangBaseListener : public MlangListener {
public:

  virtual void enterProg(MlangParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(MlangParser::ProgContext * /*ctx*/) override { }

  virtual void enterExpr(MlangParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(MlangParser::ExprContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

