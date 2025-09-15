#include "greeting_utils.h"
#include <iostream>


using namespace std;

namespace GreetingUtils{
    std::string create_message(const std::string& name){
        return "Hello, " + name + "!";
    }
    char* format_as_c_string(const std::string& msg){
        char* array = new char[msg.length()+1];
        for(int i = 0; i < msg.length(); i++){
            array[i] = msg[i];
        }
        array[msg.length()] = '\0';
        return array;
    }
}