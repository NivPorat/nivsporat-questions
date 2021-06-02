#ifndef  task1Func_h
#define task1Func_h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int GetRightDigit(unsigned int num);
unsigned int returnToDec(unsigned int res, int size, int digitsArr[]);
unsigned int SaveCurrentNibble(unsigned int mask, int currentNum, unsigned int resTmp);

#endif // ! task1.h