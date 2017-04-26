// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// RcppOwenT01
double RcppOwenT01(double h, double a, int jmax, double cutpoint);
RcppExport SEXP OwenQ_RcppOwenT01(SEXP hSEXP, SEXP aSEXP, SEXP jmaxSEXP, SEXP cutpointSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type jmax(jmaxSEXP);
    Rcpp::traits::input_parameter< double >::type cutpoint(cutpointSEXP);
    rcpp_result_gen = Rcpp::wrap(RcppOwenT01(h, a, jmax, cutpoint));
    return rcpp_result_gen;
END_RCPP
}
// RcppOwenT
double RcppOwenT(double h, double a, int jmax, double cutpoint);
RcppExport SEXP OwenQ_RcppOwenT(SEXP hSEXP, SEXP aSEXP, SEXP jmaxSEXP, SEXP cutpointSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type jmax(jmaxSEXP);
    Rcpp::traits::input_parameter< double >::type cutpoint(cutpointSEXP);
    rcpp_result_gen = Rcpp::wrap(RcppOwenT(h, a, jmax, cutpoint));
    return rcpp_result_gen;
END_RCPP
}
// RcppOwenStudent
NumericVector RcppOwenStudent(double q, int nu, NumericVector delta, int jmax, double cutpoint);
RcppExport SEXP OwenQ_RcppOwenStudent(SEXP qSEXP, SEXP nuSEXP, SEXP deltaSEXP, SEXP jmaxSEXP, SEXP cutpointSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< int >::type jmax(jmaxSEXP);
    Rcpp::traits::input_parameter< double >::type cutpoint(cutpointSEXP);
    rcpp_result_gen = Rcpp::wrap(RcppOwenStudent(q, nu, delta, jmax, cutpoint));
    return rcpp_result_gen;
END_RCPP
}
// RcppOwenQ1
NumericVector RcppOwenQ1(int nu, double t, NumericVector delta, NumericVector R, int jmax, double cutpoint);
RcppExport SEXP OwenQ_RcppOwenQ1(SEXP nuSEXP, SEXP tSEXP, SEXP deltaSEXP, SEXP RSEXP, SEXP jmaxSEXP, SEXP cutpointSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type R(RSEXP);
    Rcpp::traits::input_parameter< int >::type jmax(jmaxSEXP);
    Rcpp::traits::input_parameter< double >::type cutpoint(cutpointSEXP);
    rcpp_result_gen = Rcpp::wrap(RcppOwenQ1(nu, t, delta, R, jmax, cutpoint));
    return rcpp_result_gen;
END_RCPP
}
// RcppOwenQ2
NumericVector RcppOwenQ2(int nu, double t, NumericVector delta, NumericVector R, int jmax, double cutpoint);
RcppExport SEXP OwenQ_RcppOwenQ2(SEXP nuSEXP, SEXP tSEXP, SEXP deltaSEXP, SEXP RSEXP, SEXP jmaxSEXP, SEXP cutpointSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type R(RSEXP);
    Rcpp::traits::input_parameter< int >::type jmax(jmaxSEXP);
    Rcpp::traits::input_parameter< double >::type cutpoint(cutpointSEXP);
    rcpp_result_gen = Rcpp::wrap(RcppOwenQ2(nu, t, delta, R, jmax, cutpoint));
    return rcpp_result_gen;
END_RCPP
}
// RcppOwenCDF4
NumericVector RcppOwenCDF4(int nu, double t1, double t2, NumericVector delta1, NumericVector delta2, int jmax, double cutpoint);
RcppExport SEXP OwenQ_RcppOwenCDF4(SEXP nuSEXP, SEXP t1SEXP, SEXP t2SEXP, SEXP delta1SEXP, SEXP delta2SEXP, SEXP jmaxSEXP, SEXP cutpointSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< double >::type t1(t1SEXP);
    Rcpp::traits::input_parameter< double >::type t2(t2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type delta1(delta1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type delta2(delta2SEXP);
    Rcpp::traits::input_parameter< int >::type jmax(jmaxSEXP);
    Rcpp::traits::input_parameter< double >::type cutpoint(cutpointSEXP);
    rcpp_result_gen = Rcpp::wrap(RcppOwenCDF4(nu, t1, t2, delta1, delta2, jmax, cutpoint));
    return rcpp_result_gen;
END_RCPP
}
// RcppOwenCDF3
NumericVector RcppOwenCDF3(int nu, double t1, double t2, NumericVector delta1, NumericVector delta2, int jmax, double cutpoint);
RcppExport SEXP OwenQ_RcppOwenCDF3(SEXP nuSEXP, SEXP t1SEXP, SEXP t2SEXP, SEXP delta1SEXP, SEXP delta2SEXP, SEXP jmaxSEXP, SEXP cutpointSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< double >::type t1(t1SEXP);
    Rcpp::traits::input_parameter< double >::type t2(t2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type delta1(delta1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type delta2(delta2SEXP);
    Rcpp::traits::input_parameter< int >::type jmax(jmaxSEXP);
    Rcpp::traits::input_parameter< double >::type cutpoint(cutpointSEXP);
    rcpp_result_gen = Rcpp::wrap(RcppOwenCDF3(nu, t1, t2, delta1, delta2, jmax, cutpoint));
    return rcpp_result_gen;
END_RCPP
}
// RcppOwenCDF2
NumericVector RcppOwenCDF2(int nu, double t1, double t2, NumericVector delta1, NumericVector delta2, int jmax, double cutpoint);
RcppExport SEXP OwenQ_RcppOwenCDF2(SEXP nuSEXP, SEXP t1SEXP, SEXP t2SEXP, SEXP delta1SEXP, SEXP delta2SEXP, SEXP jmaxSEXP, SEXP cutpointSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< double >::type t1(t1SEXP);
    Rcpp::traits::input_parameter< double >::type t2(t2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type delta1(delta1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type delta2(delta2SEXP);
    Rcpp::traits::input_parameter< int >::type jmax(jmaxSEXP);
    Rcpp::traits::input_parameter< double >::type cutpoint(cutpointSEXP);
    rcpp_result_gen = Rcpp::wrap(RcppOwenCDF2(nu, t1, t2, delta1, delta2, jmax, cutpoint));
    return rcpp_result_gen;
END_RCPP
}
