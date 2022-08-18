#include <iostream>
using namespace std;


class addd{
    public:
    int real ;
    int img;
 addd operator+(addd c){
    addd num;
    num.real=real-c.real;
    num.img=img-c.img;
    return num;
 }
};

int main(){
addd c1,c2,c3;
c1.real=5; 
c1.img=1;c2.real=2;

c2.img=3;c3=c2+c1;



cout <<c3.real <<" "<<c3.img<<"i" <<endl;
return 0;
}