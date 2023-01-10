#include<bits/stdc++.h>
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mv;
        int x = nums.size();
        for(int i=0;i<x;i++){
            mv[nums[i]]++;
        }
        vector<pair<int,int>> v;
        copy(mv.begin(),mv.end(),back_inserter<vector<pair<int,int>>>(v));
        sort(v.begin(),v.end(),[](pair<int,int> &a,pair<int,int> &b){
            if(a.second != b.second)
                return a.second > b.second;
            return a.first < b.first;
            });

        vector <int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};