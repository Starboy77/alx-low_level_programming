#ifndef MAIN_H_
#define MAIN_H_

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * size_t - unsigned long int
 */
typedef unsigned long int size_t;

/**
 * ssize_t - signed long int
 */
typedef signed long int ssize_t;


int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H_ */
