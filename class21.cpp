#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream run("cha.txt");
    string a;
    int b;
    string v;
    run>>a>>b>>v;
run.close();
    cout<<a<<" "<<b<<" "<<v;

return 0;
} 