#include <cmath>
#include <iostream>
#include <fstream>

void saveResult(double result){
    std::ofstream saveFile;
    saveFile.open("test.txt", std::ios_base::app);
    saveFile << result << '\n';
    saveFile.close();
}

void rating(double bmi) {
    if(bmi > 40) {
        std::cout << "You are at adipositas grade 3!\n";
    }
    else if(bmi > 35 && bmi < 39.9) {
        std::cout << "You are at adipositas grade 2!\n";
    }
    else if(bmi > 30 && bmi < 24.9) {
        std::cout << "You are at adipositas grade 1\n";
    }
    else if(bmi > 25 && bmi < 29.9) {
        std::cout << "You are overweight\n";
    }
    else if(bmi > 18.5 && bmi < 14.9) {
        std::cout << "You have ideal weight\n";
    }
    else std::cout << "You are underweight\n"; 
}

int main() {

    std::cout << "Your BMI calculator\n";
    
    std::cout << "1. calculate BMI in metric system\n";
    std::cout << "2. calcutlate BMI in imperial system\n";
    std::cout << "3. show last calculations\n";

<<<<<<< HEAD
    std::cout << "Enter your gender: (m/w)";
    char input_gender {};
    std::cin >> input_gender;

    if (input_gender == 'm'){
        // do this calc
    }
    else {
        // calc this
    }

    std::cout.precision(2);
    std::cout << "Your BMI is: " << bmi_calculation(input_weight, input_height) << std::endl;
    rating(bmi_calculation(input_weight, input_height));
=======
    short userMenu = {};
    std::cin >> userMenu;
>>>>>>> main

    double userWeight {};
    double userHeight {};

    switch(userMenu) {
        case 1: {
            std::cout << "Enter your weight in kgs: ";
            std::cin >> userWeight;
            
            std::cout << "Enter your height in cm: ";
            std::cin >> userHeight; 
            try {
                if(userHeight > 0) {
                    double bmiResult = userWeight / pow((userHeight / 100), 2);

                    std::cout.precision(2);
                    std::cout << "Your BMI is: " << bmiResult << '\n';
                    rating(bmiResult);

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
            std::cout << "Enter your weight in lbs: ";
            std::cin >> userWeight;
            
            std::cout << "Enter your height in in: ";
            std::cin >> userHeight;  
            try {
                if(userHeight > 0) {
                    double bmiResult = 703 * (userWeight / pow(userHeight, 2));

                    std::cout.precision(2);
                    std::cout << "Your BMI is: " << bmiResult << '\n';
                    rating(bmiResult);

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
            std::string line;
            std::ifstream saveFile("test.txt");
            if(saveFile.is_open()){
                while(getline(saveFile,line)){
                    std::cout << line << '\n';
                }
            }
            else std::cout << "Unable to open File";

            break;
        }
        default: {
            std::cout << "Invalid input!\n";
            break;
        }
    }
    
    return 0;
}