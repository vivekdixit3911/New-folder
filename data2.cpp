#include <iostream>
using namespace std;
int swap(int &x, int &y){
        int z;
        z=x;
        x=y;
        x=z;
}

int main(){
int a=5 ,b=6;
swap(a,b);
cout<<a<<endl<<b<<endl;
return 0;
}