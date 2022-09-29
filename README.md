# Stack
  
  ****************************************************************************************************************************

Q1) STOCK SPAN PROBLEM

  We have a series of n daily price quotes for a stock and we need to calculate the span of stocks price for all n days. 
  The span S[i] of the stocks price on a given day i is defined as the maximum number of consecutive days just before the given     day, for which the price of the stock on the current day is less than or equal to its price on the given day.

  Input: 
  N = 7, price[] = [100 80 60 70 60 75 85]
  Output:
  1 1 1 2 1 4 6
  Explanation:
  Traversing the given input span for 100 
  will be 1, 80 is smaller than 100 so the 
  span is 1, 60 is smaller than 80 so the 
  span is 1, 70 is greater than 60 so the 
  span is 2 and so on. Hence the output will 
  be 1 1 1 2 1 4 6.
  
  ****************************************************************************************************************************

Q2) PREVIOUS GREATER ELEMENT


  ****************************************************************************************************************************
  
Q3) NEXT GREATER ELEMENT

Given an array arr[] of size N having elements, the task is to find the next greater element for each element of the array in order of their appearance in the array.
Next greater element of an element in the array is the nearest element on the right which is greater than the current element.
If there does not exist next greater of current element, then next greater element for current element is -1. For example, next greater of the last element is always -1.

Input: 
N = 4, arr[] = [1 3 2 4]
Output:
3 4 4 -1
Explanation:
In the array, the next larger element 
to 1 is 3 , 3 is 4 , 2 is 4 and for 4 ? 
since it doesn't exist, it is -1.

****************************************************************************************************************************
