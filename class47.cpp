#include <iostream>
using namespace std;
class Rectangle{
int len ;
int bre;
public:
Rectangle(int len=0,int bre=0){
    this->len =len;
    this->bre=bre;
}
 void setLen(int le){
    len =le;
 }
 void setBre(int be){
    bre = be;
 }
 int getLen(){
    return len;
 }
 int getBre(){
    return bre;
 }
 int area(){
    return len*bre;
 }
 int peri(){
    return 2*(len+bre);
 }
};
class cuboid : public Rectangle{
    int height ;
    public:
    cuboid(int lent =0, int bre=0, int heig=0){
        height=heig;
        setLen(lent);
        setBre(bre);
    }
    int setHeig(int height){
        this->height=height;
    }
    int getHei(){
    return height;
 }
    int volume(){
        return getLen()*getBre()*height;
    }
};
int main(){
cuboid c;
c.setHeig(10);
c.setLen(5);
c.setBre(3);
cout<< c.volume() <<endl;
return 0;
}