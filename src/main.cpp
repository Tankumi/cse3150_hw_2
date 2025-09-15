#include <iostream>
#include "greeting_utils.h"

using std::cout, std::cin, std::endl;

int main(){
    cout << "Enter your name: " << endl;
    std::string name;
    getline(cin, name);
    std::string greeting = GreetingUtils::create_message(name);
    char* cstr = GreetingUtils::format_as_c_string(greeting);
    cout << cstr << endl;
    delete[] cstr;
}