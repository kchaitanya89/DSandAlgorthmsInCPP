#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> ivec;

    cout << "Enter an array :\n";
    int num;
    while (cin >> num) {
        ivec.push_back(num);
    }

    sort(ivec.begin(), ivec.end());
    std::vector<int>::const_iterator result = find(ivec.begin(), ivec.end(), val);

    if (result != ivec.end()) {
        cout << "Found";
    }
    return EXIT_SUCCESS;
}