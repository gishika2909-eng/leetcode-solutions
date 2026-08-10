class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>seen;
        while(n!=0&&seen.find(n)==seen.end()){
            seen.insert(n);
            int sum=0;
             int p =n;
            while(p!=0){
        int r = p %10;
         sum = sum+r*r;
         p=p/10;
        }
        n=sum;
    }
    return n==1;
    }
};