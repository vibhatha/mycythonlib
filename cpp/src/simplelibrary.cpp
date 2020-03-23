//
// Created by vibhatha on 3/19/20.
//

#include "../include/simplelibrary.h"

void c_multiply(double *array, double multiplier, int m) {
    int i, j ;
    int index = 0 ;

    for (i = 0; i < m; i++) {
        array[index] = array[index]  * multiplier ;
        index ++;
    }
    return ;
}



