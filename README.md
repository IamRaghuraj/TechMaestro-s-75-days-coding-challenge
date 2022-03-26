# TechMaestro-s-75-days-coding-challenge
1. Day 1 
  * Two Sum -> Simple O(N^2) approach worked which the Brute Force Approach. 
  * Best Time to Buy and Sell Stock -> O(N^2) gave TLE but it can be optimized by iterating from back of an array to find the max element till an index which will be much helpful for calculation. It passed all test cases because now the time complexity is O(N).
  * Plus One -> O(N) approach passes all the test case only thing to remeber is to maintain carry and update the carry carefully.
  * Move Zeroes -> Whenever 0 is encounterted just copy every element after that index into index-1 location and put that zero at end. Also maintain a variable which will keep track of how many zeroes are already placed.
2. Day 2
  * Squares of a Sorted Array -> The main optimization part in this code is the sorting so we will create another array with size same as the given vector. We iterate through original array and we will push the data^2 into new vector and we will sort the new vector and return it. The sorting takes O(N LogN).
  * Best Time to Buy and Sell Stock II -> If we can see basically we want to search local minima where we can buy stock and at local maxima we can sell that stock but there is a clever solution in that we can just compare ith day stock with (i - 1)th stock if ith stock is bigger we find the difference and that will be our profit. eg. 1,4,7 so 1 -> 7 gives 6 profit and 1 -> 4 then 4 -> 7 also gives same profit. O(N) we can find the solution. 
  * Find Pivot Index -> For Pivot element we can iterate from start first and keep on calculating sum at ith position similarly we will do that from the end of the array to the first and then we compare the two values LeftSum and RightSum at ith index if it is same we found out our index. Time Complexity -> O(N). 
  * Majority Element -> For this one we can use HashMap data structure, we iterate through the array we count the occurence of each element and then we iterate through map to find the majority element. Time Complexity -> O(N).
3. Day 3
  * Pascal's Triangle ->
  * Remove Duplicates from Sorted Array ->
  * Merge Intervals ->
  * 3Sum -> 