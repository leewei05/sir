#ifndef SIR_TYPES
#define SIR_TYPES

include "SIR/SIRDialect.td"

class SIR_Type<string name, string typeMnemonic, list<Trait> traits = []>
    : TypeDef<SIR_Dialect, name, traits> {
  let mnemonic = typeMnemonic;
}

#endif // SIR_TYPES