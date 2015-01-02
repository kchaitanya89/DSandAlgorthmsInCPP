#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    std::vector<double> v1, v2, result;

    cout << "Enter the numbers :\n"
         double d1, d2;
    while (cin >> d1 >> d2) {
        v1.push_back(d1);
        v2.push_back(d2);
        result.push_back(d1 * d2);
    }
    cout << "\nThe result vec is - \n";
    for (auto && i : result) {
        cout << i << endl;
    }
    return EXIT_SUCCESS;
}