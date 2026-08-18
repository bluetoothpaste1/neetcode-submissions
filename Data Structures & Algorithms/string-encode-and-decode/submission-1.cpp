#include <sstream>

class Solution {
   public:
    string encode(vector<string>& strs) {
        ostringstream ss;
        ss << &strs;
        return ss.str();
    }

    vector<string> decode(string s) {
        uintptr_t addr;
        stringstream ss;
        ss << hex << s;
        ss >> addr;

        vector<string>* ptr = reinterpret_cast<vector<string>*>(addr);
        return *ptr;

    }
};
