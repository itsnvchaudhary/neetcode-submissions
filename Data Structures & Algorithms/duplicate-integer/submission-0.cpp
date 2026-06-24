class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        map<int,int>maps;
        for(auto i : nums){
            if( maps[i]!=0){
                return true;
            }
            maps[i]++;
        }
        return false;
    }
};