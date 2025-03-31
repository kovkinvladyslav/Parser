#include <iostream>
#include <fstream>


int main(int argc, char** argv){

    if(argc != 2){
        std::cerr << "Compilation error: Path of file is required!";
        return 1;
    }

    std::string Test = argv[1];


}