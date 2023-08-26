#include <iostream>
#include <vector>

class Solution {
    public:
    int maxSubArray(std::vector<int>& nums){
        int maxEndingHere = nums[0];
        int maxSoFar = nums[0];

        for(int i = 1; i < nums.size(); ++i){
            maxEndingHere = std::max(nums[i],maxEndingHere +nums[i] );
            maxSoFar = std::max(maxSoFar, maxEndingHere);
        }
        return maxSoFar;
    }
};

main(){
    //test the Solution Class 
    return 0;
}