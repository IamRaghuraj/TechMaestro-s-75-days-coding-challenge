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
4. Day 4
  * Insert Delete GetRandom O(1) ->For this code we need to have combination of 2 data structures which are array and hashmap, the hashmap stores number with index it is placed in array and array will store the actual elements with this we can insert in O(1), delete in O(1),search in O(1) and give random number in O(1). The deletion in array is O(1) because what we will do is if we want to delete ith index we will swap that with last index of array and then just remove the last element.
  * Subarray Sum Equals K ->
  * Next Permutation -> The intution behind it is that we will start iterating from back of the array where we look for increasing order of array meaning from the end of the array every ith element should be grater than i+1 th element and we break when the increasing stops now we got the index which we need to swap so we again start from end of the array and look for the next big number compare to the index we found from first iteration and then we break the look swap the two element and reverse the element till the end startgin from the index + 1 location. The reverse work because if we see in the first iteration we started from back and they are in increasing order from back so if you reverse it will be automatically in the incresing order. Edge case is in the first iteration from back the index might be -1 so in that we will just reverse the vector directly. Solution can be achieved in O(N). 
  * Container With Most Water -> We can get a solution in O(N) for that we use two pointer approach we put one pointer at start of array and one at the end then we calculate how much water area we can get and if it more than current value we will replace it now to move the pointer we compare the heights at the start and end index and we update that pointer whose height is small compare to other with we are trying to get maximum area as possible in the future iterations.
5. Day 5
  * 
  * 
  * 