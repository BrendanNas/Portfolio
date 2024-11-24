#include <iostream>
using namespace std;

int main(){

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

    cout << "******************";

    return 0;

}