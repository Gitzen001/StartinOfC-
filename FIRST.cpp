#include <iostream>
#include <string>
using namespace std;

int main()
{
    // string message;
    // message = "Welcome\n";

    // cout << "new message " + message;
    // string smiley = "      @@@@            @@@@\n     @@@@@@          @@@@@@\n     @@@@@@          @@@@@@\n      @@@@            @@@@\n\n\n\n@                             @\n @@                         @@\n   @@@                   @@@\n      @@@@@         @@@@@\n         @@@@@@@@@@@@@\n";
    // cout << smiley;

    //  float num = 1.14f; after number like 1.5, here f is necessary when using float 
    // float num = 1.14; gives and error
    //  cout<< num;

    bool online = true; 
    cout << online; // output is 1 since bool takes true as 1 and false and 0
    cout << endl;
    // The auto keyword allows you to set the type of the variable based on its value.
    //  auto num = 5;
    //  cout << num << endl;
    // When using the auto keyword, the variable must be assigned a value during declaration, else you will get an error.
    // so, auto num;
    // num = 10; gives error message;

    //   int num = 0;
    //   cout << "Enter yur number bro: ";
    //   cin >> num;
    //   cout << "You entered: " << num << endl;
    string name;
    cout << "Yoo whats your name bro: ";
    cin >> name;
    cout << "What's Up " << name << " pal"<<endl; // or u can use \n to break a line
    int month = 0;
    cout << "Hope you gud, when were you born bro?"<<endl;
    cout << "Choose number between 1-12 as month so that me can know when" << endl;
    cout << "you u were actually born: ";
    cin >> month;
    switch (month)
    {
    case 1:
        cout << "I see you belong to January!";
        break;
    case 2:
        cout << "I see you belong to Feburary!";
        break;
    case 3:
        cout << "I see you belong to March!";
        break;
    case 4:
        cout << "I see you belong to April!";
        break;
    case 5:
        cout << "I see you belong to May!";
        break;
    case 6:
        cout << "I see you belong to June!";
        break;
    case 7:
        cout << "I see you belong to July!";
        break;
    case 8:
        cout << "I see you belong to August!";
        break;
    case 9:
        cout << "I see you belong to September!";
        break;
    case 10:
        cout << "I see you belong to October!";
        break;
    case 11:
        cout << "I see you belong to November!";
        break;
    case 12:
        cout << "I see you belong to December!";
        break;
    default:
        cout << "Ayo bro did you forgot your birthday!";
        break;
    }
}