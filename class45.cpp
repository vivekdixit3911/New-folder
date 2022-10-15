#include <iostream>
using namespace std;
class imagi{
    public:
int real;
int imag;
//  public:
//  imagi(){
//     real=0;
//     imag=0;
//  }
//  imagi(int r, int i){
//     real = r;
//     imag= i;
//  }
 imagi operator+(imagi ar){
    imagi adwd;
    adwd.real= real + ar.real;
    adwd.imag= imag + ar.imag;
    return adwd;
 }
};
int main(){
imagi c1,c2,c3;
// imagi c3(0,0);
c1.real=5;
c1.imag=4;
c2.real=15;
c2.imag=40;
c3 = c1+c2;
cout <<c3.real<<" "<<c3.imag <<"i"<<endl;
return 0;
}  