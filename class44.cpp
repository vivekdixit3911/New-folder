#include <iostream>
using namespace std;
 class car {
int len;
int bre;
public:
car();
car(int l,int b);
car (car &r);
void setLen(int le);
void seBre(int br);
int getle(){return len;}
int getbr(){return bre;}
int area(){return (len*bre);};
int peri(){return 2*(len*bre);};
bool issquare(){return len==bre;}
~car();
 };
int main(){
car r1(10,10);
// r1.setLen(10);
// r1.seBre(20);
cout<<r1.area()<<" "<<endl;
if (r1.issquare()){
    cout<<"yes it's square too"<<endl;
}
return 0;
}
car::car(){
    len=1;
    bre=1;
}
 car::car(int l,int b){
   len=l;
    bre=b;
}
car::car(car &r){
   len= r.len;
   bre= r.bre;
}
void car:: setLen(int le){
    le=len;
}
void car:: seBre(int br){
    bre=br;
}
car ::~car(){
     cout<<"car ud gyi";
}
