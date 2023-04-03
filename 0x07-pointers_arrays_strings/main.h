#include <unistd.h>

#ifndef _PUTCHAR /* start */
#define _PUTCHAR
int _putchar(int c);
#endif /* end */

#ifndef _MEMSET /* start */
#define _MEMSET
char *_memset(char *s, char b, unsigned int n);
#endif /* end */

#ifndef _MEMCPY /* start */
#define _MEMCPY
char *_memcpy(char *dest, char *src, unsigned int n);
#endif /* end */

#ifndef _STRCHR /* start */
#define _STRCHR
char *_strchr(char *s, char c);
#endif /* end */

#ifndef _STRSPN /* start */
#define _STRSPN
unsigned int _strspn(char *s, char *accept);
#endif /* end */

#ifndef _STRPBRK /* start */
#define _STRPBRK
char *_strpbrk(char *s, char *accept);
#endif /* end */

#ifndef _STRSTR /* start */
#define _STRSTR
char *_strstr(char *haystack, char *needle);
#endif /* end */

#ifndef PRINT_CHESSBOARD /* start */
#define PRINT_CHESSBOARD
void print_chessboard(char (*a)[8]);
#endif /* end */

#ifndef PRINT_DIAGSUMS /* start */
#define PRINT_DIAGSUMS
void print_diagsums(int *a, int size);
#endif /* end */

#ifndef SET_STRING /* start */
#define SET_STRING
void set_string(char **s, char *to);
#endif /* end */


