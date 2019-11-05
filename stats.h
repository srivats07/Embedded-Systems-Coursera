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
 * @file <stats.h> 
 * @brief <Header file >
 *
 * Contains Declarations of Functions, which are needed for calculating the statistics of 
 * a given array.
 * @author <Srivatsan Ravichandran>
 * @date <5th November 2019>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
void print_statistics(unsigned char *arrayBaseAddress, int sizeOfArray);
//Prints the statistics of a given array
void print_array(unsigned char *arrayBaseAddress,int sizeOfArray);
//Prints the elements of a Char array
float find_mean(unsigned char *arrayBaseAddress,int sizeOfArray);
//Calculates the mean value of a given array
int find_median(unsigned char *arrayBaseAddress,int sizeOfArray);
//Calculates the median value of a given array
int find_maximum(unsigned char *arrayBaseAddress,int sizeOfArray);
//Calculates the maximum value of a given array
int find_minimum(unsigned char *arrayBaseAddress,int sizeOfArray);
//Calculates the minimum value of a given array
int* sort_array(unsigned char *arrayBaseAddress, int sizeOfArray);
//Sorts the given array in ascending order



#endif /* __STATS_H__ */
