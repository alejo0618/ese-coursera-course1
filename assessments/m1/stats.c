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
 * @file stats.c
 * @brief Statistical analytics on a datasets
 *
 * The purpose of this assessment is to refresh concepts of C launguage. 
 * Prints statistics to the command line using a variety of 
 * c-programming operators and features.
 *
 * @author Alejandro Arcila Mora
 * @date 2021/10/16
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

  print_statistics(test, SIZE);
  print_array(test, SIZE);

}


unsigned char print_statistics(unsigned char * arr, unsigned int arr_size)
{
  printf("Minimum value: %d\n", find_minimum(arr, SIZE));
  printf("Maximum value: %d\n", find_maximum(arr, SIZE));  
  printf("Mean: %d\n", find_mean(arr, SIZE));
  printf("Median: %d\n", find_median(arr, SIZE));  
}

unsigned char print_array(unsigned char * arr, unsigned int arr_size)
{
  printf("\n|Row|Value|\n");
  printf("|---|-----|\n");
  for (int i = 0; i < arr_size; i++)
  {
    printf("|%3d|%5d|\n", i, arr[i]);
  }
}

unsigned char find_median(unsigned char * arr, unsigned int arr_size)
{

  // Using the same functions to obtain the results  
  sort_array(arr, arr_size);

  // Check if the array is even
  if (arr_size % 2 == 0)
  {
    // The median is the average of the middle numbers    
    return (arr[(arr_size / 2) - 1] + arr[(arr_size / 2)])/2;
  }
  else
  {
    // Odd arrays just need to return the middle value
    return arr[(arr_size - 1)/2];
  }  
}

unsigned char find_mean(unsigned char * arr, unsigned int arr_size)
{
  float mean = 0;
  // Add all the array values in order to calculate the mean
  for (int i = 0; i < arr_size; i++)
  {
    mean += arr[i];
  }

  return mean/arr_size;

}

unsigned char find_maximum(unsigned char * arr, unsigned int arr_size)
{
  // Using the same functions to obtain the results  
  sort_array(arr, arr_size);
  return arr[0];
}

unsigned char find_minimum(unsigned char * arr, unsigned int arr_size)
{
  // Using the same functions to obtain the results  
  sort_array(arr, arr_size);
  return arr[arr_size - 1];
}

unsigned char sort_array(unsigned char * arr, unsigned int arr_size)
{
  // Implementing a buble sort function to order the array
  for (int i = 0; i < arr_size; i++)
  {
    for (int j = i + 1; j < arr_size; j++)
    {
      // Swap items when to order values from largest to smallest
      if (arr[i] < arr[j])
      {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }  
    }    
  }
}