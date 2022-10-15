#include <iostream>
using namespace std;
class rectangle{
    public:
   void fun1(){
        cout<<"this is rectangle"<<endl;
    }
};
class cube:public rectangle{
    public:
   void fun1(){
        cout<<"this is cube"<<endl;
    }
};
int main(){
rectangle b;
b.fun1();
cube c;
c.fun1();

cout  <<endl;
return 0;
}