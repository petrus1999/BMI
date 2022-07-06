// BMI.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using  namespace std;

double BMI(double weight, double height) {
    return weight / (height * height);

}

int main() {
    double weight, double height;

    cout << " Enter your weight " << endl;
    cin >> weight;
    cout << " Enter your height " << endl;
    cin >> height;

    cout << " The body mass index is :" << BMI(weight, height) << endl;
    if (BMI(weight, height) <= 17) {
        cout << "Underweight";
    }
    else if (BMI(weight, height) >= 18 && BMI(weight, height) <= 25) {

        cout << " Normal weight";
    }
    else if (BMI(weight, height) >= 25 && BMI(weight, height) <= 30) {
        cout << "Overweight";
    }
    else if (BMI(weight, height) >= 25 && BMI(weight, height) <= 30) {

        cout << "Obesity";
    }



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
