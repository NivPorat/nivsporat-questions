#include "task2Func.h"
unsigned int GetRightDigit(unsigned int num)
{
    if (!(num % 8)) return 8;
    return num % 8;//low nibble of hex(16/2)
}

unsigned int decToHex(unsigned int comparisonNum[], int size)
{
    int i;
    unsigned int result = 0;
    for (i = size + 1; i >= 0; i--)
    {
        result = result * 10 + comparisonNum[i];
    }
    return result;

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

int isHex(unsigned int num)
{

    while (num)
    {
        if ((num & 0xf) > 9)
            return -1;
        num >>= 4;
    }
    return 1;
}