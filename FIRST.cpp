#include <iostream>
#include <string> 
using namespace std;

int main() {
  // string message;
  // message = "Welcome\n";

  // cout << "new message " + message;
  // string smiley = "      @@@@            @@@@\n     @@@@@@          @@@@@@\n     @@@@@@          @@@@@@\n      @@@@            @@@@\n\n\n\n@                             @\n @@                         @@\n   @@@                   @@@\n      @@@@@         @@@@@\n         @@@@@@@@@@@@@\n";
  // cout << smiley;

  //  float num = 1.14f;
  //  cout<< num;

  bool online = true;
  cout << online;
  cout << endl;
  //The auto keyword allows you to set the type of the variable based on its value. 
  // auto num = 5;
  // cout << num << endl;
  //When using the auto keyword, the variable must be assigned a value during declaration, else you will get an error.
  //so, auto num;
  //num = 10; gives error message;
  int num = 0;

  cout << "Enter yur number bro: ";
  cin >> num;
  cout << "You entered: " << num << endl;
  string name;
  cout << "Yoo whats your name bro: ";
  cin >> name;
  cout << "What's Up " << name << " pal";
}