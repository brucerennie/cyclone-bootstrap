/**
 ** This file was automatically generated by the Cyclone scheme compiler
 **
 ** (c) 2014-2016 Justin Ethier
 ** Version 0.0.4 (Pre-release)
 **
 **/

#define closcall0(td,cfn) ((cfn)->fn)(td,0,cfn)
/* Check for GC, then call given continuation closure */
#define return_closcall0(td,cfn) \
{char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[0]; \
     GC(td,cfn,buf,0); return; \
 } else {closcall0(td,(closure) (cfn)); return;}}

/* Check for GC, then call C function directly */
#define return_direct0(td,_fn) { \
 char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[0];  \
     mclosure0(c1, _fn); \
     GC(td,&c1, buf, 0); return; \
 } else { (_fn)(td,0,(closure)_fn); }}

#define closcall1(td,cfn,a1) if (type_of(cfn) == cons_tag || prim(cfn)) { Cyc_apply(td,0, (closure)a1, cfn); } else { ((cfn)->fn)(td,1,cfn,a1);}
/* Check for GC, then call given continuation closure */
#define return_closcall1(td,cfn,a1) \
{char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1;\
     GC(td,cfn,buf,1); return; \
 } else {closcall1(td,(closure) (cfn),a1); return;}}

/* Check for GC, then call C function directly */
#define return_direct1(td,_fn,a1) { \
 char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1; \
     mclosure0(c1, _fn); \
     GC(td,&c1, buf, 1); return; \
 } else { (_fn)(td,1,(closure)_fn,a1); }}

#define closcall2(td,cfn,a1,a2) if (type_of(cfn) == cons_tag || prim(cfn)) { Cyc_apply(td,1, (closure)a1, cfn,a2); } else { ((cfn)->fn)(td,2,cfn,a1,a2);}
/* Check for GC, then call given continuation closure */
#define return_closcall2(td,cfn,a1,a2) \
{char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2;\
     GC(td,cfn,buf,2); return; \
 } else {closcall2(td,(closure) (cfn),a1,a2); return;}}

/* Check for GC, then call C function directly */
#define return_direct2(td,_fn,a1,a2) { \
 char stack; \
 if (check_overflow(&stack,(((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2; \
     mclosure0(c1, _fn); \
     GC(td,&c1, buf, 2); return; \
 } else { (_fn)(td,2,(closure)_fn,a1,a2); }}

#include "cyclone/types.h"
object __glo_lib_91init_117schemelazy = nil;
object __glo_make_91promise = nil;
object __glo_delay_91force = nil;
object __glo_delay = nil;
object __glo_force = nil;
extern object __glo_abs;
extern object __glo_max;
extern object __glo_min;
extern object __glo_modulo;
extern object __glo_floor_91remainder;
extern object __glo_even_127;
extern object __glo_exact_91integer_127;
extern object __glo_exact_127;
extern object __glo_inexact_127;
extern object __glo_odd_127;
extern object __glo_gcd;
extern object __glo_lcm;
extern object __glo_quotient;
extern object __glo_remainder;
extern object __glo_truncate_91quotient;
extern object __glo_truncate_91remainder;
extern object __glo_truncate_95;
extern object __glo_floor_91quotient;
extern object __glo_floor_91remainder;
extern object __glo_floor_95;
extern object __glo_square;
extern object __glo_expt;
extern object __glo_call_91with_91current_91continuation;
extern object __glo_call_95cc;
extern object __glo_call_91with_91values;
extern object __glo_dynamic_91wind;
extern object __glo_values;
extern object __glo_char_123_127;
extern object __glo_char_121_127;
extern object __glo_char_125_127;
extern object __glo_char_121_123_127;
extern object __glo_char_125_123_127;
extern object __glo_string_123_127;
extern object __glo_string_121_127;
extern object __glo_string_121_123_127;
extern object __glo_string_125_127;
extern object __glo_string_125_123_127;
extern object __glo_foldl;
extern object __glo_foldr;
extern object __glo_not;
extern object __glo_list_127;
extern object __glo_zero_127;
extern object __glo_positive_127;
extern object __glo_negative_127;
extern object __glo_append;
extern object __glo__list;
extern object __glo_make_91list;
extern object __glo_list_91copy;
extern object __glo_map;
extern object __glo_for_91each;
extern object __glo_list_91tail;
extern object __glo_list_91ref;
extern object __glo_list_91set_67;
extern object __glo_reverse;
extern object __glo_boolean_123_127;
extern object __glo_symbol_123_127;
extern object __glo_Cyc_91obj_123_127;
extern object __glo_vector;
extern object __glo_vector_91append;
extern object __glo_vector_91copy;
extern object __glo_vector_91copy_67;
extern object __glo_vector_91fill_67;
extern object __glo_vector_91_125list;
extern object __glo_vector_91_125string;
extern object __glo_vector_91map;
extern object __glo_vector_91for_91each;
extern object __glo_make_91string;
extern object __glo_string;
extern object __glo_string_91copy;
extern object __glo_string_91copy_67;
extern object __glo_string_91fill_67;
extern object __glo_string_91_125list;
extern object __glo_string_91_125vector;
extern object __glo_string_91map;
extern object __glo_string_91for_91each;
extern object __glo_make_91parameter;
extern object __glo_current_91output_91port;
extern object __glo_current_91input_91port;
extern object __glo_current_91error_91port;
extern object __glo_call_91with_91port;
extern object __glo_error;
extern object __glo_raise;
extern object __glo_raise_91continuable;
extern object __glo_with_91exception_91handler;
extern object __glo_Cyc_91add_91exception_91handler;
extern object __glo_Cyc_91remove_91exception_91handler;
extern object __glo_newline;
extern object __glo_write_91char;
extern object __glo_write_91string;
extern object __glo_flush_91output_91port;
extern object __glo_read_91line;
extern object __glo_read_91string;
extern object __glo_input_91port_127;
extern object __glo_output_91port_127;
extern object __glo_input_91port_91open_127;
extern object __glo_output_91port_91open_127;
extern object __glo_features;
extern object __glo_any;
extern object __glo_every;
extern object __glo_and;
extern object __glo_or;
extern object __glo_let;
extern object __glo_let_85;
extern object __glo_letrec;
extern object __glo_begin;
extern object __glo__case;
extern object __glo_cond;
extern object __glo_cond_91expand;
extern object __glo__do;
extern object __glo_when;
extern object __glo_unless;
extern object __glo_quasiquote;
extern object __glo_floor;
extern object __glo_ceiling;
extern object __glo_truncate;
extern object __glo_round;
extern object __glo_exact;
extern object __glo_inexact;
extern object __glo_eof_91object;
#include "cyclone/runtime.h"
defsymbol(make_91promise);
defsymbol(lambda);
static void __lambda_33(void *data, int argc, closure _,object k_7316) ;
static void __lambda_32(void *data, int argc, closure _,object k_7319, object proc_733) ;
static void __lambda_31(void *data, int argc, object self_7353, object result_91ready_127_735, object result_734) ;
static void __lambda_30(void *data, int argc, object self_7354, object result_91ready_127_735) ;
static void __lambda_29(void *data, int argc, object self_7355, object result_734) ;
static void __lambda_28(void *data, int argc, object self_7356, object k_7320) ;
static void __lambda_27(void *data, int argc, object self_7357, object r_7321) ;
static void __lambda_26(void *data, int argc, object self_7358, object x_736) ;
static void __lambda_25(void *data, int argc, object self_7359) ;
static void __lambda_24(void *data, int argc, object self_7360, object r_7322) ;
static void __lambda_23(void *data, int argc, object self_7361, object r_7323) ;
static void __lambda_22(void *data, int argc, closure _,object k_7326, object expr_739, object rename_738, object compare_737) ;
static void __lambda_21(void *data, int argc, object self_7362, object r_7327) ;
static void __lambda_20(void *data, int argc, object self_7363, object r_7331) ;
static void __lambda_19(void *data, int argc, object self_7364, object r_7333) ;
static void __lambda_18(void *data, int argc, object self_7365, object r_7335) ;
static void __lambda_17(void *data, int argc, object self_7366, object r_7336) ;
static void __lambda_16(void *data, int argc, object self_7367, object r_7334) ;
static void __lambda_15(void *data, int argc, object self_7368, object r_7332) ;
static void __lambda_14(void *data, int argc, object self_7369, object r_7329) ;
static void __lambda_13(void *data, int argc, object self_7370, object r_7330) ;
static void __lambda_12(void *data, int argc, object self_7371, object r_7328) ;
static void __lambda_11(void *data, int argc, closure _,object k_7339, object expr_7312, object rename_7311, object compare_7310) ;
static void __lambda_10(void *data, int argc, object self_7372, object r_7340) ;
static void __lambda_9(void *data, int argc, object self_7373, object r_7344) ;
static void __lambda_8(void *data, int argc, object self_7374, object r_7346) ;
static void __lambda_7(void *data, int argc, object self_7375, object r_7348) ;
static void __lambda_6(void *data, int argc, object self_7376, object r_7349) ;
static void __lambda_5(void *data, int argc, object self_7377, object r_7347) ;
static void __lambda_4(void *data, int argc, object self_7378, object r_7345) ;
static void __lambda_3(void *data, int argc, object self_7379, object r_7342) ;
static void __lambda_2(void *data, int argc, object self_7380, object r_7343) ;
static void __lambda_1(void *data, int argc, object self_7381, object r_7341) ;
static void __lambda_0(void *data, int argc, closure _,object k_7352, object object_7313) ;

static void __lambda_33(void *data, int argc, closure _,object k_7316) {
  Cyc_st_add(data, "scheme/lazy.sld:lib-init:schemelazy");

make_int(c_73233, 0);
return_closcall1(data,  k_7316,  &c_73233);; 
}

static void __lambda_32(void *data, int argc, closure _,object k_7319, object proc_733) {
  Cyc_st_add(data, "scheme/lazy.sld:make-promise");

closureN_type c_73178;
c_73178.hdr.mark = gc_color_red;
 c_73178.hdr.grayed = 0;
c_73178.tag = closureN_tag;
 c_73178.fn = (function_type)__lambda_31;
c_73178.num_args = 2;
c_73178.num_elt = 2;
c_73178.elts = (object *)alloca(sizeof(object) * 2);
c_73178.elts[0] = k_7319;
c_73178.elts[1] = proc_733;

return_closcall2(data,(closure)&c_73178,  boolean_f, boolean_f);; 
}

static void __lambda_31(void *data, int argc, object self_7353, object result_91ready_127_735, object result_734) {
  Cyc_st_add(data, "scheme/lazy.sld:make-promise");

closureN_type c_73180;
c_73180.hdr.mark = gc_color_red;
 c_73180.hdr.grayed = 0;
c_73180.tag = closureN_tag;
 c_73180.fn = (function_type)__lambda_30;
c_73180.num_args = 1;
c_73180.num_elt = 3;
c_73180.elts = (object *)alloca(sizeof(object) * 3);
c_73180.elts[0] = ((closureN)self_7353)->elts[0];
c_73180.elts[1] = ((closureN)self_7353)->elts[1];
c_73180.elts[2] = result_734;


make_cell(c_73230,result_91ready_127_735);
return_closcall1(data,(closure)&c_73180,  &c_73230);; 
}

static void __lambda_30(void *data, int argc, object self_7354, object result_91ready_127_735) {
  Cyc_st_add(data, "scheme/lazy.sld:make-promise");

closureN_type c_73182;
c_73182.hdr.mark = gc_color_red;
 c_73182.hdr.grayed = 0;
c_73182.tag = closureN_tag;
 c_73182.fn = (function_type)__lambda_29;
c_73182.num_args = 1;
c_73182.num_elt = 3;
c_73182.elts = (object *)alloca(sizeof(object) * 3);
c_73182.elts[0] = ((closureN)self_7354)->elts[0];
c_73182.elts[1] = ((closureN)self_7354)->elts[1];
c_73182.elts[2] = result_91ready_127_735;


make_cell(c_73226,((closureN)self_7354)->elts[2]);
return_closcall1(data,(closure)&c_73182,  &c_73226);; 
}

static void __lambda_29(void *data, int argc, object self_7355, object result_734) {
  Cyc_st_add(data, "scheme/lazy.sld:make-promise");

closureN_type c_73185;
c_73185.hdr.mark = gc_color_red;
 c_73185.hdr.grayed = 0;
c_73185.tag = closureN_tag;
 c_73185.fn = (function_type)__lambda_28;
c_73185.num_args = 0;
c_73185.num_elt = 3;
c_73185.elts = (object *)alloca(sizeof(object) * 3);
c_73185.elts[0] = ((closureN)self_7355)->elts[1];
c_73185.elts[1] = result_734;
c_73185.elts[2] = ((closureN)self_7355)->elts[2];

return_closcall1(data,  ((closureN)self_7355)->elts[0],  &c_73185);; 
}

static void __lambda_28(void *data, int argc, object self_7356, object k_7320) {
  Cyc_st_add(data, "scheme/lazy.sld:make-promise");
if( !eq(boolean_f, cell_get(((closureN)self_7356)->elts[2])) ){ 
  return_closcall1(data,  k_7320,  cell_get(((closureN)self_7356)->elts[1]));
} else { 
  
closureN_type c_73195;
c_73195.hdr.mark = gc_color_red;
 c_73195.hdr.grayed = 0;
c_73195.tag = closureN_tag;
 c_73195.fn = (function_type)__lambda_27;
c_73195.num_args = 1;
c_73195.num_elt = 3;
c_73195.elts = (object *)alloca(sizeof(object) * 3);
c_73195.elts[0] = k_7320;
c_73195.elts[1] = ((closureN)self_7356)->elts[1];
c_73195.elts[2] = ((closureN)self_7356)->elts[2];

return_closcall1(data,  ((closureN)self_7356)->elts[0],  &c_73195);}
; 
}

static void __lambda_27(void *data, int argc, object self_7357, object r_7321) {
  Cyc_st_add(data, "scheme/lazy.sld:make-promise");

closureN_type c_73197;
c_73197.hdr.mark = gc_color_red;
 c_73197.hdr.grayed = 0;
c_73197.tag = closureN_tag;
 c_73197.fn = (function_type)__lambda_26;
c_73197.num_args = 1;
c_73197.num_elt = 3;
c_73197.elts = (object *)alloca(sizeof(object) * 3);
c_73197.elts[0] = ((closureN)self_7357)->elts[0];
c_73197.elts[1] = ((closureN)self_7357)->elts[1];
c_73197.elts[2] = ((closureN)self_7357)->elts[2];

return_closcall1(data,(closure)&c_73197,  r_7321);; 
}

static void __lambda_26(void *data, int argc, object self_7358, object x_736) {
  Cyc_st_add(data, "scheme/lazy.sld:make-promise");
if( !eq(boolean_f, cell_get(((closureN)self_7358)->elts[2])) ){ 
  return_closcall1(data,  ((closureN)self_7358)->elts[0],  cell_get(((closureN)self_7358)->elts[1]));
} else { 
  
closureN_type c_73207;
c_73207.hdr.mark = gc_color_red;
 c_73207.hdr.grayed = 0;
c_73207.tag = closureN_tag;
 c_73207.fn = (function_type)__lambda_25;
c_73207.num_args = 0;
c_73207.num_elt = 4;
c_73207.elts = (object *)alloca(sizeof(object) * 4);
c_73207.elts[0] = ((closureN)self_7358)->elts[0];
c_73207.elts[1] = ((closureN)self_7358)->elts[1];
c_73207.elts[2] = ((closureN)self_7358)->elts[2];
c_73207.elts[3] = x_736;

return_closcall0(data,(closure)&c_73207);}
; 
}

static void __lambda_25(void *data, int argc, object self_7359) {
  Cyc_st_add(data, "scheme/lazy.sld:make-promise");

closureN_type c_73209;
c_73209.hdr.mark = gc_color_red;
 c_73209.hdr.grayed = 0;
c_73209.tag = closureN_tag;
 c_73209.fn = (function_type)__lambda_24;
c_73209.num_args = 1;
c_73209.num_elt = 3;
c_73209.elts = (object *)alloca(sizeof(object) * 3);
c_73209.elts[0] = ((closureN)self_7359)->elts[0];
c_73209.elts[1] = ((closureN)self_7359)->elts[1];
c_73209.elts[2] = ((closureN)self_7359)->elts[2];

return_closcall1(data,(closure)&c_73209,  Cyc_set_car(data, ((closureN)self_7359)->elts[1], ((closureN)self_7359)->elts[3]));; 
}

static void __lambda_24(void *data, int argc, object self_7360, object r_7322) {
  Cyc_st_add(data, "scheme/lazy.sld:make-promise");

closureN_type c_73211;
c_73211.hdr.mark = gc_color_red;
 c_73211.hdr.grayed = 0;
c_73211.tag = closureN_tag;
 c_73211.fn = (function_type)__lambda_23;
c_73211.num_args = 1;
c_73211.num_elt = 2;
c_73211.elts = (object *)alloca(sizeof(object) * 2);
c_73211.elts[0] = ((closureN)self_7360)->elts[0];
c_73211.elts[1] = ((closureN)self_7360)->elts[1];

return_closcall1(data,(closure)&c_73211,  Cyc_set_car(data, ((closureN)self_7360)->elts[2], boolean_t));; 
}

static void __lambda_23(void *data, int argc, object self_7361, object r_7323) {
  Cyc_st_add(data, "scheme/lazy.sld:make-promise");
return_closcall1(data,  ((closureN)self_7361)->elts[0],  cell_get(((closureN)self_7361)->elts[1]));; 
}

static void __lambda_22(void *data, int argc, closure _,object k_7326, object expr_739, object rename_738, object compare_737) {
  Cyc_st_add(data, "scheme/lazy.sld:delay-force");

closureN_type c_73132;
c_73132.hdr.mark = gc_color_red;
 c_73132.hdr.grayed = 0;
c_73132.tag = closureN_tag;
 c_73132.fn = (function_type)__lambda_21;
c_73132.num_args = 1;
c_73132.num_elt = 2;
c_73132.elts = (object *)alloca(sizeof(object) * 2);
c_73132.elts[0] = expr_739;
c_73132.elts[1] = k_7326;

return_closcall1(data,(closure)&c_73132,  quote_make_91promise);; 
}

static void __lambda_21(void *data, int argc, object self_7362, object r_7327) {
  Cyc_st_add(data, "scheme/lazy.sld:delay-force");

closureN_type c_73134;
c_73134.hdr.mark = gc_color_red;
 c_73134.hdr.grayed = 0;
c_73134.tag = closureN_tag;
 c_73134.fn = (function_type)__lambda_20;
c_73134.num_args = 1;
c_73134.num_elt = 3;
c_73134.elts = (object *)alloca(sizeof(object) * 3);
c_73134.elts[0] = ((closureN)self_7362)->elts[0];
c_73134.elts[1] = ((closureN)self_7362)->elts[1];
c_73134.elts[2] = r_7327;

return_closcall1(data,(closure)&c_73134,  quote_lambda);; 
}

static void __lambda_20(void *data, int argc, object self_7363, object r_7331) {
  Cyc_st_add(data, "scheme/lazy.sld:delay-force");

closureN_type c_73136;
c_73136.hdr.mark = gc_color_red;
 c_73136.hdr.grayed = 0;
c_73136.tag = closureN_tag;
 c_73136.fn = (function_type)__lambda_19;
c_73136.num_args = 1;
c_73136.num_elt = 4;
c_73136.elts = (object *)alloca(sizeof(object) * 4);
c_73136.elts[0] = ((closureN)self_7363)->elts[0];
c_73136.elts[1] = ((closureN)self_7363)->elts[1];
c_73136.elts[2] = ((closureN)self_7363)->elts[2];
c_73136.elts[3] = r_7331;

return_closcall1(data,(closure)&c_73136,  nil);; 
}

static void __lambda_19(void *data, int argc, object self_7364, object r_7333) {
  Cyc_st_add(data, "scheme/lazy.sld:delay-force");

closureN_type c_73138;
c_73138.hdr.mark = gc_color_red;
 c_73138.hdr.grayed = 0;
c_73138.tag = closureN_tag;
 c_73138.fn = (function_type)__lambda_18;
c_73138.num_args = 1;
c_73138.num_elt = 4;
c_73138.elts = (object *)alloca(sizeof(object) * 4);
c_73138.elts[0] = ((closureN)self_7364)->elts[1];
c_73138.elts[1] = ((closureN)self_7364)->elts[2];
c_73138.elts[2] = ((closureN)self_7364)->elts[3];
c_73138.elts[3] = r_7333;

return_closcall1(data,(closure)&c_73138,  cadr(((closureN)self_7364)->elts[0]));; 
}

static void __lambda_18(void *data, int argc, object self_7365, object r_7335) {
  Cyc_st_add(data, "scheme/lazy.sld:delay-force");

closureN_type c_73140;
c_73140.hdr.mark = gc_color_red;
 c_73140.hdr.grayed = 0;
c_73140.tag = closureN_tag;
 c_73140.fn = (function_type)__lambda_17;
c_73140.num_args = 1;
c_73140.num_elt = 5;
c_73140.elts = (object *)alloca(sizeof(object) * 5);
c_73140.elts[0] = ((closureN)self_7365)->elts[0];
c_73140.elts[1] = ((closureN)self_7365)->elts[1];
c_73140.elts[2] = ((closureN)self_7365)->elts[2];
c_73140.elts[3] = ((closureN)self_7365)->elts[3];
c_73140.elts[4] = r_7335;

return_closcall1(data,(closure)&c_73140,  nil);; 
}

static void __lambda_17(void *data, int argc, object self_7366, object r_7336) {
  Cyc_st_add(data, "scheme/lazy.sld:delay-force");

closureN_type c_73142;
c_73142.hdr.mark = gc_color_red;
 c_73142.hdr.grayed = 0;
c_73142.tag = closureN_tag;
 c_73142.fn = (function_type)__lambda_16;
c_73142.num_args = 1;
c_73142.num_elt = 4;
c_73142.elts = (object *)alloca(sizeof(object) * 4);
c_73142.elts[0] = ((closureN)self_7366)->elts[0];
c_73142.elts[1] = ((closureN)self_7366)->elts[1];
c_73142.elts[2] = ((closureN)self_7366)->elts[2];
c_73142.elts[3] = ((closureN)self_7366)->elts[3];


make_cons(c_73171,((closureN)self_7366)->elts[4], r_7336);
return_closcall1(data,(closure)&c_73142,  &c_73171);; 
}

static void __lambda_16(void *data, int argc, object self_7367, object r_7334) {
  Cyc_st_add(data, "scheme/lazy.sld:delay-force");

closureN_type c_73144;
c_73144.hdr.mark = gc_color_red;
 c_73144.hdr.grayed = 0;
c_73144.tag = closureN_tag;
 c_73144.fn = (function_type)__lambda_15;
c_73144.num_args = 1;
c_73144.num_elt = 3;
c_73144.elts = (object *)alloca(sizeof(object) * 3);
c_73144.elts[0] = ((closureN)self_7367)->elts[0];
c_73144.elts[1] = ((closureN)self_7367)->elts[1];
c_73144.elts[2] = ((closureN)self_7367)->elts[2];


make_cons(c_73167,((closureN)self_7367)->elts[3], r_7334);
return_closcall1(data,(closure)&c_73144,  &c_73167);; 
}

static void __lambda_15(void *data, int argc, object self_7368, object r_7332) {
  Cyc_st_add(data, "scheme/lazy.sld:delay-force");

closureN_type c_73146;
c_73146.hdr.mark = gc_color_red;
 c_73146.hdr.grayed = 0;
c_73146.tag = closureN_tag;
 c_73146.fn = (function_type)__lambda_14;
c_73146.num_args = 1;
c_73146.num_elt = 2;
c_73146.elts = (object *)alloca(sizeof(object) * 2);
c_73146.elts[0] = ((closureN)self_7368)->elts[0];
c_73146.elts[1] = ((closureN)self_7368)->elts[1];


make_cons(c_73163,((closureN)self_7368)->elts[2], r_7332);
return_closcall1(data,(closure)&c_73146,  &c_73163);; 
}

static void __lambda_14(void *data, int argc, object self_7369, object r_7329) {
  Cyc_st_add(data, "scheme/lazy.sld:delay-force");

closureN_type c_73148;
c_73148.hdr.mark = gc_color_red;
 c_73148.hdr.grayed = 0;
c_73148.tag = closureN_tag;
 c_73148.fn = (function_type)__lambda_13;
c_73148.num_args = 1;
c_73148.num_elt = 3;
c_73148.elts = (object *)alloca(sizeof(object) * 3);
c_73148.elts[0] = ((closureN)self_7369)->elts[0];
c_73148.elts[1] = ((closureN)self_7369)->elts[1];
c_73148.elts[2] = r_7329;

return_closcall1(data,(closure)&c_73148,  nil);; 
}

static void __lambda_13(void *data, int argc, object self_7370, object r_7330) {
  Cyc_st_add(data, "scheme/lazy.sld:delay-force");

closureN_type c_73150;
c_73150.hdr.mark = gc_color_red;
 c_73150.hdr.grayed = 0;
c_73150.tag = closureN_tag;
 c_73150.fn = (function_type)__lambda_12;
c_73150.num_args = 1;
c_73150.num_elt = 2;
c_73150.elts = (object *)alloca(sizeof(object) * 2);
c_73150.elts[0] = ((closureN)self_7370)->elts[0];
c_73150.elts[1] = ((closureN)self_7370)->elts[1];


make_cons(c_73159,((closureN)self_7370)->elts[2], r_7330);
return_closcall1(data,(closure)&c_73150,  &c_73159);; 
}

static void __lambda_12(void *data, int argc, object self_7371, object r_7328) {
  Cyc_st_add(data, "scheme/lazy.sld:delay-force");

make_cons(c_73155,((closureN)self_7371)->elts[1], r_7328);
return_closcall1(data,  ((closureN)self_7371)->elts[0],  &c_73155);; 
}

static void __lambda_11(void *data, int argc, closure _,object k_7339, object expr_7312, object rename_7311, object compare_7310) {
  Cyc_st_add(data, "scheme/lazy.sld:delay");

closureN_type c_7386;
c_7386.hdr.mark = gc_color_red;
 c_7386.hdr.grayed = 0;
c_7386.tag = closureN_tag;
 c_7386.fn = (function_type)__lambda_10;
c_7386.num_args = 1;
c_7386.num_elt = 2;
c_7386.elts = (object *)alloca(sizeof(object) * 2);
c_7386.elts[0] = expr_7312;
c_7386.elts[1] = k_7339;

return_closcall1(data,(closure)&c_7386,  quote_make_91promise);; 
}

static void __lambda_10(void *data, int argc, object self_7372, object r_7340) {
  Cyc_st_add(data, "scheme/lazy.sld:delay");

closureN_type c_7388;
c_7388.hdr.mark = gc_color_red;
 c_7388.hdr.grayed = 0;
c_7388.tag = closureN_tag;
 c_7388.fn = (function_type)__lambda_9;
c_7388.num_args = 1;
c_7388.num_elt = 3;
c_7388.elts = (object *)alloca(sizeof(object) * 3);
c_7388.elts[0] = ((closureN)self_7372)->elts[0];
c_7388.elts[1] = ((closureN)self_7372)->elts[1];
c_7388.elts[2] = r_7340;

return_closcall1(data,(closure)&c_7388,  quote_lambda);; 
}

static void __lambda_9(void *data, int argc, object self_7373, object r_7344) {
  Cyc_st_add(data, "scheme/lazy.sld:delay");

closureN_type c_7390;
c_7390.hdr.mark = gc_color_red;
 c_7390.hdr.grayed = 0;
c_7390.tag = closureN_tag;
 c_7390.fn = (function_type)__lambda_8;
c_7390.num_args = 1;
c_7390.num_elt = 4;
c_7390.elts = (object *)alloca(sizeof(object) * 4);
c_7390.elts[0] = ((closureN)self_7373)->elts[0];
c_7390.elts[1] = ((closureN)self_7373)->elts[1];
c_7390.elts[2] = ((closureN)self_7373)->elts[2];
c_7390.elts[3] = r_7344;

return_closcall1(data,(closure)&c_7390,  nil);; 
}

static void __lambda_8(void *data, int argc, object self_7374, object r_7346) {
  Cyc_st_add(data, "scheme/lazy.sld:delay");

closureN_type c_7392;
c_7392.hdr.mark = gc_color_red;
 c_7392.hdr.grayed = 0;
c_7392.tag = closureN_tag;
 c_7392.fn = (function_type)__lambda_7;
c_7392.num_args = 1;
c_7392.num_elt = 4;
c_7392.elts = (object *)alloca(sizeof(object) * 4);
c_7392.elts[0] = ((closureN)self_7374)->elts[1];
c_7392.elts[1] = ((closureN)self_7374)->elts[2];
c_7392.elts[2] = ((closureN)self_7374)->elts[3];
c_7392.elts[3] = r_7346;

return_closcall1(data,(closure)&c_7392,  cadr(((closureN)self_7374)->elts[0]));; 
}

static void __lambda_7(void *data, int argc, object self_7375, object r_7348) {
  Cyc_st_add(data, "scheme/lazy.sld:delay");

closureN_type c_7394;
c_7394.hdr.mark = gc_color_red;
 c_7394.hdr.grayed = 0;
c_7394.tag = closureN_tag;
 c_7394.fn = (function_type)__lambda_6;
c_7394.num_args = 1;
c_7394.num_elt = 5;
c_7394.elts = (object *)alloca(sizeof(object) * 5);
c_7394.elts[0] = ((closureN)self_7375)->elts[0];
c_7394.elts[1] = ((closureN)self_7375)->elts[1];
c_7394.elts[2] = ((closureN)self_7375)->elts[2];
c_7394.elts[3] = ((closureN)self_7375)->elts[3];
c_7394.elts[4] = r_7348;

return_closcall1(data,(closure)&c_7394,  nil);; 
}

static void __lambda_6(void *data, int argc, object self_7376, object r_7349) {
  Cyc_st_add(data, "scheme/lazy.sld:delay");

closureN_type c_7396;
c_7396.hdr.mark = gc_color_red;
 c_7396.hdr.grayed = 0;
c_7396.tag = closureN_tag;
 c_7396.fn = (function_type)__lambda_5;
c_7396.num_args = 1;
c_7396.num_elt = 4;
c_7396.elts = (object *)alloca(sizeof(object) * 4);
c_7396.elts[0] = ((closureN)self_7376)->elts[0];
c_7396.elts[1] = ((closureN)self_7376)->elts[1];
c_7396.elts[2] = ((closureN)self_7376)->elts[2];
c_7396.elts[3] = ((closureN)self_7376)->elts[3];


make_cons(c_73125,((closureN)self_7376)->elts[4], r_7349);
return_closcall1(data,(closure)&c_7396,  &c_73125);; 
}

static void __lambda_5(void *data, int argc, object self_7377, object r_7347) {
  Cyc_st_add(data, "scheme/lazy.sld:delay");

closureN_type c_7398;
c_7398.hdr.mark = gc_color_red;
 c_7398.hdr.grayed = 0;
c_7398.tag = closureN_tag;
 c_7398.fn = (function_type)__lambda_4;
c_7398.num_args = 1;
c_7398.num_elt = 3;
c_7398.elts = (object *)alloca(sizeof(object) * 3);
c_7398.elts[0] = ((closureN)self_7377)->elts[0];
c_7398.elts[1] = ((closureN)self_7377)->elts[1];
c_7398.elts[2] = ((closureN)self_7377)->elts[2];


make_cons(c_73121,((closureN)self_7377)->elts[3], r_7347);
return_closcall1(data,(closure)&c_7398,  &c_73121);; 
}

static void __lambda_4(void *data, int argc, object self_7378, object r_7345) {
  Cyc_st_add(data, "scheme/lazy.sld:delay");

closureN_type c_73100;
c_73100.hdr.mark = gc_color_red;
 c_73100.hdr.grayed = 0;
c_73100.tag = closureN_tag;
 c_73100.fn = (function_type)__lambda_3;
c_73100.num_args = 1;
c_73100.num_elt = 2;
c_73100.elts = (object *)alloca(sizeof(object) * 2);
c_73100.elts[0] = ((closureN)self_7378)->elts[0];
c_73100.elts[1] = ((closureN)self_7378)->elts[1];


make_cons(c_73117,((closureN)self_7378)->elts[2], r_7345);
return_closcall1(data,(closure)&c_73100,  &c_73117);; 
}

static void __lambda_3(void *data, int argc, object self_7379, object r_7342) {
  Cyc_st_add(data, "scheme/lazy.sld:delay");

closureN_type c_73102;
c_73102.hdr.mark = gc_color_red;
 c_73102.hdr.grayed = 0;
c_73102.tag = closureN_tag;
 c_73102.fn = (function_type)__lambda_2;
c_73102.num_args = 1;
c_73102.num_elt = 3;
c_73102.elts = (object *)alloca(sizeof(object) * 3);
c_73102.elts[0] = ((closureN)self_7379)->elts[0];
c_73102.elts[1] = ((closureN)self_7379)->elts[1];
c_73102.elts[2] = r_7342;

return_closcall1(data,(closure)&c_73102,  nil);; 
}

static void __lambda_2(void *data, int argc, object self_7380, object r_7343) {
  Cyc_st_add(data, "scheme/lazy.sld:delay");

closureN_type c_73104;
c_73104.hdr.mark = gc_color_red;
 c_73104.hdr.grayed = 0;
c_73104.tag = closureN_tag;
 c_73104.fn = (function_type)__lambda_1;
c_73104.num_args = 1;
c_73104.num_elt = 2;
c_73104.elts = (object *)alloca(sizeof(object) * 2);
c_73104.elts[0] = ((closureN)self_7380)->elts[0];
c_73104.elts[1] = ((closureN)self_7380)->elts[1];


make_cons(c_73113,((closureN)self_7380)->elts[2], r_7343);
return_closcall1(data,(closure)&c_73104,  &c_73113);; 
}

static void __lambda_1(void *data, int argc, object self_7381, object r_7341) {
  Cyc_st_add(data, "scheme/lazy.sld:delay");

make_cons(c_73109,((closureN)self_7381)->elts[1], r_7341);
return_closcall1(data,  ((closureN)self_7381)->elts[0],  &c_73109);; 
}

static void __lambda_0(void *data, int argc, closure _,object k_7352, object object_7313) {
  Cyc_st_add(data, "scheme/lazy.sld:force");
return_closcall1(data,  object_7313,  k_7352);; 
}

void c_schemelazy_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  quote_make_91promise = find_or_add_symbol("make-promise");
  quote_lambda = find_or_add_symbol("lambda");

  add_global((object *) &__glo_lib_91init_117schemelazy);
  add_global((object *) &__glo_make_91promise);
  add_global((object *) &__glo_delay_91force);
  add_global((object *) &__glo_delay);
  add_global((object *) &__glo_force);
  add_symbol(quote_make_91promise);
  add_symbol(quote_lambda);
  mclosure0(c_73231, (function_type)__lambda_33);c_73231.num_args = 0; 
  __glo_lib_91init_117schemelazy = &c_73231; 
  mclosure0(c_73176, (function_type)__lambda_32);c_73176.num_args = 1; 
  __glo_make_91promise = &c_73176; 
  mmacro(c_73130, (function_type)__lambda_22);c_73130.num_args = 3; 
  __glo_delay_91force = &c_73130; 
  mmacro(c_7384, (function_type)__lambda_11);c_7384.num_args = 3; 
  __glo_delay = &c_7384; 
  mclosure0(c_7382, (function_type)__lambda_0);c_7382.num_args = 1; 
  __glo_force = &c_7382; 

  make_cvar(cvar_73234, (object *)&__glo_lib_91init_117schemelazy);make_cons(pair_73235, find_or_add_symbol("lib-init:schemelazy"), &cvar_73234);
  make_cvar(cvar_73236, (object *)&__glo_make_91promise);make_cons(pair_73237, find_or_add_symbol("make-promise"), &cvar_73236);
  make_cvar(cvar_73238, (object *)&__glo_delay_91force);make_cons(pair_73239, find_or_add_symbol("delay-force"), &cvar_73238);
  make_cvar(cvar_73240, (object *)&__glo_delay);make_cons(pair_73241, find_or_add_symbol("delay"), &cvar_73240);
  make_cvar(cvar_73242, (object *)&__glo_force);make_cons(pair_73243, find_or_add_symbol("force"), &cvar_73242);
make_cons(c_73244, &pair_73235,Cyc_global_variables);
make_cons(c_73245, &pair_73237, &c_73244);
make_cons(c_73246, &pair_73239, &c_73245);
make_cons(c_73247, &pair_73241, &c_73246);
make_cons(c_73248, &pair_73243, &c_73247);
Cyc_global_variables = &c_73248;
cont = ((closure1_type *)cont)->elt1;
(((closure)__glo_lib_91init_117schemelazy)->fn)(data, 1, cont, cont);
}