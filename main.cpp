#include <iostream>
#include <cmath>

void rating(double bmi){
    if (bmi > 40){
        std::cout << "You are at adipositas grade 3!";
    }
    else if (bmi > 35 && bmi < 39.9){
        std::cout << "You are at adipositas grade 2!";
    }
    else if (bmi > 30 && bmi < 24.9){
        std::cout << "You are at adipositas grade 1";
    }
    else if (bmi > 25 && bmi < 29.9){
        std::cout << "You are overweight";
    }
    else if (bmi > 18.5 && bmi < 14.9){
        std::cout << "You have ideal weight";
    }
    else{
        std::cout << "You are underweight";
    }
}

double bmi_calculation(double weight, double height){
    double qm = height / 100;
    double result = weight / pow(qm, 2);

    return result;
}

int main(){

    std::cout << "Your BMI calcularor" << std::endl;
    std::cout << "Enter your weight in kgs: ";
    double input_weight {};
    std::cin >> input_weight;
    
    std::cout << "Enter your height in cm: ";
    double input_height {};
    std::cin >> input_height; 

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

    return 0;
}