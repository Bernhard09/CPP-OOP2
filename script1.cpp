#include <iostream>

int addition(int a, int b) {
    return a+b;
}

int subtraction(int a, int b) {
    return a-b;
}

int operation(int x, int y, int (*functocall)(int, int)) {
    int g;

    g = (*functocall)(x,y);
    return (g);
}



int main(int argc, char const *argv[])
{
    int m,n;
    int (*minus)(int, int) = subtraction;

    m = operation(7, 5, addition);
    n = operation(4,8, minus);

    std::cout << "m: " << m << std::endl;
    std::cout << "n: " << n << std::endl;

    return 0;
}
