/*Make sure it is only included once*/
#ifndef MAIN_H
#define MAIN_H

/*Header files*/
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>

/*Buffer size*/
#define BUFF_SIZE 1024

/*Function prototypes*/
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int append_text_to_file(const char *filename, char *text_content);
void _close(int sample_elf_file);

#endif
