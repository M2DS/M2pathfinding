// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// bellman_ford
void bellman_ford(NumericMatrix edges, int vertex_source);
RcppExport SEXP _M2pathfinding_bellman_ford(SEXP edgesSEXP, SEXP vertex_sourceSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type edges(edgesSEXP);
    Rcpp::traits::input_parameter< int >::type vertex_source(vertex_sourceSEXP);
    bellman_ford(edges, vertex_source);
    return R_NilValue;
END_RCPP
}
// findMinVertex
int findMinVertex(NumericVector distance, LogicalVector visited, int n);
RcppExport SEXP _M2pathfinding_findMinVertex(SEXP distanceSEXP, SEXP visitedSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type distance(distanceSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type visited(visitedSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(findMinVertex(distance, visited, n));
    return rcpp_result_gen;
END_RCPP
}
// printPath
void printPath(NumericVector parent, int j);
RcppExport SEXP _M2pathfinding_printPath(SEXP parentSEXP, SEXP jSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type parent(parentSEXP);
    Rcpp::traits::input_parameter< int >::type j(jSEXP);
    printPath(parent, j);
    return R_NilValue;
END_RCPP
}
// printSolution
void printSolution(NumericVector dist, int n, NumericVector parent);
RcppExport SEXP _M2pathfinding_printSolution(SEXP distSEXP, SEXP nSEXP, SEXP parentSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type dist(distSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type parent(parentSEXP);
    printSolution(dist, n, parent);
    return R_NilValue;
END_RCPP
}
// dijkstra_cpp
void dijkstra_cpp(NumericMatrix edges);
RcppExport SEXP _M2pathfinding_dijkstra_cpp(SEXP edgesSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type edges(edgesSEXP);
    dijkstra_cpp(edges);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_M2pathfinding_bellman_ford", (DL_FUNC) &_M2pathfinding_bellman_ford, 2},
    {"_M2pathfinding_findMinVertex", (DL_FUNC) &_M2pathfinding_findMinVertex, 3},
    {"_M2pathfinding_printPath", (DL_FUNC) &_M2pathfinding_printPath, 2},
    {"_M2pathfinding_printSolution", (DL_FUNC) &_M2pathfinding_printSolution, 3},
    {"_M2pathfinding_dijkstra_cpp", (DL_FUNC) &_M2pathfinding_dijkstra_cpp, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_M2pathfinding(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
