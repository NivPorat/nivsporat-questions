#include "task1Func.h"
unsigned int GetRightDigit(unsigned int num)
{
    return num % 10;
}

unsigned int returnToDec(unsigned int res, int size, int digitsArr[])
{
    int i = 0;
    for (i = size; i >= 0; i--)
    {
        res <<= 4;
        res |= digitsArr[i];//current res

    }
    return res;
}

unsigned int SaveCurrentNibble(unsigned int mask, int currentNum, unsigned int resTmp)
{
    int i;
    for (i = 0, mask = 0x1; i < 4; i++, mask <<= 1)//size of nibble
    {
        if (currentNum & mask)//if they are equal bitwise
            resTmp = resTmp | mask;
    }
    return resTmp;
}