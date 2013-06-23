// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// readSvmLight
List readSvmLight(std::string filename);
RcppExport SEXP sparsity_readSvmLight(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    std::string filename = Rcpp::as<std::string >(filenameSEXP);
    List __result = readSvmLight(filename);
    return Rcpp::wrap(__result);
END_RCPP
}
// writeSvmLight
List writeSvmLight(Eigen::MappedSparseMatrix<double> inputMatrix, NumericVector labels, std::string fileName);
RcppExport SEXP sparsity_writeSvmLight(SEXP inputMatrixSEXP, SEXP labelsSEXP, SEXP fileNameSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Eigen::MappedSparseMatrix<double> inputMatrix = Rcpp::as<Eigen::MappedSparseMatrix<double> >(inputMatrixSEXP);
    NumericVector labels = Rcpp::as<NumericVector >(labelsSEXP);
    std::string fileName = Rcpp::as<std::string >(fileNameSEXP);
    List __result = writeSvmLight(inputMatrix, labels, fileName);
    return Rcpp::wrap(__result);
END_RCPP
}