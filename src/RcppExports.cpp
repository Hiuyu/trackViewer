// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// listResolutions
IntegerVector listResolutions(CharacterVector hicfilename, CharacterVector unit);
RcppExport SEXP _trackViewer_listResolutions(SEXP hicfilenameSEXP, SEXP unitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type hicfilename(hicfilenameSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type unit(unitSEXP);
    rcpp_result_gen = Rcpp::wrap(listResolutions(hicfilename, unit));
    return rcpp_result_gen;
END_RCPP
}
// listUnits
CharacterVector listUnits(CharacterVector hicfilename);
RcppExport SEXP _trackViewer_listUnits(SEXP hicfilenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type hicfilename(hicfilenameSEXP);
    rcpp_result_gen = Rcpp::wrap(listUnits(hicfilename));
    return rcpp_result_gen;
END_RCPP
}
// listNormalizations
CharacterVector listNormalizations(CharacterVector hicfilename);
RcppExport SEXP _trackViewer_listNormalizations(SEXP hicfilenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type hicfilename(hicfilenameSEXP);
    rcpp_result_gen = Rcpp::wrap(listNormalizations(hicfilename));
    return rcpp_result_gen;
END_RCPP
}
// listChroms
CharacterVector listChroms(CharacterVector hicfilename);
RcppExport SEXP _trackViewer_listChroms(SEXP hicfilenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type hicfilename(hicfilenameSEXP);
    rcpp_result_gen = Rcpp::wrap(listChroms(hicfilename));
    return rcpp_result_gen;
END_RCPP
}
// getContactRecords
DataFrame getContactRecords(CharacterVector hicfilename, CharacterVector qname1, IntegerVector start1, IntegerVector end1, CharacterVector qname2, IntegerVector start2, IntegerVector end2, IntegerVector binSize, CharacterVector normalization, CharacterVector unit);
RcppExport SEXP _trackViewer_getContactRecords(SEXP hicfilenameSEXP, SEXP qname1SEXP, SEXP start1SEXP, SEXP end1SEXP, SEXP qname2SEXP, SEXP start2SEXP, SEXP end2SEXP, SEXP binSizeSEXP, SEXP normalizationSEXP, SEXP unitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type hicfilename(hicfilenameSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type qname1(qname1SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type start1(start1SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type end1(end1SEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type qname2(qname2SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type start2(start2SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type end2(end2SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type binSize(binSizeSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type normalization(normalizationSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type unit(unitSEXP);
    rcpp_result_gen = Rcpp::wrap(getContactRecords(hicfilename, qname1, start1, end1, qname2, start2, end2, binSize, normalization, unit));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_trackViewer_listResolutions", (DL_FUNC) &_trackViewer_listResolutions, 2},
    {"_trackViewer_listUnits", (DL_FUNC) &_trackViewer_listUnits, 1},
    {"_trackViewer_listNormalizations", (DL_FUNC) &_trackViewer_listNormalizations, 1},
    {"_trackViewer_listChroms", (DL_FUNC) &_trackViewer_listChroms, 1},
    {"_trackViewer_getContactRecords", (DL_FUNC) &_trackViewer_getContactRecords, 10},
    {NULL, NULL, 0}
};

RcppExport void R_init_trackViewer(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
