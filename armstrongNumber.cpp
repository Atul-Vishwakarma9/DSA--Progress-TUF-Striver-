class Solution {
public:
    bool isArmstrong(int n) {
        int original = n;
        int count = 0;
        int temp = n;
        while(temp!=0){
            count++;
            temp/=10;
        }
        int sum = 0;;
        temp = n;
        while(temp!= 0){
            sum = sum + pow(temp%10, count);
            temp/=10;
        }
        return (sum == original);
    }
};
