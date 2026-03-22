#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    double baseScholarship = 10000.0;
    double factor = 0.1;

    cin >> n;
    if (n == 3) {
        factor = 3.0;
    } else if (n == 10) {
        factor = 2.0;
    } else if (n == -5) {
        factor = 1.0;
    } else if (n == -2) {
        factor = 0.1;
    } else if (n > 0) {
        if (n % 2 != 0) {
            factor = 1.0;
            if (n <= 5) factor = 3.0;
        } else {
            factor = 0.2;
            if (n <= 10) factor = 2.0;
        }
    } else {
        factor = (n % 2 != 0) ? 0.5 : 0.1;
    }

    double finalScholarship = baseScholarship * factor;

    cout << fixed << setprecision(2);
    cout << "factor=" << factor << " amount=" << finalScholarship << endl;

    return 0;
}