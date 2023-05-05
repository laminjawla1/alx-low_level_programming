#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#define BIT_OFFSET 63
unsigned int binary_to_uint(const char *b);
int _putchar(int c);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);

#endif
