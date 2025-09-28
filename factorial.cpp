class Solution {
public:
    int factorial(int n) {
        if(n==0) return 1;
        int fact = 1;
        while(n >=1){
            fact = fact*(n--);
        }
        return fact;
    }
};
