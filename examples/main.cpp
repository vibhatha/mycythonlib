//
// Created by vibhatha on 3/19/20.
//

#include <iostream>
#include "stdio.h"
#include "stdlib.h"
#include "library.h"
#include "simplelibrary.h"

using namespace std;

int main() {

    Library library;

    double* ar = new double [5];

    for (int i = 0; i < 5; ++i) {
        ar[i] = i;
    }

    int array_length = 5;
    int multiplier = 2;

    cout << "Initial Array " << endl;
    library.printArray(ar, array_length);

    library.c_multiply(ar, multiplier, array_length);

    c_multiply(ar, multiplier, array_length);

    cout << "Array Multiplied by " << multiplier << endl;
    library.printArray(ar, array_length);

    c_multiply(ar, multiplier * 2, array_length);

    cout << "Array Multiplied by " << multiplier << endl;
    library.printArray(ar, array_length);




    //library.c_initialize();

    //library.c_finalize();

    return 0;
}
