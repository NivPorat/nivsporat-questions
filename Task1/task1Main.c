#include "task1Func.h"
#pragma warning(disable:4996)


void main()
{
    //task vars
#pragma region Task1 Global Vars
    unsigned int num = 0x1234; // sample number
    unsigned int res = 0x0000000000; // maximum of 10 digits - max unsigned int digits
    unsigned int resTmp = 0x0;//temporal var to save current nibble
    unsigned int mask = 0x1;//0001 masking to check bits

    unsigned int comparisonArr[10] = { 0 };//for saving each digit of entered number
    int arrCount = 0;//counter for said array
    unsigned int temp = num;//for not changing original number - optional

#pragma endregion
    
   while (temp)
   {
       resTmp = 0x0000000000;//reset temp reset
       int RightDigit = GetRightDigit(temp);//returns the left smallest digit of number
       resTmp = SaveCurrentNibble(mask, RightDigit, resTmp);
       comparisonArr[arrCount++] = resTmp;//each cell of array saves the num
       temp /= 10;//cuts num by right digit
   }
   res = returnToDec(res, sizeof(comparisonArr)/sizeof(unsigned int) -1, comparisonArr);
  
    printf("\n%lx\n", res);//print the result to console in int translation
    getch();
}




