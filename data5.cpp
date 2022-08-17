#include <iostream>
using namespace std;
class rect{
    private:
    int leng;
    int bre;
    public:
    int setLeng(int l ){
        if(l>=0){
            leng=l;
        }
        else{
            cout<<"due to, you used zero as value i'm setting it to zero"<<endl;
            leng=0;
        }
    }
     int setBre(int b ){
         if(b>=0){
            bre=b;
         }
         else{
            cout<<"due to, you used zero as value i'm setting it to zero"<<endl;
            bre=0;
         }
    }
    int getL(){
        return leng;
    }
    int getb(){
        return bre;
    }
    int area(){
        return leng*bre;
    }
    int peri(){
        return 2*(leng+bre);
    }
};
int main(){
rect *p;
p=new rect;
p->setLeng(10);
p->setBre(5);


cout<<"length is \t" <<p->getL() <<endl;
cout<<"breadth is \t" <<p->getb() <<endl;
cout<<"Area is \t" <<p->area() <<endl;
cout<<"periferi is \t" <<p->peri() <<endl;
return 0;
}