#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Enter an integer greater than 1 ";
    int i;
    cin >> i;

    if (i > 1) {
        int sum = 1;
        while (i > 1) {
            sum += i--;
        }
        cout << "Sum = " << sum << "\n";
    }
    return EXIT_SUCCESS;
}