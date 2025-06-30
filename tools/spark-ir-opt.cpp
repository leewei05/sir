#include "mlir/IR/MLIRContext.h"
#include "mlir/InitAllDialects.h"
#include "mlir/InitAllPasses.h"
#include "mlir/Support/FileUtilities.h"
#include "mlir/Tools/mlir-opt/MlirOptMain.h"

#include "SparkIR/SparkIRDialect.h"

int main(int argc, char **argv) {
  mlir::registerAllPasses();

  mlir::DialectRegistry registry;
  registry.insert<mlir::sparkir::SparkIRDialect>();
  return mlir::asMainReturnCode(
      mlir::MlirOptMain(argc, argv, "SparkIR optimizer driver\n", registry));
}
