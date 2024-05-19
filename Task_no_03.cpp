#include <iostream>
using namespace std;
int main()
{
    const int students = 50;
    string names[students];
    double grade[students];
    int number_Students = 0;

    cout << "Enter the number of students: ";
    cin >> number_Students;
    if (number_Students > students)
    {
        cout << "Maximum number of students exceeded!" << endl;
        return 1;
    }
    for (int i = 0; i < number_Students; ++i)
    {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> names[i];
        cout << "Enter grade of student " << i + 1 << ": ";
        cin >> grade[i];
    }
    double total = 0;
    double highest_Grade = grade[0];
    double lowest_Grade = grade[0];

    for (int i = 0; i < number_Students; ++i)
    {
        total += grade[i];
        if (grade[i] > highest_Grade)
        {
            highest_Grade = grade[i];
        }
        if (grade[i] < lowest_Grade)
        {
            lowest_Grade = grade[i];
        }
    }

    double average = total / number_Students;

    cout << "Average grade: " << average << endl;
    cout << "Highest grade: " << highest_Grade << endl;
    cout << "Lowest grade: " << lowest_Grade << endl;

    return 0;
}
