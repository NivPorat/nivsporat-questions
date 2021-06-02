#ifndef  task3Func_h
#define task3Func_h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calcDistance(int time, int velocity);
int checkForErrors(FILE* vehicleDataErrors, int distance, int displacement);
int verifyFileNameAndPath(FILE* fptr);

#endif // ! task3.h
