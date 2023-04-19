#ifndef _CALC_H_
#define _CALC_H_

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

#ifndef _GET_OP_FUNC_
#define _GET_OP_FUNC_
int (*get_op_func(char *s))(int, int);
#endif /* _GET_OP_FUNC_ */

#ifndef _OP_ADD_
#define _OP_ADD_
int op_add(int a, int b);
#endif /* _OP_ADD_ */

#ifndef _OP_SUB_
#define _OP_SUB_
int op_sub(int a, int b);
#endif /* _OP_SUB_ */

#ifndef _OP_MUL_
#define _OP_MUL_
int op_mul(int a, int b);
#endif /* _OP_MUL_ */

#ifndef _OP_DIV_
#define _OP_DIV_
int op_div(int a, int b);
#endif /* _OP_DIV_ */

#ifndef _OP_MOD_
#define _OP_MOD_
int op_mod(int a, int b);
#endif /* _OP_MOD_ */

#endif /* _CALC_H_ */
