//
// Created by vibhatha on 3/19/20.
//

#include <iostream>
#include "stdio.h"
#include "stdlib.h"
#include "library.h"
#include "simplelibrary.h"
#include "Rectangle.h"
#include "Circle.h"

using namespace std;

void test1();

void test2();

void test3();

int main() {

    test3();

    return 0;
}

void test1() {
    Library library;

    double *ar = new double[5];

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
}


void test2() {

    shapes::Rectangle r(10, 10, 20, 20);

    int area = r.getArea();

    std::cout << "Area " << area << endl;

}

void test3() {
    shapes::Circle c(0, 0, 10);
    int area = c.getArea();

    std::cout << "Area " << area << endl;
}