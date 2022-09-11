#include <iostream>
using namespace std;

class fri{
    int x;
    int y;
    public:
    fri(int x=0,int y=0){
        fri::x=x;
        fri::y =y;
    }
    void Display(){
        cout<<x <<" i"<<y;
    }
friend fri operator+(fri c,fri d);
};
   fri operator+(fri c,fri d){
    fri j;
    j.x=c.x+d.x;
    j.y=c.y+d.y;
    return j;
    }
int main(){

fri q(5,6),r(1,2),hj;

hj=q+r;
hj.Display();
cout  <<endl;
return 0;
}