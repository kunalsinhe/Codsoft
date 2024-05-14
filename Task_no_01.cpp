#include <iostream>
#include <cstdlib>
#include <ctime>
#include<stdlib.h>
using namespace std;
int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand() % 10 + 1;
    int guessed_number;
    int tried = 0;
    cout << "--> Welcome to the Guess the Number game!\n\n";
    while (guessed_number != randomNumber)
    {
        cout << "Enter your guessed number (between 1 and 10): ";
        cin >> guessed_number;
        tried = tried + 1;
        if (guessed_number > randomNumber){
            cout << "Too high!\n\n";
        }
        else{
            if (guessed_number < randomNumber){
                cout << "Too low!\n\n";
            }
            else{
                cout << "\n Congratulations! Guessed number is correct number, found in " << tried << " attempts!\n";
            }
        }
    }
    return 0;
}
