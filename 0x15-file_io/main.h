#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>


ssize_t read_textfile(const char *filename, size_t letters);

#endif /*MAIN_H*/
