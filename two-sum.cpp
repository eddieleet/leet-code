#include <iostream>
#include <vector>
#include <algorithm>


class Solution{
    public:
       std::vector<int> twoSum(std::vector<int>& nums, int target){
         std::vector<int> result;

       for (auto it1 = nums.begin(); it1 != nums.end(); ++it1){
       auto it2 = std::find(it1 + 1, nums.end(), target - *it1);

        if (it2 != nums.end()){ // found the number
          result.push_back(it1 - nums.begin());
          result.push_back(it2 - nums.begin());
          break; // exit the loop since we found a solution 

        }
       }
 return result;
       }
};

int main(){
    // you can test  the solution class
    return 0;
}

