#include <iostream>
using namespace std;
class base{
   public:
virtual void fun3(){
    cout<<"the fun of base"<<endl;
 }
};
class rest :public base{
   public:
   void fun3(){
      cout<<"the fun of rest";
   }
};
int main(){
rest b;
base *ptr =&b;
ptr->fun3();
base j;
j.fun3();
cout  <<endl;
return 0;
}