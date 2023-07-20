#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * Auth: Viashna Soma
 * Desc: Header file that contains prototypes for functions
 * written in 0x14-file_io directory.
 */

#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
