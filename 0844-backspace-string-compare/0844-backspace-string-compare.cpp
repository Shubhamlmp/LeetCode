class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1;
        stack<char>st2;
        string s1 = "";
        string t1 = "";
        for(int i = 0; i < s.size(); i++){
            if(!empty(st1) && s[i] == '#'){
                st1.pop();
            } else if(empty(st1) && s[i] == '#'){
                continue;
            }
            else{
                st1.push(s[i]);
            }
        }
        for(int i = 0; i < t.size(); i++){
            if(!empty(st2) && t[i] == '#'){
                st2.pop();
            }
            else if(empty(st2) && t[i] == '#'){
                continue;
            }
            else{
                st2.push(t[i]);
            }
        }
        while(!st2.empty()){
            t1 += st2.top();
            st2.pop();
        }
        while(!st1.empty()){
            s1 += st1.top();
            st1.pop();
        }
        cout << s1 << " " << t1;
        // sort(s1.begin(),s1.end());
        // sort(t1.begin(),t1.end());
        return s1 == t1;
    }
};