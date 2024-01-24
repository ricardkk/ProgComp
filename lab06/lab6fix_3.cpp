#include <iostream>
using namespace std;

int main()
{
    short s = SHRT_MAX; 
    int i = INT_MAX;
    long l = LONG_MAX;
    long long ll = LLONG_MAX;

    cout << "short: " << sizeof(s) << " bytes" << endl;
    cout << "int: " << sizeof(i) << " bytes" << endl;
    cout << "long: " << sizeof(l) << " bytes" << endl;
    cout << "long long: " << sizeof(ll) << " bytes" << endl;

    int totalBytes = sizeof(s) + sizeof(i) + sizeof(l) + sizeof(ll);
    cout << "Total: " << totalBytes << " bytes" << endl;
}