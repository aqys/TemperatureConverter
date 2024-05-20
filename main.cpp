#include <iostream>
#include <cctype> // For toupper() function
using namespace std;

int main() {
    float temperature;
    char choice;

    cout << "Choose input type:" << endl;
    cout << "C - Celsius" << endl;
    cout << "F - Fahrenheit" << endl;
    cout << "K - Kelvin" << endl;
    cout << "R - Rankine" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    // Convert choice to uppercase
    choice = toupper(choice);

    cout << "Enter temperature: ";
    cin >> temperature;

    float convertedCelsius, convertedKelvin, convertedRankine;

    switch (choice) {
        case 'C':
            convertedCelsius = temperature;
            convertedKelvin = temperature + 273.15;
            convertedRankine = (temperature + 273.15) * 9 / 5;
            break;
        case 'F':
            convertedCelsius = (temperature - 32) * 5 / 9;
            convertedKelvin = (temperature + 459.67) * 5 / 9;
            convertedRankine = temperature + 459.67;
            break;
        case 'K':
            convertedCelsius = temperature - 273.15;
            convertedRankine = temperature * 9 / 5;
            convertedKelvin = temperature;
            break;
        case 'R':
            convertedKelvin = temperature * 5 / 9;
            convertedCelsius = (temperature - 491.67) * 5 / 9;
            convertedRankine = temperature;
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }

    cout << "Converted temperatures:" << endl;
    cout << "Celsius: " << convertedCelsius << endl;
    cout << "Kelvin: " << convertedKelvin << endl;
    cout << "Rankine: " << convertedRankine << endl;

    return 0;
}
