#include <iostream>

// a program to request two numbers from the user and print the sum
int main(){
    int x,y;
    std::cout<< "Please enter two numbers "<<std::endl;
    std::cin>>x>>y;
    std::cout<< "the value of x is: "<< x<<std::endl;
    std::cout<<"the value of y is: "<<y<<std::endl;
    std::cout<<"when we add x and y we get: "<< x+y<<std::endl;
    return 0;
}