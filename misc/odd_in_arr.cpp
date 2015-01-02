#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 5, 6, 7, 5, 6, 7};
    int result = 0;
    for (auto && i : arr) {
        result ^= i;
    }

    cout << result << endl;
    return EXIT_SUCCESS;
}