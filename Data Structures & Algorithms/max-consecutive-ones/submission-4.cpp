class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int count = 0;
        int count_prev = 0;
        for(auto &e : nums) {
            if (e == 1) {
                count++;
                if (count > count_prev) count_prev = count;
            }
            else { count = 0; }
        }
        return count_prev;
    }
};