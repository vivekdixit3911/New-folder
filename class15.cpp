#include <iostream>
using namespace std;

int great(int a, int b, int c,int d){
    if (a>b&&a>c&&a>d){
        return a;
    }
    else if(b>c&&b>d){
        return b;
    }
    else if(c>d){
        return c;
    }
    else {
        return d;
    }
}

int main(){

//great(2,3,4,5);

cout <<great(66,7,4,5)<<endl;
return 0;
}