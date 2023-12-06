class Solution {
public:

    int totalMoney(int n) {
        int x = n/7, y = n%7, ans = 0, i = 0;
        
        while(i<x){
            ans += i*7 + 28;
            i++;
        }

        int k = 1;
        while(y--){
            ans += i + k++;
        }

        return ans;
    }
};