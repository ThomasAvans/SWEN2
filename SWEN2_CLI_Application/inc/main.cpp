#include <iostream> 
#include <cstdlib>
#include <ctime>
#include "../src/FillArray.h"


using namespace std;

FillArray fillMyArray;

int main()
{
    //To fill the array
    fillMyArray.arrayFiller();
    int *arr = fillMyArray.array;

    return 0;
}