# TechMaestro-s-75-days-coding-challenge
1. Day 1 
  * Two Sum -> Simple O(N^2) approach worked which the Brute Force Approach. 
  * Best Time to Buy and Sell Stock -> O(N^2) gave TLE but it can be optimized by iterating from back of an array to find the max element till an index which will be much helpful for calculation. It passed all test cases because now the time complexity is O(N).
  * Plus One -> O(N) approach passes all the test case only thing to remeber is to maintain carry and update the carry carefully.
  * Move Zeroes -> Whenever 0 is encounterted just copy every element after that index into index-1 location and put that zero at end. Also maintain a variable which will keep track of how many zeroes are already placed.
2. Day 2
  * Squares of a Sorted Array -> The main optimization part in this code is the sorting so we will create another array with size same as the given vector. We iterate through original array and we will push the data^2 into new vector and we will sort the new vector and return it. The sorting takes O(N LogN).
  *  
