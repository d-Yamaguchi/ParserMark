// arith.h
// *** DO NOT EDIT BY HAND ***
// automatically generated by elkhound, from arith.gr

#ifndef ARITH_H
#define ARITH_H

#include "useract.h"     // UserActions


// parser context class
class 
#line 14 "arith.gr"
 Arith : public UserActions {
public:
  // there's nothing to put in the context for this example

#line 19 "arith.h"


private:
  USER_ACTION_FUNCTIONS      // see useract.h

  // declare the actual action function
  static SemanticValue doReductionAction(
    Arith *ths,
    int productionId, SemanticValue const *semanticValues,
  SourceLoc loc);

  // declare the classifier function
  static int reclassifyToken(
    Arith *ths,
    int oldTokenType, SemanticValue sval);

  int action0___EarlyStartSymbol(SourceLoc loc, int top);
  int action1_Exp(SourceLoc loc, int e1, int e2);
  int action2_Exp(SourceLoc loc, int e1, int e2);
  int action3_Exp(SourceLoc loc, int e1, int e2);
  int action4_Exp(SourceLoc loc, int e1, int e2);
  int action5_Exp(SourceLoc loc, int n);
  int action6_Exp(SourceLoc loc, int p);
  int action7_ParenthesizedExp(SourceLoc loc, int e);

// the function which makes the parse tables
public:
  virtual ParseTables *makeTables();
};

#endif // ARITH_H
