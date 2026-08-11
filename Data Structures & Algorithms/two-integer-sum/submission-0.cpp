class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {

            int store = target - nums[i];

            if (mp.find(store) != mp.end()) {
                return {mp[store], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};     

