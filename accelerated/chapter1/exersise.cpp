#include <iostream>
#include <string>

// int main(){
// const std::string hello = "Hello";
// const std::string message = hello+", world"+"!";
// std::cout<< message <<std::endl;

// const std::string exclam = "!";
// const std::string message = "Hello" + ", world"+exclam;
// std::cout <<message<<std::endl;

// { const std::string s = "a string";
// std::cout << s << std::endl; }
// { const std::string s = "another string";
// std::cout << s << std::endl; }

// {const std::string s="a string";
// {const std::string s = "another string";
// std::cout <<s<<std::endl;
// };}

// return 0;
// }

// int main(){
//     {std::string s= "a string";
//     {std::string x = s+", really";
//     std::cout<<x<<std::endl;}
//     std::cout<<s<<std::endl;}
//     return 0;
// }

int main(){
    std::cout<< "What is your name?";
    std::string name;

    std::cin >> name;
    std::cout<<"Hello, "<<name
        <<std::endl<<"And what is yours?";
    std::cin >>name;
    std::cout <<"hello, "<<name
        <<"; nice to meet you too!"<<std::endl;
        
    return 0;
}