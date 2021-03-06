/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) g_InverseKinematics_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int long long int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_f1 CASADI_PREFIX(f1)
#define casadi_f2 CASADI_PREFIX(f2)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

static const casadi_int casadi_s0[7] = {3, 1, 0, 3, 0, 1, 2};
static const casadi_int casadi_s1[5] = {1, 1, 0, 1, 0};
static const casadi_int casadi_s2[9] = {1, 3, 0, 1, 2, 3, 0, 0, 0};

/* g_InverseKinematics_Task:(q[3])->(Task) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a2, a3, a4, a5, a6, a7;
  a0=1.6666666666666666e-02;
  a1=20.;
  a2=2.9999999999999999e-01;
  a3=arg[0]? arg[0][0] : 0;
  a3=sin(a3);
  a4=(a2*a3);
  a4=(a1*a4);
  a5=5.9999999999999998e-01;
  a3=(a5*a3);
  a6=arg[0]? arg[0][1] : 0;
  a6=sin(a6);
  a7=(a2*a6);
  a7=(a3+a7);
  a7=(a1*a7);
  a4=(a4+a7);
  a5=(a5*a6);
  a3=(a3+a5);
  a5=arg[0]? arg[0][2] : 0;
  a5=sin(a5);
  a2=(a2*a5);
  a3=(a3+a2);
  a1=(a1*a3);
  a4=(a4+a1);
  a0=(a0*a4);
  if (res[0]!=0) res[0][0]=a0;
  return 0;
}

CASADI_SYMBOL_EXPORT int g_InverseKinematics_Task(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int g_InverseKinematics_Task_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int g_InverseKinematics_Task_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void g_InverseKinematics_Task_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int g_InverseKinematics_Task_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void g_InverseKinematics_Task_release(int mem) {
}

CASADI_SYMBOL_EXPORT void g_InverseKinematics_Task_incref(void) {
}

CASADI_SYMBOL_EXPORT void g_InverseKinematics_Task_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int g_InverseKinematics_Task_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_int g_InverseKinematics_Task_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real g_InverseKinematics_Task_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* g_InverseKinematics_Task_name_in(casadi_int i){
  switch (i) {
    case 0: return "q";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* g_InverseKinematics_Task_name_out(casadi_int i){
  switch (i) {
    case 0: return "Task";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* g_InverseKinematics_Task_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* g_InverseKinematics_Task_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int g_InverseKinematics_Task_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}

/* g_InverseKinematics_TaskJacobian:(q[3])->(TaskJacobian[1x3]) */
static int casadi_f1(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1;
  a0=4.9999999999999994e-01;
  a1=arg[0]? arg[0][0] : 0;
  a1=cos(a1);
  a0=(a0*a1);
  if (res[0]!=0) res[0][0]=a0;
  a0=2.9999999999999999e-01;
  a1=arg[0]? arg[0][1] : 0;
  a1=cos(a1);
  a0=(a0*a1);
  if (res[0]!=0) res[0][1]=a0;
  a0=9.9999999999999992e-02;
  a1=arg[0]? arg[0][2] : 0;
  a1=cos(a1);
  a0=(a0*a1);
  if (res[0]!=0) res[0][2]=a0;
  return 0;
}

CASADI_SYMBOL_EXPORT int g_InverseKinematics_TaskJacobian(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f1(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int g_InverseKinematics_TaskJacobian_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int g_InverseKinematics_TaskJacobian_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void g_InverseKinematics_TaskJacobian_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int g_InverseKinematics_TaskJacobian_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void g_InverseKinematics_TaskJacobian_release(int mem) {
}

CASADI_SYMBOL_EXPORT void g_InverseKinematics_TaskJacobian_incref(void) {
}

CASADI_SYMBOL_EXPORT void g_InverseKinematics_TaskJacobian_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int g_InverseKinematics_TaskJacobian_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_int g_InverseKinematics_TaskJacobian_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real g_InverseKinematics_TaskJacobian_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* g_InverseKinematics_TaskJacobian_name_in(casadi_int i){
  switch (i) {
    case 0: return "q";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* g_InverseKinematics_TaskJacobian_name_out(casadi_int i){
  switch (i) {
    case 0: return "TaskJacobian";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* g_InverseKinematics_TaskJacobian_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* g_InverseKinematics_TaskJacobian_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int g_InverseKinematics_TaskJacobian_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}

/* g_InverseKinematics_TaskJacobian_derivative:(q[3],v[3])->(TaskJacobian_derivative[1x3]) */
static int casadi_f2(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1;
  a0=4.9999999999999994e-01;
  a1=arg[0]? arg[0][0] : 0;
  a1=sin(a1);
  a0=(a0*a1);
  a1=arg[1]? arg[1][0] : 0;
  a0=(a0*a1);
  a0=(-a0);
  if (res[0]!=0) res[0][0]=a0;
  a0=2.9999999999999999e-01;
  a1=arg[0]? arg[0][1] : 0;
  a1=sin(a1);
  a0=(a0*a1);
  a1=arg[1]? arg[1][1] : 0;
  a0=(a0*a1);
  a0=(-a0);
  if (res[0]!=0) res[0][1]=a0;
  a0=9.9999999999999992e-02;
  a1=arg[0]? arg[0][2] : 0;
  a1=sin(a1);
  a0=(a0*a1);
  a1=arg[1]? arg[1][2] : 0;
  a0=(a0*a1);
  a0=(-a0);
  if (res[0]!=0) res[0][2]=a0;
  return 0;
}

CASADI_SYMBOL_EXPORT int g_InverseKinematics_TaskJacobian_derivative(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f2(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int g_InverseKinematics_TaskJacobian_derivative_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int g_InverseKinematics_TaskJacobian_derivative_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void g_InverseKinematics_TaskJacobian_derivative_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int g_InverseKinematics_TaskJacobian_derivative_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void g_InverseKinematics_TaskJacobian_derivative_release(int mem) {
}

CASADI_SYMBOL_EXPORT void g_InverseKinematics_TaskJacobian_derivative_incref(void) {
}

CASADI_SYMBOL_EXPORT void g_InverseKinematics_TaskJacobian_derivative_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int g_InverseKinematics_TaskJacobian_derivative_n_in(void) { return 2;}

CASADI_SYMBOL_EXPORT casadi_int g_InverseKinematics_TaskJacobian_derivative_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real g_InverseKinematics_TaskJacobian_derivative_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* g_InverseKinematics_TaskJacobian_derivative_name_in(casadi_int i){
  switch (i) {
    case 0: return "q";
    case 1: return "v";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* g_InverseKinematics_TaskJacobian_derivative_name_out(casadi_int i){
  switch (i) {
    case 0: return "TaskJacobian_derivative";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* g_InverseKinematics_TaskJacobian_derivative_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* g_InverseKinematics_TaskJacobian_derivative_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int g_InverseKinematics_TaskJacobian_derivative_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
