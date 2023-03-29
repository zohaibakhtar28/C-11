#include <iostream>
using namespace std;
int main()
{
    // Unnamed Function without parameters.
    []()
    { cout << "Hello\n"; }();

    // Unnamed Function with parameters.
    cout << ([](int x, int y)
             { return x + y; }(10, 5));

    int a = [](int x, int y)
    {cout<<endl; return x+y; }(10, 5);
    cout << a << endl;

    // Accessing local variables in lambda expression.
    int x = 10;
    [x]()
    { cout << x << endl; }(); // 1.Directly

    auto f = [x]()
    { cout << x << endl; }; // 2.Using reference
    f();

    // NOTE: a++ will not be captured in f();
    // to modify local variable we'll pass by reference.
    x++;
    f();

    // Passing parameter by reference.
    auto g = [&x]()
    { cout << x << endl; };
    x++;
    g();

    // Passing Lambda Expression to a fnction fun();
    int y = 99;
    auto h = [&y]()
    { cout << y++ << endl; };
    fun(h);
    fun(h);

    return 0;
}

// Lambda Expression can be passed to a function also.
template <typename T>
void fun(T p)
{
    p();
}