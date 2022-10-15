#include <iostream>
using namespace std;
class stack{
    public:
    int size;
    int top;
    int *ptr;
    friend int declare();
};
int declare(){
    stack ne;
cin>>ne.size;
ne.ptr=new int [ne.size];
ne.size=-1;
 }
int main(){
 

cout  <<endl;
return 0;
}