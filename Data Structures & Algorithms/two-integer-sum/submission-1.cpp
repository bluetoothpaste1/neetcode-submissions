class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> notebook = {};
        int pair = 0;
        vector<int> result = {};

        for(size_t i = 0; i < nums.size(); ++i){
            pair = (target - nums[i]);
            if (notebook.contains(pair)){
                result.push_back(notebook[pair]);
                result.push_back(i);
                goto end;
            }
            notebook.insert_or_assign(nums[i], i);
        }
        end:
        return result;
        
    }
};
