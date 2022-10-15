#include <iostream>
using namespace std;
void fun(int);
void fun2(int n ){
    if (n>0){
        cout<<n <<"\t";
        fun(n/2);
    }
}
void fun (int n){
    if (n>0){
        cout<<n<<"\t";
        fun2(n-1);
    }
}
int main(){
fun (20);
cout  <<endl;
return 0;
}