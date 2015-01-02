#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int i;
    cout << "enter 'i' to compute 2^i: ";
    cin >> i;
    long result;

    if (i < 31)
        result = (2 << (i - 1));

    else {
        while (i > 15) {

        }
        if ()
        }

    cout << "\n 2^i = " << result << endl;
    return EXIT_SUCCESS;
}