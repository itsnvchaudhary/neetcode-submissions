class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int>ans;
       map<int,int> maps;
       for(int i=0;i<nums.size();i++){
          maps[nums[i]]=i;
       }
       for(int i=0;i<nums.size();i++){
         if( maps[target-nums[i]] && i != maps[target-nums[i]]){
           ans.push_back(i);
           int z = maps[target-nums[i]];
           ans.push_back(z);
           break;
          
         }
       }
    return ans;
    }
};
