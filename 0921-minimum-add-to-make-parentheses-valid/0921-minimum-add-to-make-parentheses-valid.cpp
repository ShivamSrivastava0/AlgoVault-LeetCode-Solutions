class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>t;
        for(int i=0;i<s.length();i++){
            if(t.empty()){
                t.push(s[i]);
            }
            else if(t.top()=='(' && s[i]==')'){
                    t.pop();
            }
            // else if(t.top()==")" && s[i]=="("){t.pop();}
            else{
                t.push(s[i]);
            }
        }
        return t.size();
    }
};