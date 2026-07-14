class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         vector<vector<string>>ans;
         map<string , vector<string>>maps;

         for( int i=0;i<strs.size();i++){
            string curr = strs[i];
            sort(curr.begin(), curr.end());
            if(maps[curr].size()!=0){
                 maps[curr].push_back(strs[i]);
            }
            else{
             vector<string> vec1 = {strs[i]};
              maps[curr] = vec1;
            }

         }
         for(auto i : maps){
            ans.push_back(i.second);
         }

         return ans;
    }
};
