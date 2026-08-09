class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        int id = m+n-1,i=m-1,j=n-1;
        while(i>=0&&j>=0){
            if(a[i]>=b[j]){
                a[id--]=a[i--];
            }else{
                a[id--]=b[j--];
            }
            }
            while(j>=0){
                a[id--]=b[j--];
            }
        }
    
};