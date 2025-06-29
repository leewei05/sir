#ifndef SPARKIR_TYPES
#define SPARKIR_TYPES

include "mlir/IR/AttrTypeBase.td"
include "SparkIR/SparkIRDialect.td"

class SparkIR_Type<string name, string typeMnemonic, list<Trait> traits = []>
    : TypeDef<SparkIR_Dialect, name, traits> {
  let mnemonic = typeMnemonic;
}

#endif // SPARKIR_TYPES
