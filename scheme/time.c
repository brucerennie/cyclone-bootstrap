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
object __glo_lib_91init_117schemetime = nil;
object __glo_jiffies_91per_91second = nil;
object __glo_current_91jiffy = nil;
object __glo_current_91second = nil;
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
extern object __glo__85exception_91handler_91stack_85;
extern object __glo_Cyc_91add_91exception_91handler;
extern object __glo_Cyc_91remove_91exception_91handler;
extern object __glo_newline;
extern object __glo_write_91char;
extern object __glo_flush_91output_91port;
extern object __glo_read_91line;
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
extern object __glo_when;
extern object __glo_quasiquote;
#include "cyclone/runtime.h"
static void __lambda_3(void *data, int argc, closure _,object k_733) ;
static void __lambda_2(void *data, int argc, closure _, object k) ;
static void __lambda_1(void *data, int argc, closure _, object k) ;
static void __lambda_0(void *data, int argc, closure _, object k) ;

static void __lambda_3(void *data, int argc, closure _,object k_733) {
  Cyc_st_add(data, "scheme/time.sld:lib-init:schemetime");

make_int(c_739, 0);
return_closcall1(data,  k_733,  &c_739);; 
}

static void __lambda_2(void *data, int argc, closure _, object k) { make_int(box, CLOCKS_PER_SEC);
        return_closcall1(data, k, &box);  }
static void __lambda_1(void *data, int argc, closure _, object k) { make_double(box, 0.0);
        clock_t jiffy = clock();
        double_value(&box) = jiffy;
        return_closcall1(data, k, &box);  }
static void __lambda_0(void *data, int argc, closure _, object k) { make_double(box, 0.0);
        time_t t = time(NULL);
        double_value(&box) = t;
        return_closcall1(data, k, &box);  }
void c_schemetime_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 

  add_global((object *) &__glo_lib_91init_117schemetime);
  add_global((object *) &__glo_jiffies_91per_91second);
  add_global((object *) &__glo_current_91jiffy);
  add_global((object *) &__glo_current_91second);
  mclosure0(c_737, (function_type)__lambda_3);c_737.num_args = 0; 
  __glo_lib_91init_117schemetime = &c_737; 
  mclosure0(c_736, (function_type)__lambda_2);c_736.num_args = 0; 
  __glo_jiffies_91per_91second = &c_736; 
  mclosure0(c_735, (function_type)__lambda_1);c_735.num_args = 0; 
  __glo_current_91jiffy = &c_735; 
  mclosure0(c_734, (function_type)__lambda_0);c_734.num_args = 0; 
  __glo_current_91second = &c_734; 

  make_cvar(cvar_7310, (object *)&__glo_lib_91init_117schemetime);make_cons(pair_7311, find_or_add_symbol("lib-init:schemetime"), &cvar_7310);
  make_cvar(cvar_7312, (object *)&__glo_jiffies_91per_91second);make_cons(pair_7313, find_or_add_symbol("jiffies-per-second"), &cvar_7312);
  make_cvar(cvar_7314, (object *)&__glo_current_91jiffy);make_cons(pair_7315, find_or_add_symbol("current-jiffy"), &cvar_7314);
  make_cvar(cvar_7316, (object *)&__glo_current_91second);make_cons(pair_7317, find_or_add_symbol("current-second"), &cvar_7316);
make_cons(c_7318, &pair_7311,Cyc_global_variables);
make_cons(c_7319, &pair_7313, &c_7318);
make_cons(c_7320, &pair_7315, &c_7319);
make_cons(c_7321, &pair_7317, &c_7320);
Cyc_global_variables = &c_7321;
cont = ((closure1_type *)cont)->elt1;
(((closure)__glo_lib_91init_117schemetime)->fn)(data, 1, cont, cont);
}