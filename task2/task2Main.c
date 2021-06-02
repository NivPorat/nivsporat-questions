#include "task2Func.h"
#pragma warning(disable:4996)
void main()
{
#pragma region Task2 Global Vars

    unsigned int val1 = 0x88888;//change this to alter input
    unsigned int val2 = 0x0000000000; // maximum of 10 digits - max unsigned int digits
    unsigned int resTmp = 0x0;//temporal var to save current nibble
    unsigned int mask = 0x1;//0001 masking to check bits

    unsigned int comparisonArr[10] = { 0 };//for saving each digit of entered number
    int arrCount = 0;//counter for said array
    unsigned int temp = val1;//for not changing original number - optional
#pragma endregion

    if (isHex(val1) == -1)
        exit(1);//exit program
    else
    {
        while (temp)
        {
            resTmp = 0x0000000000;//reset temp reset
            unsigned int RightDigit = GetRightDigit(temp);//returns the left smallest digit of number
            resTmp = SaveCurrentNibble(mask, RightDigit, resTmp);
            comparisonArr[arrCount++] = resTmp;//each cell of array saves the num
            temp >>= 4;//cuts num by right digit
        }
       // res = returnToDec(res, sizeof(comparisonArr) / sizeof(unsigned int) - 1, comparisonArr);
        val2 = decToHex(comparisonArr,arrCount);
        printf("0x%x", val1);
        printf("\n%ld\n", val2);//print the result to console
        getch();
    }
}
