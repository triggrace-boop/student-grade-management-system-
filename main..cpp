#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    const int n = 3;

    string names[n] = {"Ama", "Kofi", "Kwame"};
    double scores[n] = {85, 72, 90};

    double total = 0;
    int highest = 0;
    int lowest = 0;

    cout << "===============================\n";
    cout << " STUDENT GRADE MANAGEMENT\n";
    cout << "===============================\n\n";

    cout << left << setw(15) << "Student"
         << setw(10) << "Score" << "Grade\n";

    cout << "-------------------------------\n";

    for (int i = 0; i < n; i++) {
        char grade;

        if (scores[i] >= 80)
            grade = 'A';
        else if (scores[i] >= 70)
            grade = 'B';
        else if (scores[i] >= 60)
            grade = 'C';
        else if (scores[i] >= 50)
            grade = 'D';
        else
            grade = 'F';

        cout << left << setw(15) << names[i]
             << setw(10) << scores[i]
             << grade << "\n";

        total += scores[i];

        if (scores[i] > scores[highest])
            highest = i;

        if (scores[i] < scores[lowest])
            lowest = i;
    }

    cout << fixed << setprecision(2);
    cout << "\nAverage Score: " << total / n << "\n";
    cout << "Highest: " << names[highest]
         << " (" << scores[highest] << ")\n";
    cout << "Lowest: " << names[lowest]
         << " (" << scores[lowest] << ")\n";

    return 0;
}
