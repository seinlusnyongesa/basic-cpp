// a program to generate product of numbers in the range(1,10)

#include <iostream>

using std::cout;
using std::endl;

int main(){
    int product=1;
    for(int i=1 ;i<10;++i){

product *=i;

    }
    cout<<product<<endl;
    return 0;
}