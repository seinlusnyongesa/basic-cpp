#include <iostream>
#include <ios>
#include <iomanip>

using std::cout;  using std::endl;
using std::cin; using std::streamsize;


int main(){
    double x;
    vector<double> homework;

    //invariant: homework contains all the homework grades read so far
    while (cin>>x){
        homework.push_back(x);
    }
}