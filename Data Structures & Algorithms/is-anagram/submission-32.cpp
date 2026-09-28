class Solution {
public:
    bool isAnagram(string s, string t) {
        std::vector<char> seen = {};
        // check size to know if anagram is valid
        if (s.size() == t.size()){
            for (int i = 0; i < s.size(); i++){
                seen.push_back(s[i]);
            }
            for (int j = 0; j < t.size(); j++){
                for (auto temp = seen.begin(); temp != seen.end(); temp++){
                    if (*temp == t[j]){
                        seen.erase(temp);
                        break;
                    }
                }
            }
            if (seen.size() == 0){
                return true;
            }
            else{
                return false;
            }
        }
        // return false if anagram isn't possible
        else {
            return false;
        }
    }
};
