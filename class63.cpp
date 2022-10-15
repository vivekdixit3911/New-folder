#include <iostream>
using namespace std;
template <class t>    //can also be done as templare <class a, class b) this both class can have different types
class add{
t a;
t b;
public:
add(t a, t b);
t addit();
t multi();
};
template <class t>
 add<t> ::add(t a, t b){
    this->a=a;
    this->b=b;
}
template <class t>
t add <t> ::addit(){
    t c;
   return c=a+b;
}
template < class t>
t add <t> :: multi(){
    t k ;
    return k= a*b;
}
int main(){
add<int> k(5,6);
add<int> j('a', 'b');
cout  <<j.multi();
return 0;
}