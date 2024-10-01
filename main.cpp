#include <iostream>

#include "test.c"

using namespace std;

int main()
{
    int a = 4;
    int b = 5;
    int sum = add(a, b);

    cout << "Sum is equal to " << sum << endl;

    return 0;
}
