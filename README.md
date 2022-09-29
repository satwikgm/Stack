# Stack

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
