class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> notebook = {};
        notebook.reserve(nums.size());
        for(int &num : nums){
            if (notebook.contains(num)) return true;
            notebook.insert(num);
        }
        return false;
    }
};