class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> hashmap;
        vector<vector<string>> output;

        for (auto element : strs){
            string temp = element;
            sort(element.begin(), element.end());
            hashmap[element].push_back(temp);
        }
        for (auto s : hashmap){
            output.push_back(s.second);
        }
        return output;
    }
};
