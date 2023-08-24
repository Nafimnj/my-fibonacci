#include <iostream>
using namespace std;

int fib(int a, int b, int input, int i = 1)
{

    int c;

    c = a + b;
    cout << c << endl;

    while (i != input)
    {

        return fib(b, c, input, i + 1);
    }
}

int main()
{
    fib(0, 1, 10);

    return 0;
}