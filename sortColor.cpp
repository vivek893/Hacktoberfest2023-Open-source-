/*Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
You must solve this problem without using the library's sort function.*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int temp=0;
        for(int i=0;i<nums.size();i++){
            for(int i=0;i<nums.size()-1;i++){
                if(nums[i]>=nums[i+1]){
                    temp=nums[i];
                    nums[i]=nums[i+1];
                    nums[i+1]=temp;

                }
               

            }
        }
        
    }
};
