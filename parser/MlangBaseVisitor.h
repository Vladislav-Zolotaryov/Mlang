
// Generated from ./parser/Mlang.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "MlangVisitor.h"


/**
 * This class provides an empty implementation of MlangVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MlangBaseVisitor : public MlangVisitor {
public:

  virtual std::any visitProg(MlangParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(MlangParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }


};

