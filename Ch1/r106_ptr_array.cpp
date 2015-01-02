#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    double *dp = new double[10]();
    for (int i = 0; i < 10; ++i) {
        cout << dp[i] << endl;
        // *(dp[i]) = 0.0;
    }
    //delete dp[10];

    // cout << dp[0];
    // cout << *dp[0];
    // for (unsigned i = 0; i < 10; ++i) {
    //     cout << (*dp[i]) << endl;
    // }
    return EXIT_SUCCESS;
}

