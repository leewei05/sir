#include "mlir/IR/MLIRContext.h"
#include "mlir/InitAllDialects.h"
#include "mlir/InitAllPasses.h"
#include "mlir/Support/FileUtilities.h"
#include "mlir/Tools/mlir-opt/MlirOptMain.h"

#include "SIR/SIRDialect.h"

int main(int argc, char **argv) {
  mlir::registerAllPasses();

  mlir::DialectRegistry registry;
  registry.insert<mlir::sir::SIRDialect>();
  return mlir::asMainReturnCode(
      mlir::MlirOptMain(argc, argv, "SIR optimizer driver\n", registry));
}
