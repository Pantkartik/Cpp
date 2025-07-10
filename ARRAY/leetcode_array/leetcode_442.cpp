// 442. Find All Duplicates in an Array
// Medium
// Topics
// premium lock icon
// Companies
// Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears at most twice, return an array of all the integers that appears twice.

// You must write an algorithm that runs in O(n) time and uses only constant auxiliary space, excluding the space needed to store the output



vector<int> findDuplicates(vector<int>& nums) {
    vector<int> result;
    for(int i = 0; i < nums.size(); ++i) {
        int index = abs(nums[i]) - 1;  // convert number to index
        if(nums[index] < 0) {
            result.push_back(abs(nums[i]));  // duplicate found
        } else {
            nums[index] = -nums[index];  // mark as seen
        }
    }
    return result;
}
