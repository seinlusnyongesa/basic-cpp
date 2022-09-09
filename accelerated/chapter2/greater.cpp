// a progam that takes 2 numbers and tells the user which is greater

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    cout << "Enter a number  ";

    //the first number
    int num1;
    cin >> num1;

    // print and empty space
    cout<<endl;

    cout<<"Enter another number ";

    //the second number
    int num2;
    cin>>num2;

    //print an empty space
    cout<<endl;

    //compare these numbers
    if(num1>num2){
        cout<<"the first number is greater than the second number"<<endl;
    }else{
        cout<<"the second number is greater than the firs number"<<endl;
    }

}