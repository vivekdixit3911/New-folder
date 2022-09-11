#include <iostream>
using namespace std;
class rewi{
    public:
    void fun(){
        cout<< "this is rewi";
    }
};
class ram:  public rewi{
    public:
    void fun(){
        cout<<"this is from ram";
    }
};


int main(){

ram d;
rewi *ptr =&d;
ptr->fun();

return 0;
}