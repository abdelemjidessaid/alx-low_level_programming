#ifndef _PUTCHAR /* start */
#define _PUTCHAR
int _putchar(char c);
#endif /* end */

#ifndef MALLOC_CHECKED /* start */
#define MALLOC_CHECKED
void *malloc_checked(unsigned int b);
#endif /* end */

#ifndef STRING_NCONCAT /* start */
#define STRING_NCONCAT
char *string_nconcat(char *s1, char *s2, unsigned int n);
#endif /* end */

#ifndef _CALLOC /* start */
#define _CALLOC
void *_calloc(unsigned int nmemb, unsigned int size);
#endif /* end */

#ifndef ARRAY_RANGE /* start */
#define ARRAY_RANGE
int *array_range(int min, int max);
#endif /* end */

#ifndef _REALLOC /* start */
#define _REALLOC
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif /* end */
