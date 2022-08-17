#include <iostream>
using namespace std;
class rectangle{
    private:
    int length;
    int bredth;
    public:

    int setLen(int l){
        if (l>0)
        length=l;
        else
        {
            cout<<"naay";
            length=0;
        }
    }
    int setBre(int b){
        if(b>0){
            bredth=b;
        }
        else {
            bredth=0;
        }
    }
    int getLength(){
        return length;
    }
    int getbredth(){
        return bredth;
    }
    int peri(){
        return length*bredth;
    }
    int area(){
        return 2*(length+bredth);
    }
    rectangle(){
        length=1;
        bredth=1;
    }
    
    rectangle (int length=00,int bredth=0){
            setLen(length);
            setBre(bredth);
}
rectangle(rectangle &r){
    length=r.length;
    bredth=r.bredth;
}
};

int main(){
// rectangle one;
// one.setLen(10);
// one.setBre(20);
// rectangle *wo=new rectangle;
// wo->setBre(50);
// wo->setLen(5);
rectangle one(5,6);

cout <<one.peri()<<endl;
return 0;
}