#ifndef FACTORS_H
#define FACTORS_H

/* include used header files */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

/* variables used */
unsigned long long int *F;


/* functions used */
unsigned long long int ConvertNum(char *num);
unsigned long long int *FindFactor(unsigned long long int n, unsigned long long int *f);

#endif
