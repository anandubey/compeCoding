class Solution {
public:
    int gcd(int a, int b){
        if (a==0)
            return b;
        return gcd(b%a, a);
    }

    bool hasGroupsSizeX(vector<int>& deck) {
        map<int, int> occ;
        for (int i=0; i< deck.size(); i++){
            occ[deck[i]]++;
        }
        int gcd_res=occ[deck[0]];
        for (auto const& [key, val] : occ){
            gcd_res = gcd(val, gcd_res);
            if (gcd_res == 1)
                return false;
        }
        return true;


//         for (auto const& [key, val] : occ){
//             if (val % min_div != 0){
//                 return false;
//             }
//         }
//         cout  << min_div;
//         return true;

    }
};
