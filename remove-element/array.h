class Solution{
public:
    int removeElement(int A[], int n, int elem){
        if(n == 0) return n;
        int i = 0;
        int j = 0;
        for(i = 0; i < n; ++i){
            if(A[i] == elem){
                continue;
            }
            A[j] = A[i];
            j++;
        }
        return j;
    }
};
