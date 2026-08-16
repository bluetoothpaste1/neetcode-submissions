class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        nums.push_back(0);

        int count = 0;
        int count_prev = 0;
        for(auto &e : nums) {
            if (e == 0) {
                if (count > count_prev)
                    count_prev = count;
                count = 0;
            }
            else { count++; }
        }
        return count_prev;
    }
};