class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        
        while (left <= right) {
            // Calculate middle index safely to avoid integer overflow
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == target) {
                return mid; // Found the target
            } else if (nums[mid] < target) {
                // Target is larger, ignore the left half
                left = mid + 1;
            } else {
                // Target is smaller, ignore the right half
                right = mid - 1;
            }
        }
        
        return -1; // Target not found
    }
};