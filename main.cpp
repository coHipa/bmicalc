#include <iostream>
#include <cmath>

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
    

    std::cout << "Your BMI is: " << bmi_calculation(input_weight, input_height);

    return 0;
}