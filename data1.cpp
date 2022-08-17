#include <iostream>
using namespace std;

struct traingle {
    int leng;
    int bre;
};
int main(){
struct traingle *p;
p= new traingle;
p->leng=55;

cout <<p->leng <<endl;
return 0;
}