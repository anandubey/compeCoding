class Solution {
public:
    string get_common(string s1, string s2){
        string comm="";
        for (int i=0; i<s1.size() && i<s2.size(); i++){
            if (s1[i] == s2[i])
                comm += s1[i];
            else
                break;
        }
        return comm;
    }
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0)
            return "";
        // for (int i=0; i<strs.size()-1; i++){
        //     if (strs[i][0] != strs[i+1][0])
        //         return "";
        // }
        // string comm_pre=strs[0];
        // for (int i=1; i<strs.size(); i++){
        //     comm_pre = get_common(strs[i], comm_pre);
        // }
        sort(strs.begin(), strs.end());
        string comm="";
        comm = get_common(strs[0], strs[strs.size()-1]);
        return comm;
    }
};
