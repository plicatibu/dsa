#include <iostream>

using std::cout;
using std::format;


auto fib(int n) {
    if (0 == n) {
        return 0;
    }

    if (1 == n) {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

int main() {

    for (int n = 0; n < 30; n++) {
        cout << format("fib({}) == {}\n", n, fib(n));
    }
    return 0;
}

