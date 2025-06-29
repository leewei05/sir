#include "SparkIR/SparkIRDialect.h"
#include "SparkIR/SparkIROps.h"
#include "SparkIR/SparkIRTypes.h"

using namespace mlir;
using namespace mlir::sparkir;

#include "SparkIR/SparkIROpsDialect.cpp.inc"

void SparkIRDialect::initialize() {
  addOperations<
#define GET_OP_LIST
#include "SparkIR/SparkIROps.cpp.inc"
      >();
  registerTypes();
}
