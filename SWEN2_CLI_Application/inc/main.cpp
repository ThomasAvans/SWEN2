#include <iostream> 
#include <cstdlib>
#include <ctime>
#include "../src/FillArray.h"
#include "../tst/FillArrayTest.h"

using namespace std;

FillArray fillMyArray;
FillArrayTest fillTest;

int main()
{
    //To fill the array
    fillMyArray.arrayFiller();
    int *arr = fillMyArray.array;

    //To check FillArray
    int n = (sizeof(int) * 30) / sizeof(arr[0]);
    int check = fillTest.arrayChecker(arr, n);
    if (check < 0) {
        cout << "FillArray test Failed" << endl;
    }
    else {
        cout << "FillArray test succeeded" << endl;
    }
    cout << "\n";

    return 0;
}