#include <iostream>

class CVector {
    public:
        int x, y;
        CVector() {};
        CVector(int a, int b) : x(a), y(b) {};
};

CVector operator+ (const CVector& lhs, const CVector& rhs) {
    CVector temp;
    temp.x = lhs.x + rhs.x;
    temp.y = lhs.y + rhs.y;
    return temp;
};


int main(int argc, char const *argv[])
{
    CVector foo (3,1);
    CVector bar (4,6);
    CVector result;

    result = foo + bar;
    std::cout << result.x << ", " << result.y << std::endl;

    return 0;
}
