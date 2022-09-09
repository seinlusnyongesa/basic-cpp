#include <iostream>

int main(){

    // sum numbers from 1 to 10

    /*int sum,val =1;
    while (val<=10)
    {
      sum +=val;
      ++val;
    }
    std::cout<<" the sum of 1 to 10 inclusive is: "
    << sum <<std::endl;
    return 0;*/


    //sum numbers from 50 to 100

/*int total, value=50;
while (value<=100)
{
   total +=value;
   ++value;
}

std::cout<< " the sum of 50 to 100 inclusive is: "
<<total<<std::endl;
return 0;
*/

//print a number from 10 down to 0

   /* int number=10;
    while(number>=0){
        std::cout<<" the number is: "
        << number<<std::endl;
        --number;
    }
*/

// input two numbers and print the range
int num1,num2;
std::cout<<"please input a number";
std::cin>>num1;
std::cout << "input another number greater than the first number";
std::cin>>num2;

while(num1<num2){
    num1++;
    std::cout<<num1<<std::endl;
}

return 0;

}