class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int>mp;
        vector<int>newmap;

        for(int i:nums){
            mp[i]++;
        }

        for(auto k :mp){
            if(k.second>nums.size()/3){
                newmap.push_back(k.first);
            }
        }
        return newmap;
        
    }
};