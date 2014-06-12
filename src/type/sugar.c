#include "sugar.h"

bool type_sugar(ast_t* ast, int verbose)
{
  switch(ast_id(ast))
  {
    case TK_CALL:
      // TODO: check for syntactic sugar for apply
      break;

    case TK_ASSIGN:
      // TODO: check for syntactic sugar for update
      break;

    case TK_RECOVER:
      // TODO: remove things from following scope
      break;

    case TK_FOR:
      // TODO: syntactic sugar for a while loop
      break;

    // TODO: syntactic sugar for partial application

    default: {}
  }

  return true;
}