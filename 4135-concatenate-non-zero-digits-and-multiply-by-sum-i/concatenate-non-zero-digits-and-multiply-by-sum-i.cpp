class Solution {
public:
    long long sumAndMultiply(int n) {
        
       long long sum=0;
     long long num =0;
        int p=0;
       while(n!=0){
        int s = n%10;
        if(s!=0){
        sum = sum + s;
        num = num + s*(pow(10,p));
        p++;
        }
        n= n/10;
       } 
       return num*sum;
    }
};