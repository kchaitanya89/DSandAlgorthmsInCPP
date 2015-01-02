#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <math.h>
#include <sstream>
using namespace std;

class Vector2 {
private:
public:
    double x, y;
    Vector2(double x, double y)
    {
        this->x = x;
        this->y = y;
    }
    ~Vector2() {}

    string operator+(Vector2 v2)
    {
        double x1 = x + v2.x;
        double y1 = y + v2.y;
        std::stringstream sstm;
        sstm << x1 << "x , " << y1 << "y";
        return sstm.str();
    }
    double operator*(Vector2 v2)
    {
        double x1 = x * x + v2.x * v2.x;
        double y1 = y * y + v2.y * v2.y;
        return sqrt(x1 + y1);
    }
};
int main(int argc, char const *argv[])
{
    Vector2 v1(2, 3), v2(4, 5);

    cout << v1 + v2 << endl;
    cout << v1 *v2;

    return EXIT_SUCCESS;
}