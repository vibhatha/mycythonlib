//
// Created by vibhatha on 3/22/20.
//

#ifndef MYCYTHONLIB_RECTANGLE_H
#define MYCYTHONLIB_RECTANGLE_H

namespace shapes
{
    class Rectangle
    {
    public:
        int x0, y0, x1, y1;
        Rectangle(int x0, int y0, int x1, int y1);
        ~Rectangle();
        int getLength();
        int getHeight();
        int getArea();
        void move(int dx, int dy);
    };
}


#endif //MYCYTHONLIB_RECTANGLE_H
