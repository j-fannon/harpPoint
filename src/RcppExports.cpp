// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// ecoval
List ecoval(NumericVector obs, NumericVector pred, NumericVector costloss, NumericVector thresholds);
RcppExport SEXP _harpPoint_ecoval(SEXP obsSEXP, SEXP predSEXP, SEXP costlossSEXP, SEXP thresholdsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pred(predSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type costloss(costlossSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type thresholds(thresholdsSEXP);
    rcpp_result_gen = Rcpp::wrap(ecoval(obs, pred, costloss, thresholds));
    return rcpp_result_gen;
END_RCPP
}
// sort_members
NumericMatrix sort_members(NumericMatrix x, bool byrow);
RcppExport SEXP _harpPoint_sort_members(SEXP xSEXP, SEXP byrowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type byrow(byrowSEXP);
    rcpp_result_gen = Rcpp::wrap(sort_members(x, byrow));
    return rcpp_result_gen;
END_RCPP
}
// rankHistogram
NumericVector rankHistogram(NumericVector obs, NumericMatrix fc);
RcppExport SEXP _harpPoint_rankHistogram(SEXP obsSEXP, SEXP fcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type fc(fcSEXP);
    rcpp_result_gen = Rcpp::wrap(rankHistogram(obs, fc));
    return rcpp_result_gen;
END_RCPP
}
// fcprob
NumericMatrix fcprob(NumericMatrix fc, NumericVector thresholds, String comparator, bool includeLow, bool includeHigh);
RcppExport SEXP _harpPoint_fcprob(SEXP fcSEXP, SEXP thresholdsSEXP, SEXP comparatorSEXP, SEXP includeLowSEXP, SEXP includeHighSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type fc(fcSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type thresholds(thresholdsSEXP);
    Rcpp::traits::input_parameter< String >::type comparator(comparatorSEXP);
    Rcpp::traits::input_parameter< bool >::type includeLow(includeLowSEXP);
    Rcpp::traits::input_parameter< bool >::type includeHigh(includeHighSEXP);
    rcpp_result_gen = Rcpp::wrap(fcprob(fc, thresholds, comparator, includeLow, includeHigh));
    return rcpp_result_gen;
END_RCPP
}
// roc
List roc(NumericVector obs, NumericVector pred, NumericVector thresholds);
RcppExport SEXP _harpPoint_roc(SEXP obsSEXP, SEXP predSEXP, SEXP thresholdsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pred(predSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type thresholds(thresholdsSEXP);
    rcpp_result_gen = Rcpp::wrap(roc(obs, pred, thresholds));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_harpPoint_ecoval", (DL_FUNC) &_harpPoint_ecoval, 4},
    {"_harpPoint_sort_members", (DL_FUNC) &_harpPoint_sort_members, 2},
    {"_harpPoint_rankHistogram", (DL_FUNC) &_harpPoint_rankHistogram, 2},
    {"_harpPoint_fcprob", (DL_FUNC) &_harpPoint_fcprob, 5},
    {"_harpPoint_roc", (DL_FUNC) &_harpPoint_roc, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_harpPoint(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
