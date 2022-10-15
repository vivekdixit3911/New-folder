#include <iostream>
#include <set>
using namespace std;
int main(){
set <int > v={22,5,6,7,8,9,22,5};
// v.push_back(30);
// v.push_back(0);

for (auto x: v){
    cout<<x<<"\t";
}

cout  <<endl;
return 0;
}