#include <iostream>
using namespace std;
int main(){
   int i;
int *A=new int[5];
A[5]=1;A[4]=3;A[3]=8;A[2]=6;A[2]=7;A[1]=9;A[0]=6;

for(i=0;i<5;i++){
    cout<<A[i]<<"\t";
}
cout<<endl;
int *b= new int[10];

for (i=0;i<10;i++){
    b[i]=A[i];
}
delete[]A;

A=b;
// delete[]b;
b=NULL;

for(i=0;i<5;i++){
    cout<<A[i]<<"\t";
}
cout  <<endl;
return 0;
}