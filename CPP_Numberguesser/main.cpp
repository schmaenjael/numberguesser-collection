#include <iostream>
#include <ctime>
#include <cstdio>

using namespace std;

int generateRandomNumber()
{
    time_t rawTime;
    time(&rawTime);

    return rand() * rawTime % 101;
}

int getUserInput()
{
    int input;
    cin >> input;
    while (!cin.good())
    {
        cout << "You have to provide an input that's an integer!";
        cin.clear();
        cin.ignore(INT_MAX, '\n');

        cin >> input;
    };

    return input;
}

int main()
{
    const int RANDOM_NUMBER = generateRandomNumber();
    unsigned int input;
    unsigned int tries = 1;
    bool isNumberGuessed = false;

    cout << "Welcome to the C++ version of this repository! Enter a number between 1 and 100 and see if you can guess the right number!" << endl;

    while (!isNumberGuessed)
    {
        input = getUserInput();
        if (input == RANDOM_NUMBER)
        {
            cout << "You guessed the number. It was " << RANDOM_NUMBER << " and it took you " << tries << " tries!" << endl;
            isNumberGuessed = true;
        }
        else if (input > RANDOM_NUMBER)
        {
            cout << "Your number was too big!" << endl;
        }
        else
        {
            cout << "Your number was too small!" << endl;
        }
        tries++;
    }
    return 0;
}