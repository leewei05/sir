#include "SIR/SIRTypes.h"

#include "SIR/SIRDialect.h"
#include "mlir/IR/Builders.h"
#include "mlir/IR/DialectImplementation.h"
#include "llvm/ADT/TypeSwitch.h"

using namespace mlir::sir;

#define GET_TYPEDEF_CLASSES
#include "SIR/SIROpsTypes.cpp.inc"

