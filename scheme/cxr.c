/**
 ** This file was automatically generated by the Cyclone scheme compiler
 **
 ** (c) 2014-2016 Justin Ethier
 ** Version 0.0.4 (Pre-release)
 **
 **/

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
object __glo_lib_91init_117schemecxr = nil;
object __glo_caaaaar = nil;
#include "cyclone/runtime.h"
static void __lambda_5(void *data, int argc, closure _,object k_734) ;
static void __lambda_4(void *data, int argc, closure _,object k_737, object lis_731) ;
static void __lambda_3(void *data, int argc, object self_7312, object r_7311) ;
static void __lambda_2(void *data, int argc, object self_7313, object r_7310) ;
static void __lambda_1(void *data, int argc, object self_7314, object r_739) ;
static void __lambda_0(void *data, int argc, object self_7315, object r_738) ;

static void __lambda_5(void *data, int argc, closure _,object k_734) {
  Cyc_st_add(data, "scheme/cxr.sld:lib-init:schemecxr");

make_int(c_7339, 0);
return_closcall1(data,  k_734,  &c_7339);; 
}

static void __lambda_4(void *data, int argc, closure _,object k_737, object lis_731) {
  Cyc_st_add(data, "scheme/cxr.sld:caaaaar");

closureN_type c_7318;
c_7318.hdr.mark = gc_color_red;
 c_7318.hdr.grayed = 0;
c_7318.tag = closureN_tag;
 c_7318.fn = (function_type)__lambda_3;
c_7318.num_args = 1;
c_7318.num_elt = 1;
c_7318.elts = (object *)alloca(sizeof(object) * 1);
c_7318.elts[0] = k_737;

return_closcall1(data,(closure)&c_7318,  car(lis_731));; 
}

static void __lambda_3(void *data, int argc, object self_7312, object r_7311) {
  Cyc_st_add(data, "scheme/cxr.sld:caaaaar");

closureN_type c_7320;
c_7320.hdr.mark = gc_color_red;
 c_7320.hdr.grayed = 0;
c_7320.tag = closureN_tag;
 c_7320.fn = (function_type)__lambda_2;
c_7320.num_args = 1;
c_7320.num_elt = 1;
c_7320.elts = (object *)alloca(sizeof(object) * 1);
c_7320.elts[0] = ((closureN)self_7312)->elts[0];

return_closcall1(data,(closure)&c_7320,  car(r_7311));; 
}

static void __lambda_2(void *data, int argc, object self_7313, object r_7310) {
  Cyc_st_add(data, "scheme/cxr.sld:caaaaar");

closureN_type c_7322;
c_7322.hdr.mark = gc_color_red;
 c_7322.hdr.grayed = 0;
c_7322.tag = closureN_tag;
 c_7322.fn = (function_type)__lambda_1;
c_7322.num_args = 1;
c_7322.num_elt = 1;
c_7322.elts = (object *)alloca(sizeof(object) * 1);
c_7322.elts[0] = ((closureN)self_7313)->elts[0];

return_closcall1(data,(closure)&c_7322,  car(r_7310));; 
}

static void __lambda_1(void *data, int argc, object self_7314, object r_739) {
  Cyc_st_add(data, "scheme/cxr.sld:caaaaar");

closureN_type c_7324;
c_7324.hdr.mark = gc_color_red;
 c_7324.hdr.grayed = 0;
c_7324.tag = closureN_tag;
 c_7324.fn = (function_type)__lambda_0;
c_7324.num_args = 1;
c_7324.num_elt = 1;
c_7324.elts = (object *)alloca(sizeof(object) * 1);
c_7324.elts[0] = ((closureN)self_7314)->elts[0];

return_closcall1(data,(closure)&c_7324,  car(r_739));; 
}

static void __lambda_0(void *data, int argc, object self_7315, object r_738) {
  Cyc_st_add(data, "scheme/cxr.sld:caaaaar");
return_closcall1(data,  ((closureN)self_7315)->elts[0],  car(r_738));; 
}

void c_schemecxr_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 

  add_global((object *) &__glo_lib_91init_117schemecxr);
  add_global((object *) &__glo_caaaaar);
  mclosure0(c_7337, (function_type)__lambda_5);c_7337.num_args = 0; 
  __glo_lib_91init_117schemecxr = &c_7337; 
  mclosure0(c_7316, (function_type)__lambda_4);c_7316.num_args = 1; 
  __glo_caaaaar = &c_7316; 

  make_cvar(cvar_7340, (object *)&__glo_lib_91init_117schemecxr);make_cons(pair_7341, find_or_add_symbol("lib-init:schemecxr"), &cvar_7340);
  make_cvar(cvar_7342, (object *)&__glo_caaaaar);make_cons(pair_7343, find_or_add_symbol("caaaaar"), &cvar_7342);
make_cons(c_7344, &pair_7341,Cyc_global_variables);
make_cons(c_7345, &pair_7343, &c_7344);
Cyc_global_variables = &c_7345;
cont = ((closure1_type *)cont)->elt1;
(((closure)__glo_lib_91init_117schemecxr)->fn)(data, 1, cont, cont);
}