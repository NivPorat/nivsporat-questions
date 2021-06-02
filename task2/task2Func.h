#ifndef  task2Func_h
#define task2Func_h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int GetRightDigit(unsigned int num);
unsigned int decToHex(unsigned int comparisonNum[], int size);
unsigned int SaveCurrentNibble(unsigned int mask, int currentNum, unsigned int resTmp);
int isHex(unsigned int num);
#endif // ! task2.h