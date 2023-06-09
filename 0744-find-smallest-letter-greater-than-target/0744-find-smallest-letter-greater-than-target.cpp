class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        set<char>st;
        for(auto x : letters){
            st.insert(x);
        }
        letters.clear();
        for(auto x : st){
            letters.push_back(x);
        }
        char result = letters[0];
            cout << "hi";
        
        auto res = find(letters.begin(), letters.end(), target);
        if(res != letters.end()){
            int index = res - letters.begin();
            if(index < letters.size()-1){
                result = letters[index+1];
            }
            
        }
        else{
            for(auto x : letters){
                if(x > target){
                    result = x;
                    break;
                }
            }
        }
        
        return result;
    }
};