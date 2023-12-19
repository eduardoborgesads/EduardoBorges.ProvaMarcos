#include <iostream>
using namespace std;

int fatorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fatorial(n - 1);
}

int maior_fatorial(int a, int b) {
    int fat_a = fatorial(a);
    int fat_b = fatorial(b);
    if (fat_a > fat_b) {
        return fat_a;
    }
    return fat_b;
}

int main() {
    int a = 5;
    int b = 7;
    cout << "O maior fatorial entre " << a << " e " << b << " eh " << maior_fatorial(a, b) << endl;
    return 0;
}

