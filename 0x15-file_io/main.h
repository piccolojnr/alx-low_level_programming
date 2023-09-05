#ifndef _MAIN_H_
#define _MAIN_H_

#define _POSIX_C_SOURCE 200809L

#define BUFFER_SIZE 1024

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif