#ifndef _Circle_h
#define _Circle_h

namespace shapes
{
  class Circle
  {
  public:
      int x0, y0, radius;
      Circle(int x0, int y0, int radius);
      ~Circle();
      int getRadius();
      int getCircumference();
      int getArea();
  };
}

#endif
