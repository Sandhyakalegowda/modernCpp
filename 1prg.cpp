#include <iostream>
using namespace std;

class count{
public:
count(){
static int i = -1;
cout<<++i <<endl;
}


};
int main(){
count c[100];
}
