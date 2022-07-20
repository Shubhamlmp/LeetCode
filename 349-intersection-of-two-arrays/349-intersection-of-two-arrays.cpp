class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<bool>vis(1000);
        unordered_map<int,int>mymap;
        vector<int>ans;
        
        for(int i=0;i<nums1.size();i++)
            mymap[nums1[i]]++;
        
        for(int i=0;i<nums2.size();i++)
        {
            if(mymap.find(nums2[i])!=mymap.end()&&!vis[nums2[i]])
            ans.push_back(nums2[i]),vis[nums2[i]]=true;
        }
        return ans;
    }
};