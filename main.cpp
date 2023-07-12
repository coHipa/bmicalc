#include <iostream>
#include <cmath>

void rating(double bmi)
{
    if (bmi > 40)
    {
        std::cout << "You are at adipositas grade 3!\n";
    }
    else if (bmi > 35 && bmi < 39.9)
    {
        std::cout << "You are at adipositas grade 2!\n";
    }
    else if (bmi > 30 && bmi < 24.9)
    {
        std::cout << "You are at adipositas grade 1\n";
    }
    else if (bmi > 25 && bmi < 29.9)
    {
        std::cout << "You are overweight\n";
    }
    else if (bmi > 18.5 && bmi < 14.9)
    {
        std::cout << "You have ideal weight\n";
    }
    else
    {
        std::cout << "You are underweight\n";
    }
}

double bmi_calculation(double weight, double height, int choice)
{
    if (choice == 1)
    {
        return weight / pow((height / 100), 2);
    }
    else
    {
        return 703 * (weight / pow(height, 2));
    }

}

int main()
{

    bool active = true;

    std::cout << "Your BMI calculator" << std::endl;
    
    do
    {
        std::cout << "1. calculate BMI in metric system \n";
        std::cout << "2. calcutlate BMI in imberial system \n";
        std::cout << "0. Exit \n";

        short input_menu = {};
        std::cin >> input_menu;

        double input_weight {};
        double input_height {};

        switch (input_menu)
        {
            case 1:
            {
                std::cout << "Enter your weight in kgs: ";
                std::cin >> input_weight;
                
                std::cout << "Enter your height in cm: ";
                std::cin >> input_height; 
                double bmi_result = bmi_calculation(input_weight, input_height, 1);

                std::cout.precision(2);
                std::cout << "Your BMI is: " << bmi_result << std::endl;
                rating(bmi_result);
                break;
            }
            case 2:
            {
                std::cout << "Enter your weight in lbs: ";
                std::cin >> input_weight;
                
                std::cout << "Enter your height in in: ";
                std::cin >> input_height;  
                double bmi_result = bmi_calculation(input_weight, input_height, 2);

                std::cout.precision(2);
                std::cout << "Your BMI is: " << bmi_result << std::endl;
                rating(bmi_result);
                break;
            }
            case 0:
            {
                active = false;
                break;
            }
            default:
            {
                std::cout << "Invalid input!\n";
                break;
            }
        }
    } while (active);
    
    return 0;
}