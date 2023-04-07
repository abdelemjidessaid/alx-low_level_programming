#ifndef _PUTCHAR
#define _PUTCHAR
int _putchar(char c);
#endif

#ifndef _ISLOWER
#define _ISLOWER
int _islower(int c);
#endif

#ifndef _ISALPHA
#define _ISALPHA
int _isalpha(int c);
#endif

#ifndef _ABS
#define _ABS
int _abs(int n);
#endif

#ifndef _ISUPPER
#define _ISUPPER
int _isupper(int c);
#endif

#ifndef _ISDIGIT
#define _ISDIGIT
int _isdigit(int c);
#endif

#ifndef _STRLEN
#define _STRLEN
int _strlen(char *s);
#endif

#ifndef _PUTS
#define _PUTS
void _puts(char *s);
#endif

#ifndef _STRCPY
#define _STRCPY
char *_strcpy(char *dest, char *src);
#endif

#ifndef _ATOI
#define _ATOI
int _atoi(char *s);
#endif

#ifndef _STRCAT
#define _STRCAT
char *_strcat(char *dest, char *src);
#endif

#ifndef _STRNCAT
#define _STRNCAT
char *_strncat(char *dest, char *src, int n);
#endif

#ifndef _STRNCPY
#define _STRNCPY
char *_strncpy(char *dest, char *src, int n);
#endif

#ifndef _STRCMP
#define _STRCMP
int _strcmp(char *s1, char *s2);
#endif

#ifndef _MEMSET
#define _MEMSET
char *_memset(char *s, char b, unsigned int n);
#endif

#ifndef _MEMCPY
#define _MEMCPY
char *_memcpy(char *dest, char *src, unsigned int n);
#endif

#ifndef _STRCHR
#define _STRCHR
char *_strchr(char *s, char c);
#endif

#ifndef _STRSPN
#define _STRSPN
unsigned int _strspn(char *s, char *accept);
#endif

#ifndef _STRPBRK
#define _STRPBRK
char *_strpbrk(char *s, char *accept);
#endif

#ifndef _STRSTR
#define _STRSTR
char *_strstr(char *haystack, char *needle);
#endif
