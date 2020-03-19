//
// Created by vibhatha on 3/19/20.
//


#include "../include/library.h"

#include "iostream"

using namespace std;

Library::Library() {

}

void Library::c_multiply(double *array, double multiplier, int m) {
    int i, j ;
    int index = 0 ;

    for (i = 0; i < m; i++) {
            array[index] = array[index]  * multiplier ;
            index ++;
    }
    return ;
}

void Library::printArray(double *array, int length) {
    for (int i = 0; i < length; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}
