#include <cmath>
#include <iostream>
#include <vector>

const double PI = 3.1415;
/*
Create a programming task that involves designing a class hierarchy for geometric shapes, specifically
 circles and rectangles, with the capability to calculate their area. At the base of this hierarchy is
 an abstract class named `Shape`, which includes protected variables `x` and `y` representing the coordinates
 of the shape's center, and a pure virtual method `area()` for calculating the area. Derived from `Shape`
 are the classes `Circle` and `Rectangle`, each implementing the `area()` method according to their unique
 properties: radius for the circle and width and height for the rectangle. In the main function of the program,
 instances of a circle and a rectangle are to be created, their areas calculated, and the results displayed on
 the screen. Afterward, the allocated memory should be properly freed. The task is to write the necessary
 classes and the main function, adhering to the principles of inheritance and polymorphism in C++.
 * */
class Shape 
{
 protected:
  double x, y;

 public:
  Shape(double x, double y) : x(x), y(y) 
  {
    std::cout << "Shape was created!" << '\n';
  }
  ~Shape() 
  {
    std::cout << "Shape was destroyed!" << '\n';
  }
  virtual double area() const = 0;
  virtual void print() const = 0;

};

class Circle : public Shape 
{
 public:
  Circle(double r, double x, double y) : Shape(x, y)
  {
    std::cout << "Circle was created!" << '\n';
    radius = r;
  }
  ~Circle()
  {
    std::cout << "Circle was destroyed!" << '\n';
  }
  double area() const  { return PI * radius * radius; }
  void print() const 
  {
    std::cout << "Circle: r = " << radius << " area = " << area() << '\n';
  }

 private:
  double radius;

};

class Rectangle : public Shape {
 public:
  Rectangle(double s1, double s2, double x, double y) : Shape(x, y) 
  {
    std::cout << "Rectangle was created!";
    a = s1; b = s2;
  }
  ~Rectangle()
  {
    std::cout << "Rectangle was destroyed!" << '\n';
  }

  double area() const  { return  a * b; }
  void print() const 
  {
    std::cout << "Rectangle: a = " << a << " b = " << b << " area = " << area() << '\n';
  }

 private:
  double a, b;
};

int main() 
{
  Circle circle(1, 1, 1);
  Rectangle rectangle(10, 5, 2, 4);

  std::cout << '\n';
  std::cout << "Area of the Circle in hereditary class of Shape is " << circle.area() << "\n"
            << "Area of the Rectangle in hereditary class of Shape is " << rectangle.area() << '\n';

  return 0;
}
