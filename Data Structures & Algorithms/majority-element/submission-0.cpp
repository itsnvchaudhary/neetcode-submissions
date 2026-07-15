class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mapcount;
        int ans=0;
        for (int i=0;i<nums.size();i++){
            mapcount[nums[i]]++;
        }
        for(auto i : mapcount){
            if(i.second>(nums.size())/2) {
                ans= i.first;
            }
        }
    return ans;   
    }
};