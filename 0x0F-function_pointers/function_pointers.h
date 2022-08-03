#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/*
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x0E-function_pointers directory.
 */

#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
#endif
