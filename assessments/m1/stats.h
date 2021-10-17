/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdic
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h
 * @brief Header file for the stats function
 *
 * This file contains the declaration of functions that allow basic array 
 * manipulation and statistics functions.
 *
 * @author Alejandro Arcila Mora
 * @date 2021/10/16
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param: A unsigned char pointer to an n-element data array
 * @param: An unsigned integer as the size of the array
 * @return: An unsigned char result from the function
 */
unsigned char print_statistics(unsigned char * arr, unsigned int arr_size);

/**
 * @brief Given an array of data and a length, prints the array to the screen
 *
 * @param: A unsigned char pointer to an n-element data array
 * @param: An unsigned integer as the size of the array
 * @return: An unsigned char result from the function
 */
unsigned char print_array(unsigned char * arr, unsigned int arr_size);

/**
 * @brief Given an array of data and a length, returns the median value
 *
 * @param: A unsigned char pointer to an n-element data array
 * @param: An unsigned integer as the size of the array
 * @return: An unsigned char result from the function
 */
unsigned char find_median(unsigned char * arr, unsigned int arr_size);

/**
 * @brief Given an array of data and a length, returns the mean
 *
 * @param: A unsigned char pointer to an n-element data array
 * @param: An unsigned integer as the size of the array
 * @return: An unsigned char result from the function
 */
unsigned char find_mean(unsigned char * arr, unsigned int arr_size);

/**
 * @brief Given an array of data and a length, returns the maximum
 *
 * @param: A unsigned char pointer to an n-element data array
 * @param: An unsigned integer as the size of the array
 * @return: An unsigned char result from the function
 */
unsigned char find_maximum(unsigned char * arr, unsigned int arr_size);

/**
 * @brief Given an array of data and a length, returns the minimum
 *
 * @param: A unsigned char pointer to an n-element data array
 * @param: An unsigned integer as the size of the array
 * @return: An unsigned char result from the function
 */
unsigned char find_minimum(unsigned char * arr, unsigned int arr_size);

/**
 * @brief Given an array of data and a length, sorts the array from largest to smallest.
 *
 * @param: A unsigned char pointer to an n-element data array
 * @param: An unsigned integer as the size of the array
 * @return: An unsigned char result from the function
 */
unsigned char sort_array(unsigned char * arr, unsigned int arr_size);

#endif /* __STATS_H__ */