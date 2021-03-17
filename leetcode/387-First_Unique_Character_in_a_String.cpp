class Solution {
public:
    int firstUniqChar(string s) {
        int found = -1;
        int letter[26] = {0};
        for (char c : s){
            letter[c-'a']++;
        }
        for (char& c : s){
            if (letter[c-'a'] == 1){
                found = (&c - &s[0]);
                break;
            }
        }
        return found;

    }
};
