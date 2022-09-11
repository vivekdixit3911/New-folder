#include <iostream>
using namespace std;

class car{
    public:
   virtual  void start()=0;
};
class innova : public car{
    public:
   void start(){
        cout<<"the innova car started"<<endl;
    }
};
class swift : public car{
    public:
   void start(){
        cout<<"the swift car started"<<endl;
    }
};

int main(){
innova d;
car *ptr= new innova;
ptr->start();
ptr =new swift;
ptr->start();


cout <<endl;
return 0;
}