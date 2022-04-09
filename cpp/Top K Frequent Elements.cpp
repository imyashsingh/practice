//https://leetcode.com/problems/top-k-frequent-elements/
// Top K Frequent Elements


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int &i : nums)
            freq[i]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(auto i=freq.begin();i!=freq.end();i++){
            pq.push({i->second,i->first});
            if(pq.size()>k)
                pq.pop();
        }
        vector<int> ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;        
    }
};
