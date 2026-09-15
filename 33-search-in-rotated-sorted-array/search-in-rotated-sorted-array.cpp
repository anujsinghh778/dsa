class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();

        // Step 1: Find index of minimum element
        int l = 0;
        int r = n - 1;

        while (l < r) {
            int mid = l + (r - l) / 2;

            if (nums[mid] > nums[r]) {
                l = mid + 1;
            }
            else {
                r = mid;
            }
        }

        int minIndex = l;

        // Step 2: Decide which sorted part to search
        if (target >= nums[minIndex] && target <= nums[n - 1]) {
            l = minIndex;
            r = n - 1;
        }
        else {
            l = 0;
            r = minIndex - 1;
        }

        // Step 3: Normal binary search
        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < target) {
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }

        return -1;
    }
};