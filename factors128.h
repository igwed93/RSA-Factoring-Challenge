#ifndef FACTORS_H
#define FACTORS_H

/* include used header files */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <inttypes.h>

/* variables used */
unsigned __int128 *F;


/* functions used */
unsigned __int128 ConvertNum(char *num);
unsigned __int128 *FindFactor(unsigned __int128 n, unsigned __int128 *f);

#endif
