#include <iostream>
using namespace std;
class rectangle{
    public:
int le;
int be;
 int area(){
    return le*be;}

    int peri(){
        return 2*(le+be);
    }
};
int main(){
rectangle a;
rectangle *b;
b=&a;
a.le=5;
b->be=11;


cout <<a.area() <<endl;
return 0;
}