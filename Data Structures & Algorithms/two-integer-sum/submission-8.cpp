class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> map;   // hashmap to store seen and the index
        vector<int> final;              // final output array

        for (int i = 0; i < nums.size(); i++){  // iterate through the entire array
            int complement = target - nums[i];
            auto it = map.find(complement);
            if (it != map.end()){
                final.push_back(it->second);
                final.push_back(i);
            }
            else{
                map[nums[i]] = i;
            }
        }
        return final;
    }
};
