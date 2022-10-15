#include <iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"default of base"<<endl;
    }
    base(int a){
        cout<<"param of base "<<a<<endl;
    }
};
class inher : public base{
    public:
    inher(){
        cout<<"default of inher"<<endl;
    }
    inher(int a){
        cout<< "param of inher "<<a<<endl;
    }
    inher(int x,int y):base(x){
        cout<<"the param of inher "<<y<<endl;
    }
};
int main(){
 inher d;
 inher(10,5);


cout  <<endl;
return 0;
}