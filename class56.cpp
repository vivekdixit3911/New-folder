#include <iostream>
using namespace std;
int division(int a , int b){
    if (b==0)
    throw 101;
    return a/b;
}
int main(){
int a=10, b=2,c;
try {
    c= division (a ,b);
    cout<<c;
}
catch (int e){
    cout<< "u ca't divide by 0 " <<endl;
}
cout<<" bye ";
cout  <<endl;
return 0;
}