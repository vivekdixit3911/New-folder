#include <iostream>
using namespace std;
class multi{
    private:
    int one;
    int two;
    public:
    multi(int one=1,int two=1 ){
        multi::one =one;
        multi::two=two;
    }
    int Diy(){
        cout<<one<<" i"<<two <<endl;
    }
    friend multi operator *(multi &c,multi &d);
   
};
multi operator*(multi &c,multi &d)
{
multi r;
r.one=c.one+d.one;
r.two=d.two+c.two;
}

int main(){
multi a1(2,3),a2(4,5),a3;
a3=a1*a2;
a3.Diy();

return 0;
}