#ifndef SPARKIR_SPARKIROPS_H
#define SPARKIR_SPARKIROPS_H

#include "mlir/IR/BuiltinTypes.h"
#include "mlir/IR/Dialect.h"
#include "mlir/IR/OpDefinition.h"
#include "mlir/Interfaces/InferTypeOpInterface.h"
#include "mlir/Interfaces/SideEffectInterfaces.h"

#define GET_OP_CLASSES
#include "SparkIR/SparkIROps.h.inc"

#endif // SPARKIR_SPARKIROPS_H
