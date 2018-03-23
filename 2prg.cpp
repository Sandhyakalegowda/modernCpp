#include <iostream>
using namespace std;
static int i =-1;
class count{
public:
count(){
cout<<++i <<endl;
}
~count(){
cout << i*i<<endl;
--i;

}
};
int main(){
count c[19];
}
