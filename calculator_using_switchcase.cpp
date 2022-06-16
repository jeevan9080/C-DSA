#include <iostream>
using namespace std;
int main()
{

    char op;
    int a, b;

    cout << "Enter two numbers:";
    cin >> a >> b;
    cout << "Enter a operator:";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '/':
        cout << a / b;
        break;
    case '*':
        cout << a * b;
        break;

    default:
        cout << "invalid operator" << endl;
        break;
    }
    return 0;
}