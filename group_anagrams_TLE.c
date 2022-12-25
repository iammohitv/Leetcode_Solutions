// Group Anagrams
// Author Mohit
class Solution {
public:
    map<char,int> findMap(string str){
        map<char,int> s1;
        for(int i=0;i<str.size();i++){
            s1[str[i]]++;
        }
        return s1;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        int s_size = strs.size();
        for(int i=0;i<s_size;i++){
            int flag=0;
            if(ans.size()==0){
                vector<string> base;
                base.push_back(strs[i]);
                ans.push_back(base);
            }
            else{
                for(int j=0;j<ans.size();j++){
                    if(findMap(strs[i])==findMap(ans[j][0])){
                        ans[j].push_back(strs[i]);
                        flag=1;
                    }
                }
                if(flag==0){
                    vector<string> base;
                    base.push_back(strs[i]);
                    ans.push_back(base);
                }
            }
        }
        return ans;
    }
};