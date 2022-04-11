// https://leetcode.com/problems/baseball-game/
// Baseball Game

class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        for(string s : ops){
            if(s=="C")
                st.pop();
            else if(s=="D")
                st.push(st.top()*2);
            else if(s=="+"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.push(a);
                st.push(a+b);
            }
            else{
                int a=stoi(s);
                st.push(a);
            }
        }
        int ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};
