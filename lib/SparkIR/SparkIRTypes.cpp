#include "SparkIR/SparkIRTypes.h"

#include "SparkIR/SparkIRDialect.h"
#include "mlir/IR/Builders.h"
#include "mlir/IR/DialectImplementation.h"
#include "llvm/ADT/TypeSwitch.h"

using namespace mlir::sparkir;

#define GET_TYPEDEF_CLASSES
#include "SparkIR/SparkIROpsTypes.cpp.inc"

