#include <iostream>
using namespace std;
class rrr{
    string studentname ;
    // int Class;
    int rollnumber;
    public:
    static int count;
    void fun(string n){
        count++;
        studentname=n;
        rollnumber=count;
    }
    void dixplay(){
        cout<<"name is- "<<studentname<<"\t , " <<"roll number is "<<rollnumber<<"\t"<<endl; 
    }
    static int get(){
       return count;
    }
};
int rrr:: count=0;

int main(){
rrr b,a;
a.fun("raj ram");
b.fun ("kanhiya laal");
b.dixplay();
a.dixplay();
cout<<rrr::get() <<endl;
return 0;
}