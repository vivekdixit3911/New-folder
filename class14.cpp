#include <iostream>
using namespace std;
class rectangle{
    int len;
    int bre;
    public:
    rectangle(){
        len=1;
        bre=1;
    }
    rectangle(int l, int b){
            len=l;
            bre=b;
    }
    rectangle(rectangle &r){
        len =r.len;
        bre=r.bre;

    }
    void getlen(int l){
        if (l>1){
            len=l;
        }
    }
    void getbre(int b){
        bre = b;
    }
    int setlen(){
        return len;
    }
    int setbre(){
        return bre;
    }
    int size (){
        return setlen()*setbre();
    }
    int peri(){
        return 2*(setlen()+setbre());
    }
    
};
class cuboid: public rectangle
{
    int height;
    public: 
    cuboid(){
        height=1;
    }
    cuboid(int c){
        height=c;
    }
    void getheight(int h){
        height=h;
    }
    int setheight(){
        return height;
    }
    int box(){
       return setlen()*setbre()*height;
    }

};

int main(){
rectangle b;
cuboid c;
c.getheight(5);
c.getbre(5);
c.getlen(4);

cout <<c.box() <<endl<<b.peri() <<endl;
return 0;
}