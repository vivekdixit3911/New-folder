#include <iostream>
using namespace std;
class ru{
    public: int a;
    private: int b;
    protected: int c;
    void fun(){
        a=10;
        b=20;
        c=30;
    }
};
class Baw:public ru{
    void gun(){
       a=40;
    //  b=50;
       c=60; 
    } 
};
class Cob:public Baw{
    void nun(){
        a=70;
        // b=80;
        c=90;
    }
};
int main(){
Baw ui;
ui.a=100;
// ui.b=200;
// ui.c=300;


return 0;
}