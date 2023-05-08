#ifndef _MAIN_H_
#define _MAIN_H_

/**** MACROS ****/
#define BUF_SIZE 1024


/**** HEADER FILES ****/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>


/****  PROTOTYPES ****/
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);


#endif /* _MAIN_H_ */
