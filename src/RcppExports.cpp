// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/qtlpvl.h"
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// lmresid_llt
MatrixXd lmresid_llt(const MapMatd& X, const MapMatd& Y);
RcppExport SEXP qtlpvl_lmresid_llt(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const MapMatd& >::type X(XSEXP );
        Rcpp::traits::input_parameter< const MapMatd& >::type Y(YSEXP );
        MatrixXd __result = lmresid_llt(X, Y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// lmresid_qr
MatrixXd lmresid_qr(const MapMatd& X, const MapMatd& Y);
RcppExport SEXP qtlpvl_lmresid_qr(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const MapMatd& >::type X(XSEXP );
        Rcpp::traits::input_parameter< const MapMatd& >::type Y(YSEXP );
        MatrixXd __result = lmresid_qr(X, Y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// lmresid_svd
MatrixXd lmresid_svd(const MapMatd& X, const MapMatd& Y, const double threshold = 1e-7);
RcppExport SEXP qtlpvl_lmresid_svd(SEXP XSEXP, SEXP YSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const MapMatd& >::type X(XSEXP );
        Rcpp::traits::input_parameter< const MapMatd& >::type Y(YSEXP );
        Rcpp::traits::input_parameter< const double >::type threshold(thresholdSEXP );
        MatrixXd __result = lmresid_svd(X, Y, threshold);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// lmresid_symmEigen
MatrixXd lmresid_symmEigen(const MapMatd& X, const MapMatd& Y, const double threshold = 1e-7);
RcppExport SEXP qtlpvl_lmresid_symmEigen(SEXP XSEXP, SEXP YSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const MapMatd& >::type X(XSEXP );
        Rcpp::traits::input_parameter< const MapMatd& >::type Y(YSEXP );
        Rcpp::traits::input_parameter< const double >::type threshold(thresholdSEXP );
        MatrixXd __result = lmresid_symmEigen(X, Y, threshold);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// lmresid_cov
MatrixXd lmresid_cov(const MapMatd& X, const MapMatd& Y, const double threshold = 1e-7);
RcppExport SEXP qtlpvl_lmresid_cov(SEXP XSEXP, SEXP YSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const MapMatd& >::type X(XSEXP );
        Rcpp::traits::input_parameter< const MapMatd& >::type Y(YSEXP );
        Rcpp::traits::input_parameter< const double >::type threshold(thresholdSEXP );
        MatrixXd __result = lmresid_cov(X, Y, threshold);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// lmresid_cov_det
double lmresid_cov_det(const MapMatd& X, const MapMatd& Y, const bool logarithm = true, const double threshold = 1e-7);
RcppExport SEXP qtlpvl_lmresid_cov_det(SEXP XSEXP, SEXP YSEXP, SEXP logarithmSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const MapMatd& >::type X(XSEXP );
        Rcpp::traits::input_parameter< const MapMatd& >::type Y(YSEXP );
        Rcpp::traits::input_parameter< const bool >::type logarithm(logarithmSEXP );
        Rcpp::traits::input_parameter< const double >::type threshold(thresholdSEXP );
        double __result = lmresid_cov_det(X, Y, logarithm, threshold);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// det_AtA
double det_AtA(const MapMatd& X, bool logarithm = true);
RcppExport SEXP qtlpvl_det_AtA(SEXP XSEXP, SEXP logarithmSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const MapMatd& >::type X(XSEXP );
        Rcpp::traits::input_parameter< bool >::type logarithm(logarithmSEXP );
        double __result = det_AtA(X, logarithm);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}