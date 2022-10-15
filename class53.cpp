#include <iostream>
using namespace std;
class rakesh;
class aray{
    public: int a;
    private: int b;
    protected: int c;
    friend void fun();
    friend rakesh;
};
void fun(){
    aray k;
    k.a=10;
    k.b=50;
    k.c=44;
   
}
class rakesh {
    public:
    aray l;
    void fun2(){
        l.a=10;
        l.b=20;
        l.c=30;
    }
};
int main(){

aray k;

// cout<<k.a  <<endl;
return 0;
}