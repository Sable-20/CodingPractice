/*
Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a string).

Examples:

Inputs: "abc", "bc"
Output: true

Inputs: "abc", "d"
Output: false
*/

#include <string>
bool solution(std::string const &str, std::string const &ending)
{
  if (ending.size() > str.size())
  {
    return false;
  }
  return str.compare(str.size() - ending.size(), ending.size(), ending) == 0;
}