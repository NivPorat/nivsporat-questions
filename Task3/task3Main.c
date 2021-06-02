#include "task3Func.h"

#pragma warning(disable:4996)

void main()
{
	FILE* vehicleDataFile = fopen("D:\\vehicle_data.txt", "r");//open data file for reading
	FILE* vehicleDataErrors = fopen("D:\\Errors_log.txt", "w");//open or create log file
	char* token;
	char delimiter[2] = ",";
	char buffer[100];
	int time, velocity, displacement, distance;

	if (verifyFileNameAndPath(vehicleDataFile) && verifyFileNameAndPath(vehicleDataErrors))
	{
		while (!(feof(vehicleDataFile)))//read until end of file
		{
			time = velocity = displacement = 0;//init variables every iteration
			fgets(buffer, 100, vehicleDataFile);//gets 100 chars of current line or until new line
			token = strtok(buffer, delimiter);//divides the buffer string to 3 tokens
			time = atoi(token);
			token = strtok(NULL, delimiter);
			velocity = atoi(token);
			token = strtok(NULL, delimiter);
			displacement = atoi(token);
			token = strtok(NULL, delimiter);

			distance = calcDistance(time, velocity);//calculate distance via formula

			checkForErrors(vehicleDataErrors, distance, displacement);//check for print errors
		}

		fclose(vehicleDataFile);
		fclose(vehicleDataFile);

		getch();
	}
}

