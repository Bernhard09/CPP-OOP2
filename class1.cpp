#include <iostream>

using namespace std;

typedef struct Coordinates
{
    int x;
    int y;
}
Coordinates;


class Rectangle {
    int width, height;


    public:
        Rectangle();
        Rectangle(int x, int y) : width{x}, height{y} {}
        Coordinates getValue() {
            Coordinates coor;
            coor.x = width;
            coor.y = height;
            return coor;
        }
        void set_values(int, int);
        int area() {return width*height;}
};

void Rectangle::set_values (int x, int y) {
    width = x;
    height = y;
}

Rectangle::Rectangle() {
    width = 10;
    height = 15;
}


int main(int argc, char const *argv[])
{
    Rectangle rect;
    Rectangle *rect2;

    rect2 = new Rectangle[2];    

    rect.set_values(12, 3);
    rect2[1].set_values(12,3);
    cout << "Area: " << rect.area() << endl;
    cout << "Area2: " << rect2[0].area() << endl;


    return 0;
}
