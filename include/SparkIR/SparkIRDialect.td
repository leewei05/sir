#ifndef SPARKIRDIALECT
#define SPARKIRDIALECT

include "mlir/IR/OpBase.td"

def SparkIR_Dialect : Dialect {
    let name = "sparkir";
    let summary = "An educational out-of-tree MLIR dialect.";
    let description = [{ yes sir }];
    let cppNamespace = "::mlir::sparkir";
}

class SparkIR_Op<string mnemonic, list<Trait> traits = []> :
        Op<SparkIR_Dialect, mnemonic, traits>;

#endif // SPARKIRDIALECT_H
