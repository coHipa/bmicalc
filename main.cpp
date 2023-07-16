#include <cmath>
#include <iostream>
#include <fstream>

#include "header.h"

void clearConsole() {
    #if defined _WIN32
        system("cls");
    #elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
        system("clear");
    #elif defined (__APPLE__)
        system("clear");
    #endif 
}

void saveResult(double result){
    std::ofstream saveFile;
    saveFile.open("savefile.txt", std::ios_base::app);
    saveFile << result << '\n';
    saveFile.close();
}

std::pair<char, int> enterGenderAge() {
    char userGender = 'm';
    int userAge {};

    std::cout << "Enter your gender (m/w): ";
    std::cin >> userGender;
    userGender = std::tolower(userGender);

    std::cout << "Enter your age: ";
    std::cin >> userAge;

    return std::make_pair(userGender, userAge);
}

int main() {

    std::cout << "Your BMI calculator\n"; 
    bool programActive = true;

    do {
        std::cout << "1. calculate BMI in metric system\n";
        std::cout << "2. calcutlate BMI in imperial system\n";
        std::cout << "3. show last calculations\n"; 
        std::cout << "0. Exit\n";

        short userMenu = {};
        std::cin >> userMenu;

        double userWeight {};
        double userHeight {};
        
        switch(userMenu) {
            case 1: {
                clearConsole();

                std::cout << "Enter your weight in kgs: ";
                std::cin >> userWeight;
                
                std::cout << "Enter your height in cm: ";
                std::cin >> userHeight; 

                std::pair<char, int> userInput = enterGenderAge();
                char userGender = userInput.first;
                int userAge = userInput.second;

                try {
                    if(userHeight > 0) {
                        double bmiResult = userWeight / pow((userHeight / 100), 2);

                        std::cout.precision(2);
                        std::cout << "Your BMI is: " << bmiResult << '\n';
                        rating(bmiResult, userAge, userGender);

                        saveResult(bmiResult);
                    }
                    else throw "You must be taller than 0 centimeters.\n\n";
                }
                catch(const char* msg) {
                    std::cerr << msg;
                }

                break;
            }
            case 2: {
                clearConsole();

                std::cout << "Enter your weight in lbs: ";
                std::cin >> userWeight;
                
                std::cout << "Enter your height in in: ";
                std::cin >> userHeight;  

                std::pair<char, int> userInput = enterGenderAge();
                char userGender = userInput.first;
                int userAge = userInput.second;

                try {
                    if(userHeight > 0) {
                        double bmiResult = 703 * (userWeight / pow(userHeight, 2));

                        std::cout.precision(2);
                        std::cout << "Your BMI is: " << bmiResult << '\n';
                        rating(bmiResult, userAge, userGender);

                        saveResult(bmiResult);
                    }
                    else throw "You must be taller than 0 inches.\n\n";      
                }
                catch(const char* msg) {
                    std::cerr << msg;
                }

                break;
            }
            case 3: {
                clearConsole();
                std::string line;
                std::ifstream saveFile("savefile.txt");
                if(saveFile.is_open()){
                    while(getline(saveFile,line)){
                        std::cout << line << '\n';
                        saveFile.close();
                    }
                }
                else std::cout << "Unable to open File";

                break;
            }
            case 0: {
                programActive = false;
                break;
            }
            default: {
                clearConsole();
                std::cout << "Invalid input!\n";
                break;
            }
        }  
    }while(programActive);
    return 0;
}