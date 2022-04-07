//https://leetcode.com/problems/last-stone-weight/
// Last Stone Weight

    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(),stones.end());
        while(pq.size()>1){
            int s1,s2;
            s1=pq.top();
            pq.pop();
            s2=pq.top();
            pq.pop();
            pq.push(s1-s2);
        }
        return pq.top();
    }
