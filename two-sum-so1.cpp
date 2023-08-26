#include <iostream>
#include <vector>
#include <unordered_map>

class   Solutiion{
public:
   std::vector<int> twoSum(std::vector<int>& nums, int target){
    std::unordered_map<int, int> numToIndex; // Map to store number-to-index mapping

 for(int i = 0; i < nums.size(); ++i){
    int complement = target - nums[i];

    // check if the complement is already in the map
    if(numToIndex.find(complement) != numToIndex.end()){
        return{numToIndex[complement], i}
    }
    
    // add the current number and its index to the map
    numToIndex[nums[i]]=i;
 }

 return {}; // Return an empty vector if no solution is found
   }

} ;

 
 int main(){
    // test the solution class
    return 0;
 }


