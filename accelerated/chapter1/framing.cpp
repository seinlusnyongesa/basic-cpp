//ask for person's name and generated a framed greeting

#include <iostream>
#include <string>

int main(){
    std::cout <<"please enter your first name: ";
    std::string name;
    std::cin >>name;

    // build the message that we intend to write
    const std::string greeting = "Hello, "+name+"!";

    // build the second and fourth lines of the output
    const std::string spaces(greeting.size(), ' ');
    const std::string second = "* "+spaces+" *";

    // build the first and fifth lines of the output
    const std::string first(second.length(),'*');

    // wirte it all
    std::cout << std::endl;
    std::cout<<first<<std::endl;
    std::cout<<second<<std::endl;
    std::cout<<"* "<<greeting<<" *"<<std::endl;
    std::cout<<second<<std::endl;
    std::cout<<first<<std::endl;

    return 0;
}