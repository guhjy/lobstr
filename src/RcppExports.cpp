// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// prim_address_
std::string prim_address_(SEXP name, Environment env);
RcppExport SEXP _lobstr_prim_address_(SEXP nameSEXP, SEXP envSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type name(nameSEXP);
    Rcpp::traits::input_parameter< Environment >::type env(envSEXP);
    rcpp_result_gen = Rcpp::wrap(prim_address_(name, env));
    return rcpp_result_gen;
END_RCPP
}
// prim_addresses_
std::vector<std::string> prim_addresses_(SEXP name, Environment env);
RcppExport SEXP _lobstr_prim_addresses_(SEXP nameSEXP, SEXP envSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type name(nameSEXP);
    Rcpp::traits::input_parameter< Environment >::type env(envSEXP);
    rcpp_result_gen = Rcpp::wrap(prim_addresses_(name, env));
    return rcpp_result_gen;
END_RCPP
}
// prim_refs_
int prim_refs_(SEXP name, Environment env);
RcppExport SEXP _lobstr_prim_refs_(SEXP nameSEXP, SEXP envSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type name(nameSEXP);
    Rcpp::traits::input_parameter< Environment >::type env(envSEXP);
    rcpp_result_gen = Rcpp::wrap(prim_refs_(name, env));
    return rcpp_result_gen;
END_RCPP
}
// v_size
double v_size(double n, int size);
RcppExport SEXP _lobstr_v_size(SEXP nSEXP, SEXP sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(v_size(n, size));
    return rcpp_result_gen;
END_RCPP
}
// prim_sizes
double prim_sizes(List objects, Environment base_env);
RcppExport SEXP _lobstr_prim_sizes(SEXP objectsSEXP, SEXP base_envSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type objects(objectsSEXP);
    Rcpp::traits::input_parameter< Environment >::type base_env(base_envSEXP);
    rcpp_result_gen = Rcpp::wrap(prim_sizes(objects, base_env));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_lobstr_prim_address_", (DL_FUNC) &_lobstr_prim_address_, 2},
    {"_lobstr_prim_addresses_", (DL_FUNC) &_lobstr_prim_addresses_, 2},
    {"_lobstr_prim_refs_", (DL_FUNC) &_lobstr_prim_refs_, 2},
    {"_lobstr_v_size", (DL_FUNC) &_lobstr_v_size, 2},
    {"_lobstr_prim_sizes", (DL_FUNC) &_lobstr_prim_sizes, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_lobstr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
