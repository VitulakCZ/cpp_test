#include <cstdio>
// Nejlepší knihovna všech dob!
int test_funkce(int i) {
    return i + 1;
}

void otevrit(const char *jmeno) {
    int c;
    FILE *file;
    file = fopen(jmeno, "r");
    while ((c = getc(file)) != '\n')
        putchar(c);
    putchar(c);
    fclose(file);
}
