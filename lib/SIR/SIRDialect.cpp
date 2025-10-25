#include "SIR/SIRDialect.h"
#include "SIR/SIROps.h"
#include "SIR/SIRTypes.h"

using namespace mlir;
using namespace mlir::sir;

#include "SIR/SIROpsDialect.cpp.inc"

void SIRDialect::initialize() {
  addOperations<
#define GET_OP_LIST
#include "SIR/SIROps.cpp.inc"
      >();
}
