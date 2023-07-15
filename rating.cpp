#include <iostream>
#include "header.h"

using std::cout;

void rating(double bmi, int age, char gender) {
    switch(gender) {
        case 'w': {
            if(age < 19) {
                cout << "This calculator can only be used by an age over 19.";
            }
            else if(age > 18 && age < 25) {
                if (bmi > 39) {
                  cout << "You have high adipositas.\n";
                }
                else if(bmi > 29 && bmi < 39) {
                    cout << "You are at adipositas.\n";
                }
                else if(bmi > 24 && bmi < 29) {
                    cout << "You are overweight\n";
                }
                else if(bmi > 18 && bmi < 24) {
                    cout << "You have ideal weight\n";
                }
                else cout << "You are underweight\n";
            }
            else if(age > 25 && age < 35) {
                if (bmi > 40) {
                  cout << "You have high adipositas.\n";
                }
                else if(bmi > 30 && bmi < 40) {
                    cout << "You are at adipositas.\n";
                }
                else if(bmi > 25 && bmi < 30) {
                    cout << "You are overweight\n";
                }
                else if(bmi > 19 && bmi < 25) {
                    cout << "You have ideal weight\n";
                }
                else cout << "You are underweight\n";
            }
            else if(age > 35 && age < 44) {
                if (bmi > 41) {
                  cout << "You have high adipositas.\n";
                }
                else if(bmi > 31 && bmi < 41) {
                    cout << "You are at adipositas.\n";
                }
                else if(bmi > 26 && bmi < 31) {
                    cout << "You are overweight\n";
                }
                else if(bmi > 20 && bmi < 26) {
                    cout << "You have ideal weight\n";
                }
                else cout << "You are underweight\n";
            }
            else if(age > 45 && age < 54) {
                if (bmi > 42) {
                  cout << "You have high adipositas.\n";
                }
                else if(bmi > 32 && bmi < 42) {
                    cout << "You are at adipositas.\n";
                }
                else if(bmi > 27 && bmi < 32) {
                    cout << "You are overweight\n";
                }
                else if(bmi > 21 && bmi < 27) {
                    cout << "You have ideal weight\n";
                }
                else cout << "You are underweight\n";
            }
            else if(age > 55 && age < 64) {
                if (bmi > 43) {
                  cout << "You have high adipositas.\n";
                }
                else if(bmi > 33 && bmi < 43) {
                    cout << "You are at adipositas.\n";
                }
                else if(bmi > 28 && bmi < 33) {
                    cout << "You are overweight\n";
                }
                else if(bmi > 22 && bmi < 28) {
                    cout << "You have ideal weight\n";
                }
                else cout << "You are underweight\n";
            }
            else {
                if (bmi > 44) {
                  cout << "You have high adipositas.\n";
                }
                else if(bmi > 34 && bmi < 44) {
                    cout << "You are at adipositas.\n";
                }
                else if(bmi > 29 && bmi < 34) {
                    cout << "You are overweight\n";
                }
                else if(bmi > 23 && bmi < 29) {
                    cout << "You have ideal weight\n";
                }
                else cout << "You are underweight\n";
            }

            break;
        }
        case 'm': {
            if(age < 19) {
                cout << "This calculator can only be used by an age over 19.";
            }
            else if(age > 18 && age < 25) {
                if (bmi > 40) {
                  cout << "You have high adipositas.\n";
                }
                else if(bmi > 30 && bmi < 39) {
                    cout << "You are at adipositas.\n";
                }
                else if(bmi > 25 && bmi < 29) {
                    cout << "You are overweight\n";
                }
                else if(bmi > 19 && bmi < 24) {
                    cout << "You have ideal weight\n";
                }
                else cout << "You are underweight\n";
            }
            else if(age > 25 && age < 35) {
                if (bmi > 41) {
                  cout << "You have high adipositas.\n";
                }
                else if(bmi > 31 && bmi < 40) {
                    cout << "You are at adipositas.\n";
                }
                else if(bmi > 26 && bmi < 30) {
                    cout << "You are overweight\n";
                }
                else if(bmi > 20 && bmi < 25) {
                    cout << "You have ideal weight\n";
                }
                else cout << "You are underweight\n";
            }
            else if(age > 35 && age < 44) {
                if (bmi > 42) {
                  cout << "You have high adipositas.\n";
                }
                else if(bmi > 32 && bmi < 41) {
                    cout << "You are at adipositas.\n";
                }
                else if(bmi > 27 && bmi < 31) {
                    cout << "You are overweight\n";
                }
                else if(bmi > 21 && bmi < 26) {
                    cout << "You have ideal weight\n";
                }
                else cout << "You are underweight\n";
            }
            else if(age > 45 && age < 54) {
                if (bmi > 43) {
                  cout << "You have high adipositas.\n";
                }
                else if(bmi > 33 && bmi < 42) {
                    cout << "You are at adipositas.\n";
                }
                else if(bmi > 28 && bmi < 32) {
                    cout << "You are overweight\n";
                }
                else if(bmi > 22 && bmi < 27) {
                    cout << "You have ideal weight\n";
                }
                else cout << "You are underweight\n";
            }
            else if(age > 55 && age < 64) {
                if (bmi > 44) {
                  cout << "You have high adipositas.\n";
                }
                else if(bmi > 34 && bmi < 43) {
                    cout << "You are at adipositas.\n";
                }
                else if(bmi > 29 && bmi < 33) {
                    cout << "You are overweight\n";
                }
                else if(bmi > 23 && bmi < 28) {
                    cout << "You have ideal weight\n";
                }
                else cout << "You are underweight\n";
            }
            else {
                if (bmi > 45) {
                  cout << "You have high adipositas.\n";
                }
                else if(bmi > 35 && bmi < 44) {
                    cout << "You are at adipositas.\n";
                }
                else if(bmi > 30 && bmi < 34) {
                    cout << "You are overweight\n";
                }
                else if(bmi > 24 && bmi < 29) {
                    cout << "You have ideal weight\n";
                }
                else cout << "You are underweight\n";
            }

            break;
        }              
        default: {
            cout << "Please enter a valid gender";
        }
    }
}

