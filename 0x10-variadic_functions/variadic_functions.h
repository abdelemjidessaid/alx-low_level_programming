#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#ifndef _PUTCHAR_C_
#define _PUTCHAR_C_
int _putchar(int c);
#endif /* _PUTCHAR_C_ */

#ifndef _SUM_THEM_ALL_
#define _SUM_THEM_ALL_
int sum_them_all(const unsigned int n, ...);
#endif /* _SUM_THEM_ALL_ */

#ifndef _PRINT_NUMBERS_
#define _PRINT_NUMBERS_
void print_numbers(const char *separator, const unsigned int n, ...);
#endif /* _PRINT_NUMBERS_ */

#ifndef _PRINT_STRINGS_
#define _PRINT_STRINGS_
void print_strings(const char *separator, const unsigned int n, ...);
#endif /* _PRINT_STRINGS_ */

#ifndef _PRINT_ALL_
#define _PRINT_ALL_
void print_all(const char * const format, ...);
#endif /* _PRINT_ALL_ */

#endif /* _VARIADIC_FUNCTIONS_H_ */
