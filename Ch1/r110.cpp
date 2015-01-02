#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;
void f(int x)
{
    std::cout << ++x;
} void g(int &x)
{
    std::cout << ++x;
}
int main(int argc, char const *argv[])
{
    int x = 10;
    cout << endl << x << endl;
    f(x) ;
    cout << endl << x << endl;
    g(x) ;
    cout << endl << x << endl;

    return EXIT_SUCCESS;
}