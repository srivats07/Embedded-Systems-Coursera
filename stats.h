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
/// Summary
/// This function prints the statistics of a given array
/// Inputs:
/// 1.Char pointer pointing to the address of the Char Array
/// 2.Size of the array in the form of 'int'
/// Outputs: Void. Prints the statistics
void print_statistics(unsigned char *arrayBaseAddress, int sizeOfArray);

/// Summary
/// This function prints the elements of a given array
/// Inputs:
/// 1.Char pointer pointing to the address of the Char Array
/// 2.Size of the array in the form of 'int'
/// Outputs: Void. Prints the elements of the array
void print_array(unsigned char *arrayBaseAddress,int sizeOfArray);

/// Summary
/// This function finds the mean value of a given array
/// Inputs:
/// 1.Char pointer pointing to the address of the Char Array
/// 2.Size of the array in the form of 'int' datatype
/// Outputs: Returns the mean value
float find_mean(unsigned char *arrayBaseAddress,int sizeOfArray);

/// Summary
/// This function finds the median of a given array
/// Inputs:
/// 1.Char pointer pointing to the address of the Char Array
/// 2.Size of the array in the form of 'int' datatype
/// Outputs: Returns the median value
int find_median(unsigned char *arrayBaseAddress,int sizeOfArray);

/// Summary
/// This function finds the maximum value of a given array
/// Inputs:
/// 1.Char pointer pointing to the address of the Char Array
/// 2.Size of the array in the form of 'int'
/// Outputs: Returns the maximum value.
int find_maximum(unsigned char *arrayBaseAddress,int sizeOfArray);

/// Summary
/// This function finds the minimum value of a given array
/// Inputs:
/// 1.Char pointer pointing to the address of the Char Array
/// 2.Size of the array in the form of 'int'
/// Outputs: Returns the minimum value
int find_minimum(unsigned char *arrayBaseAddress,int sizeOfArray);

/// Summary
/// This function sorts and prints the given array in descending order
/// Inputs:
/// 1.Char pointer pointing to the address of the Char Array
/// 2.Size of the array in the form of 'int'
/// Outputs: Base address of the sorted order is returned.
int* sort_array(unsigned char *arrayBaseAddress, int sizeOfArray);



#endif /* __STATS_H__ */
