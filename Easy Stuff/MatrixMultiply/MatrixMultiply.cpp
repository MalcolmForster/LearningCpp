#include <iostream>
#include <cstring>

using namespace std;

int main() {

    int i = 0;
    int matrix_width = 0;
       
    std::string user_Input ="";
    std::cout << "Enter matrix A, seperate numbers by spaces, and press return to enter new line. Enter 'done' on a new line when finished" << std::endl;

    while (user_Input != "done"){
        std::cout  << "Line " << i << ": ";
        std::cin >> user_Input;
        while(strchar(' ',user_Input)){
            strchr(' ',user_Input)
            
        }
        i += 1;
    }
    



    //std::cout << "You typed in " << user_Input <<std::endl;
    //std::cout << "Enter matrix B, seperate numbers by spaces, and press return to enter new line. Enter 'done' on a new line when finished"


    return 0;

}