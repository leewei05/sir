#ifndef SIRDIALECT
#define SIRDIALECT

include "mlir/IR/OpBase.td"

def SIR_Dialect : Dialect {
    let name = "sir";
    let summary = "An educational out-of-tree MLIR dialect.";
    let description = [{ yes sir }];
    let cppNamespace = "::mlir::sir";
}

class SIR_Op<string mnemonic, list<Trait> traits = []> :
        Op<SIR_Dialect, mnemonic, traits>;

#endif // SIRDIALECT_H