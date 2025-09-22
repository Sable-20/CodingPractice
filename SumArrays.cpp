#include <vector>
#include <numeric>

/*
Write a function that takes an array of numbers and returns the sum of the numbers. The numbers can be negative or non-integer. If the array does not contain any numbers then you should return 0.
*/

int sum(const std::vector<int> &nums)
{
  // your code here
  return std::accumulate(nums.begin(), nums.end(), 0);
}