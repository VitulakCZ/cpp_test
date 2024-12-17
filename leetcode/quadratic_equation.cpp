#include <iostream>
#include <cmath>

using namespace std;

int solve(int a, int b, int c) {
    float q = sqrt((b*b)-(4*a*c));
    return (-b+q)/(2*a);
}

int main() {
    cout << solve(1, -12, -28) << '\n';
}
