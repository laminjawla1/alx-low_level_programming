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
#include <stdbool.h>


/*Typedefs*/
typedef unsigned char u_chr;

#define BUFF_SIZE 1024

/*Function prototypes*/
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int append_text_to_file(const char *filename, char *text_content);
void _close(int sample_elf_file);
bool elf_identification(u_chr e_ident[EI_NIDENT]);
void elf_header_printer(Elf64_Ehdr *elf_header);
void print_elf_magic_numbers(u_chr e_ident[EI_NIDENT]);
void print_elf_class(u_chr e_ident[EI_NIDENT]);
void print_elf_header_data(u_chr e_ident[EI_NIDENT]);
void print_elf_version(u_chr e_ident[EI_NIDENT]);
void print_elf_osabi(u_chr e_ident[EI_NIDENT]);
void print_elf_abi_version(u_chr e_ident[EI_NIDENT]);

#endif
