class Solution {
public:
    int titleToNumber(string columnTitle) {
        int col_num=0;
        int str_len = columnTitle.size();
        for (int i=str_len-1; i>=0; i--){
            col_num += ((int) columnTitle[i] - 64)* pow(26, str_len-1-i);
        }
        return col_num;
    }
};
