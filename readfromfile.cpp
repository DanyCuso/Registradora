#include <iostream>
#include <fstream>
#include <string>

int main(){


    std::ifstream myfile; myfile.open("list2.txt"); //Reading from file
    std::string myline; //Store variable to mystring

    if (myfile.is_open()){ //Check wheter flieis open

        char mychar;
        while(myfile){
        
        std::getline(myfile, myline); //formatting the string
        std::cout << myline << std::endl;
        }

    }


}