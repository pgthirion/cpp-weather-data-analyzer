#include <iostream>
using namespace std;

/*
    =========
    Constants
    =========
*/

const int DAYS = 7;

/*  
    =========
    Functions
    =========
*/

/*
    This function gets the user input for one record (temperature only)

    Returns: valid temperature for the given day
*/
double getDayTemp(int dayNumber) {
    double temp;

    while (true) {
        cout << "Enter the temperature for Day " << dayNumber + 1 << ": ";
        cin >> temp;

        // Check if the temperature input is valid
        if (cin.fail()) {
            cout << "Error: Please enter a valid number for the temperature.\n";
            cin.clear();          // Clear the error flags
            cin.ignore(1000, '\n'); // Discard invalid input
        } else {
            break; // Exit the loop if the temperature is valid
        }
    }

    return temp;
}

/*
    This function fills the array with all of the temperature entries
*/
void fillWeek(double weekTemps[]) {
    for (int i = 0; i < DAYS; i++) {
        weekTemps[i] = getDayTemp(i); // Get temperature for each day
    }
}

/*
    This function calculates the average temp of the week

    Returns: Average temp
*/
double calcavgTemp(double weekTemps[]) {
    double sum = 0;

    for (int i = 0; i < DAYS; i++) {
        sum += weekTemps[i];
    }
    
    return (sum / DAYS); // Returns the average
}

/*
    This function calculates the lowest temp of the week

    Returns: lowest temp
*/
double calclowTemp(double weekTemps[]) {
    double low_temp = weekTemps[0];
    
    for (int i = 1; i < DAYS; i++) {
        if (low_temp > weekTemps[i]) {
            low_temp = weekTemps[i];
        }
    }
    
    return low_temp; // Returns the lowest temp
}

/*
    This function calculates the highest temp of the week

    Returns: highest temp
*/
double calchighTemp(double weekTemps[]) {
    double high_temp = weekTemps[0];
    
    for (int i = 1; i < DAYS; i++) {
        if (high_temp < weekTemps[i]) {
            high_temp = weekTemps[i];
        }
    }
    
    return high_temp; // Returns the highest temp
}

/*
    This function displays the lowest, highest and average temp of the week in the order it was entered

    Returns: String output
*/
void displayData(double weekTemps[]) {
    cout << "\n=========================================" << endl;
    cout << "Recorded temperatures for the week:\n\n";

    // Print the temps for the week
    for (int i = 0; i < DAYS; i++) {
        cout << "- Day " << i + 1
             << ": "
             << weekTemps[i]
             << "°C\n";
    }

    // Print the lowest, highest and average using their respective functions
    double average = calcavgTemp(weekTemps);
    double lowest = calclowTemp(weekTemps);
    double highest = calchighTemp(weekTemps);

    cout << "\n=========================================" << endl;    
    cout << "Lowest temperature: " << lowest << "°C\n";
    cout << "Highest temperature: " << highest << "°C\n";
    cout << "Average temperature: " << average << "°C\n";   
    cout << "=========================================" << endl;
}

/*
    =============
    Main Function
    =============
*/
/*
Logic:
    - Create an array to store temperature records for 7 days.
    - Fill the array with validated user input for each day's temp.
    - Display all recorded temps along with the average, highest, and lowest temperatures.
*/
int main() {
    double weekTemps[DAYS]; // Create the array for the week temperatures

    fillWeek(weekTemps); // Fill the array with valid input
    displayData(weekTemps); // Display final stats

    return 0;
}
