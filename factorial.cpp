// factorial page 64
#include <iostream>


auto fact(int n) {
    if (0 == n) { return 1; }
    if (1 == n) { return 1; }
    return n * fact(n - 1);
}

int main() {
    for (int n = 0; n < 10 ; n++) {
        std::cout << std::format("{}! = {}\n", n, fact(n));
    }
    return 0;
}
