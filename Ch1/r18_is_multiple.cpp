#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

bool isMultiple(long m, long n)
{
    if (m % n == 0)
        return true;
    return false;
}
int main(int argc, char const *argv[])
{
    cout << "enter 2 integers - ";
    int m, n;
    cin >> m >> n;
    cout << std::boolalpha << (bool)isMultiple(m, n) << endl;
    return EXIT_SUCCESS;
}