#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

void printArray(int const *arr, int rows, int cols)
{
    for (unsigned i = 0; i < rows; ++i) {
        for (unsigned j = 0; j < cols; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printArray(arr, 3, 3)
    return EXIT_SUCCESS;
}