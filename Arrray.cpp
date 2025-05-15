#include <iostream>

using namespace std;

int main()
{
    cout << "***********************\n";
    cout << "Working with Array\n";
    cout << "***********************\n";

    // double price[30]; <_< no use double;
    float price[30] = {100, 25.25, 150, 200, 50}; // use float instead ^_^;

    cout << "prices are: \n";
    for (int i = 0; i < 5; i++) // for(i=0; i<30; i++){
    {                           //if(i==5) break;
    cout << price[i] << endl;   //cout << price[i] <<endl;
    }                           // }

    // To make iterating over arrays easier and shorter,
    // C++ provides another type of the for loop, called the for-each loop.
    float numbers[] = {4, 15, 66.3, 441, 9.41};
    for (float n : numbers)
    {
        cout << n << endl;
    }
    // auto can be used in for-each loop
    //  for(auto n: numbers){
    //      cout << n << "\n";
    //  }

    // MORE EXAMPLE HOW FOR-EACH WORKS
    int nums[] = {0, 1, 4, 7};
    int sum = 0;
    for (auto n : nums)
    {
        if (!(n>4))
        {
            sum += n;
        }
    }
    cout << "\nThe sum of given numbers = " << sum << endl;

    //Multidimensional array
    int map[7][7] = {
        {0, 0, 1, 1, 0, 1, 0},
        {1, 0, 0, 1, 1, 0, 1},
        {0, 1, 0, 1, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 0},
        {0, 1, 1, 0, 0, 1, 0},
        {0, 0, 1, 0, 0, 0, 1},
        {0, 1, 0, 0, 0, 0, 1}
    };
    int r=0, c=0;
        cout << "Input row and column: ";
        cin >> r >> c;
        if(r>7 || c>7){
        cout << "Invalid entry! Please input values from 1 to 7.\n";
        return 1;
        }
        r--;
        c--;
        if(!(r<0 && c<0)){
        cout << "The values at row " << r + 1<< " and column " << c + 1 << " is ";
        cout << map[r][c];
        }
        else{
            cout << "Invalid entry! Please input values from 1 to 7.\n";
            return 1;
        }
}