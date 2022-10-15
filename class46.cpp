#include <iostream>
using namespace std;
class fun{
int real;
int imag;
public:
fun (int real=0 ,int imag=0){
    this->real=real;
    this->imag=imag;
}
void display (){
    cout<<real <<" " <<imag<<"i" <<endl;
}
friend fun operator+(fun r , fun n);
};
fun operator+ (fun r, fun n){
    fun k;
    k.real = r.real+n.real;
    k.imag = r.imag +n.imag;
    return k;
}
int main(){
    fun c1(10,5);
    fun c2(2,5);
    fun c3;
    c3= c2+c1;
    c3.display();
cout  <<endl;
return 0;
}