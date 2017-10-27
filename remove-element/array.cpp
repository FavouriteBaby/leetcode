#include <iostream>
#include "array.h"
using namespace std;

int main(){
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8};
    Solution solu;
    cout << solu.removeElement(A, 8, 6) << endl;

    int nLength = sizeof(A)/sizeof(int);
    cout << nLength << endl;
    for(int i = 0; i < nLength; ++i){
        cout << A[i] << endl;
    }
    return 0;
}
