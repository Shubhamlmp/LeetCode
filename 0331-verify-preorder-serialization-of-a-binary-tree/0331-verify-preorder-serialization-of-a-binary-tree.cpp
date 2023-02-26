class Solution {
public:
    bool isValidSerialization(string preorder) {
        stringstream check(preorder);
        string temp;
        int v = 1;
        while(getline(check, temp, ',')){
            v--;
            if(v < 0) return false;
            if(temp != "#") v += 2;
        }
        return v == 0;
    }
};