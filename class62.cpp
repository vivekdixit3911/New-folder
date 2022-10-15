#include <iostream>
using namespace std;
template <class t>
t gretater (t x, t y){
    return x>y?y:x;
}
int main(){



cout <<gretater(10,15) <<endl;
cout <<gretater(10.5,15.9) <<endl;
return 0;
} 