#include <iostream>
using namespace std;
class car{
    public:
 virtual void start()=0;        //pure virtual function the aare ment to be overriding!

virtual void stop()=0;           //this class is known as absttract class;           
};
class innova:public car{
    public:
  void start(){ 
    cout<<"the innova started"<<endl;
}
void stop(){
    cout<<"the innova stoped"<<endl;
}
};
class creta:public car{
    public:
  void start(){ 
    cout<<"the creta started"<<endl;
}
void stop(){
    cout<<"the creta stoped"<<endl;
}
};
int main(){
car *ptr = new innova();
ptr->start();
ptr= new creta();
ptr->stop();

cout  <<endl;
return 0;
}