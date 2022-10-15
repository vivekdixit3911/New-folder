#include <iostream>
using namespace std;
void fun (int n)
{
    if (n>0){
        // cout<<n<<endl;
        cout<<n<<endl;
        fun(n-1);
        fun(n-1);
    }
}

int main(){
int n=3;
fun(n);
// cout<<fun(n) <<endl;
return 0;
}