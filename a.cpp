#include <iostream>

using namespace std;

int main() {
    int *p_array = (int*)malloc(sizeof(int[4]));
    int *address = &p_array[1];
    p_array[0] = 4;
    p_array[1] = 8;
    for (int i = 0; i < 4; i++)
        cout << p_array[i] << "\n";

    cout << *address;
    free(p_array);
}
