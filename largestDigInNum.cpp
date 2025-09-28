class Solution {
public:
    int largestDigit(int n) {
        if(n==0) return 0;
        int large = INT_MIN;
        while(n!=0){
            int digit = n%10;
            if(digit > large){
                large = digit;
            }
            n= n/10;
        }
        return large;
    }
};
