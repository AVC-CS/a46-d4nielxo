#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string status, gender, major;
    double baseScholarship = 10000.0;
    double factor = 0.1;

    cout << "Enter your status: ";
    cin >> status;
    cout << "Enter your gender: ";
    cin >> gender;
    cout << "Enter your major: ";
    cin >> major;

    if (status == "Student" || status == "student") {
        factor = 0.2;

        if (gender == "Female" || gender == "female") {
            factor = 1.0;
            if (major == "CS" || major == "cs") {
                factor = 2.0;
            }
        } else {
            if (major == "CS" || major == "cs") {
                factor = 1.5;
            }
        }
    } else {
        if (major == "CS" || major == "cs") {
            factor = 0.5;
        }
    }

    double finalScholarship = baseScholarship * factor;

    cout << fixed << setprecision(2);
    cout << "Your scholarship amount is: $" << finalScholarship << endl;

    return 0;
}