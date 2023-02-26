class Solution {
public:
    bool isValidSerialization(string preorder) {
        vector<string>tokens;
        stringstream check(preorder);
        string temp;
        while(getline(check, temp, ',')){
            tokens.push_back(temp);
        }
        int v = 1;
        for(auto x : tokens){
            v--;
            if(v < 0) return false;
            if(x != "#") v += 2;
            
        }
        return v == 0;
    }
};