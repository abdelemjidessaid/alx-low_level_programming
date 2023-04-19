#ifndef _PUTCHAR_C_
#define _PUTCHAR_C_
int _putchar(char c);
#endif /* _PUTCHAR_C_ */

#ifndef _PRINT_NAME_
#define _PRINT_NAME_
void print_name(char *name, void (*f)(char *));
#endif /* _PRINT_NAME_ */

#ifndef _ARRAY_ITERATOR_
#define _ARRAY_ITERATOR_
void array_iterator(int *array, size_t size, void (*action)(int));
#endif /* _ARRAY_ITERATOR_ */
