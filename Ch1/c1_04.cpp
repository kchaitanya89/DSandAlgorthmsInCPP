#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> ivec;
    int num;

    while (cin >> num) {
        ivec.push_back(num);
    }

    vector<int>::const_iterator b = ivec.begin(), e = ivec.end();

    cout << "all the odds in teh vector are : \n";
    while (b != e) {
        if (*b % 2 != 0)
            cout << *b << endl;
        ++b;
    }
    return EXIT_SUCCESS;
}