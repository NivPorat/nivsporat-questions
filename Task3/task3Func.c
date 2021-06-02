#include "task3Func.h"
int calcDistance(int time, int velocity)
{
	return time * (velocity * 3);
}
int checkForErrors(FILE* vehicleDataErrors, int distance, int displacement)
{
	if (distance != displacement)//if calculated distance is not equal to expected distance
	{
		fprintf(vehicleDataErrors, "%d\n", distance);
	}
	return 1;
}
int verifyFileNameAndPath(FILE* fptr)//checks file validity
{
	if (fptr == NULL)
	{
		printf("error opening file\n");
		exit(1);
	}
	return 1;
}