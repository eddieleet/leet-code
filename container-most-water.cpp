#include <iostream>
#include <vector>

class Solution {
 public:
     int maxArea(std::vector<int>& height){
        int left = 0;
        int right = height.size() -1;
        int maxArea = 0;

        while (left < right){
            int minHeight = std::min(height[left], height[right]);
            int width = right - left;
            int currentArea = minHeight * width;

            maxArea = std::max(maxArea, currentArea);

        if(height[left] < height[right]){
            ++left;
        } else {
            --right;
        }
        }
        return maxArea;
     };
    
};

int main(){
    // test the Solution class 
return 0;
}