#include <iostream>
using namespace std;
int main()
{
 int sum =0,value=0;

 // get inputs from the terminal, 
 //press ctrl-d on linux to indicate end of stream.
 while(cin>>value){
   sum =sum+value;
  
 }
cout<<"the sum is: "<<sum<<endl;
return 0;
}