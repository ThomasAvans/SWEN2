#include <iostream> 
#include <cstdlib>
#include <ctime>
#include "FillArray.h"


using namespace std;

fillArray fillMyArray;

int main()
{
    //To fill the array
    fillMyArray.arrayFiller();
    int *arr = fillMyArray.array;

    return 0;
}