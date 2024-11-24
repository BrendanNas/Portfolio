#include <iostream>
#include <cmath>
using namespace std;

double findPerimeter(double num);
double findCalc(double num);
double findSQRT(double num);
double findHypot(double num);
double findTemperature(double num);

int main(){
    int choice = 0;
    double num;

    do{
        cout << "**************************\n";
        cout << "Welcome to the Math-Conversion-System\n";
        cout << "What kind of help do you need?\n";
        cout << "1. Find the perimeter\n";
        cout << "2. Calculate a few numbers\n";
        cout << "3. Find the square root\n";
        cout << "4. Get the Hypotenuse\n";
        cout << "5. Temperature Converter\n";
        cout << "6. Exit the System\n";
        cin >> choice;

        cin.clear();
        fflush(stdin);

        switch(choice){
            case 1: findPerimeter(num);
                    break;
            case 2: findCalc(num);
                    break;
            case 3: findSQRT(num);
                    break;
            case 4: findHypot(num);
                    break;
            case 5: findTemperature(num);
                    break;
            case 6: cout << "Have a nice day\n";
                    break;
            default: cout << "Invalid option\n";
        }
    }while(choice != 6);
    return 0;
}
double findPerimeter(double num){
    double  perimeter;
    int  length;
    int  width;

    cout << "Enter the length: \n";
    cin >> length;
    cout << "Enter the width: \n";
    cin >> width;

    perimeter = (2*(length + width));

    cout << "The perimeter is: " << perimeter << '\n';

    return 0;
}
double findCalc(double num){
    char op;
    double num1;
    double num2;
    double result;

    cout << "*********** CALCULATOR **********\n";
    cout << "Enter either (+ - * /): \n";
    cin >> op;

    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            cout << "result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            cout << "result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            cout << "result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            cout << "result: " << result << '\n';
            break;
        default: cout << "Invalid Choice\n";
    }
    return 0;
}
double findSQRT(double num){
    float square, n;
    cout << "Thank you for choosing to find the square root\n";
    cout << "Enter the number: ";
    cin >> n;

    square = sqrt(n);

    cout << "Square root of this number is: " << square << '\n';

    return 0;
}
double findHypot(double num){
    double a;
    double b;
    float hypo;

    cout << "Enter the first number: \n";
    cin >> a;
    cout << "Enter the second number: \n";
    cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);
    hypo = sqrt(a + b);

    cout << "The hypotenuse is: " << hypo << '\n';

    return 0;
}
double findTemperature(double num){
    char unit;
    double temp;

    cout << "******* TEMPERATURE CONVERTOR *******\n";
    cout << "Which unit would you like to convert: \n";
    cout << "F = Fahreinheit\n";
    cout << "C = Celcius\n";
    cout << "K = Kelvin\n";
    cin >> unit;

    if(unit == 'F' || unit == 'f'){
        cout << "Enter the temperature in Celsius: ";
        cin >> temp;

        temp = (1.8 * temp) + 32.0;
        cout << "The temperature is " << temp << " degrees F\n";

    }else if(unit == 'C' || unit == 'c'){
        cout << "Enter the temperature in Fahrenheit: ";
        cin >> temp;

        temp = (temp - 32.0) / 1.8;
        cout << "The temperature is " << temp << " degrees C\n";

    }else if(unit == 'K' || unit == 'k'){
        cout << "Will you convert to F or C?: ";
        cin >> unit;

        if(unit == 'F' || unit == 'f'){
            cout << "Enter the temperature in K: ";
            cin >> temp;

            temp = (temp - 273.15) * 1.8 + 32;
            cout << "The temperature is " << temp << " degrees F\n";
            
        }else if(unit == 'C' || unit == 'c'){
            cout << "Enter the temperature in K: ";
            cin >> temp;

            temp = (temp - 273.15);
            cout << "The temperature is " << temp << " degrees C\n";
        }
    }
    else{
        cout << "Please enter F, C, or K.\n";
    }

    return 0;
}