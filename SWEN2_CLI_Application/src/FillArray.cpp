#include "FillArray.h"

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void FillArray::arrayFiller()
{
    int i;
    cout << "The unsorted array: ";
    cout << endl;

    srand(time(0));

    for (int j = 0; j < 30; j++)
    {

        i = rand() % 101;


        if (i != i - 1)
            array[j] = i;

        else
        {
            i = rand() % 101;
            array[j] = i;
        }
    }

    for (int k = 0; k < 30; k++)
    {
        cout << array[k] << " ";

    }
    cout << "\n";
    cout << endl;
}