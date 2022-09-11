#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N,i;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    for (int j=N;j>=0;j--){
        cout<<A[j]<<" ";
    }
    return 0;
}