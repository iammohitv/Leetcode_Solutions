class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        int s_size = strs.size();
        if(s_size==1){
            return {{strs[0]}};
        }
        map<string,vector<string>> mv;
        for(int i=0;i<s_size;i++){
            string base = strs[i];
            sort(strs[i].begin(),strs[i].end());
            mv[strs[i]].push_back(base);
        }
        for(auto it = mv.begin();it!=mv.end();it++){

            ans.push_back(it->second);

        }
        return ans;
    }
};