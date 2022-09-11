#include <iostream>
using namespace std;
int main(){

    int *a[3];
    a[0]=new int[3];
    a[1]=new int [3];
    a[2]= new int [3];
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"enter the element oof " <<i<<" row " <<j << " column"<<endl;
           cin>> a[i][j];
        }
    }
 cout<<"showing the value that is in heap"<<endl;
  for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<< a[i][j]+1<<"\t";
        }
        cout<<endl;
    }

cout  <<endl;
return 0;
}