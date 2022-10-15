#include <iostream>
using namespace std;
int main(){
int a=10,b=10,c;
 try{
 if (a==10)
    throw 101;
    c= a+b;
    cout<<c<<endl;
 }
  catch(int e){
    cout<<"there is error "<< e<<endl;
 }
 cout<<"bye ";   //it will always dispay!
return 0;
}