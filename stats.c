/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <Week1 Assignment Implementation>
 *
 * This program calculates the statistics of a given array
 * @author Srivatsan Ravichandran
 * @date 5th November 2019
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_statistics(test,SIZE);
}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char *arrayBaseAddress, int sizeOfArray){
	printf("\n Embedded Systems Coursera Week 1 Assignment\n");
	print_array(arrayBaseAddress, sizeOfArray);
	printf("\n Statistics of the array:\n");
	printf("\n Mean value of the array: %f",find_mean(arrayBaseAddress,sizeOfArray));
	printf("\n Median value of the array: %d",find_median(arrayBaseAddress,sizeOfArray));
	printf("\n Maximum value of the array: %d",find_maximum(arrayBaseAddress,sizeOfArray));
	printf("\n Minimum value of the array: %d",find_minimum(arrayBaseAddress,sizeOfArray));
}
void print_array(unsigned char *arrayBaseAddress,int sizeOfArray){
	int i=0;
	printf("\n The input array is :\n");
	for (i = 0; i < sizeOfArray; i++){
		printf(" [%d]\t",(int)*arrayBaseAddress);
		arrayBaseAddress++;
	}
}

float find_mean(unsigned char *arrayBaseAddress,int sizeOfArray){
	//Calculaties the mean value
	float sum=0;
	int i=0;
	float mean=0;
	for (i = 0; i < sizeOfArray; i++){
		sum += (int)*arrayBaseAddress;
		arrayBaseAddress++;
	}
	mean = sum / sizeOfArray;
	return mean;
}
int find_median(unsigned char *arrayBaseAddress,int sizeOfArray){
	//calculates the median value
	int i;
	int* intArrayBaseAddress = sort_array(arrayBaseAddress,sizeOfArray);
	int median =0;
	if(SIZE%2 == 0){
		median = (intArrayBaseAddress[SIZE/2] + intArrayBaseAddress[SIZE/2+1])/2;
	}
	else{
		median = intArrayBaseAddress[(SIZE+1)/2];
	}
	return median;
}
int find_maximum(unsigned char *arrayBaseAddress,int sizeOfArray){
	//Calculating the maximum value
	int i=0;
	int maximumElement = (int)arrayBaseAddress[i];
	for (i = 1; i < sizeOfArray; i++)	{
		if (maximumElement < (int)arrayBaseAddress[i]){
			maximumElement = (int)arrayBaseAddress[i];
		}
	}
	return maximumElement;
}
int find_minimum(unsigned char *arrayBaseAddress,int sizeOfArray){
	//Calculating the minimum value
	int i=0;
	int minimumElement = (int)arrayBaseAddress[i];
	for (i = 1; i < sizeOfArray; i++){
		if (minimumElement > (int)arrayBaseAddress[i]){
			minimumElement = (int)arrayBaseAddress[i];
		}
	}
	return minimumElement;
}

int* sort_array(unsigned char *arrayBaseAddress, int sizeOfArray){
	//Sorting in Discending Order
	int i,j;
	int intArray[sizeOfArray];
  	for(i=0;i<sizeOfArray;i++){
  	intArray[i] = (int)*arrayBaseAddress;
  	arrayBaseAddress++;
  	}
	  	
	for (i = 0; i < sizeOfArray; i++){
		for (j = i + 1; j < sizeOfArray; j++){
			if (intArray[j] > intArray[i]){
				int temp = intArray[i];
				intArray[i] = intArray[j];
				intArray[j] = temp;
			}
		}
	}
	printf("\n The array sorted in descending order: \n");
	for(i=0;i<sizeOfArray;i++){
		printf(" [%d]\t",intArray[i]);
	}

	return intArray;
}

