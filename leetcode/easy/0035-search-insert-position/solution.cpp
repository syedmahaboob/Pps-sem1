class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            // Prevent potential overflow (though less critical in modern compilers/64-bit)
            int mid = left + (right - left) / 2; 

            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        // Return left as the insertion position
        return left; 
    }
};