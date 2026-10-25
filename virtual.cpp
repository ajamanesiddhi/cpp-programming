
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Area of shape" << endl;
    }
};

class Circle : public Shape {
public:
    void area() override {
        float r = 5;
        cout << "Area of circle = "
             << 3.14 * r * r << endl;
    }
};

class Rectangle : public Shape {
public:
    void area() override {
        int l = 10, w = 5;
        cout << "Area of rectangle = "
             << l * w << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;
    Shape *s;

    s = &c;
    s->area();

    s = &r;
    s->area();

    return 0;
}
