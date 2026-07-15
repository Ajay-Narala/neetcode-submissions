class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;  

        unordered_map<char,int> mpp;
        for(int c:s) mpp[c]++;
        for(int c:t){
            mpp[c]--;
            if(mpp[c]<0) return false;
        }
        return true;
    }
};
