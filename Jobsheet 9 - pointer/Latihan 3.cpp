#include <stdio.h>

int main() {
    int Lesley = 57082;
    int Layla = Lesley;
    int Balmond = Layla + 1;

    printf("a) Nilai Layla: %d\n", Layla);
    printf("b) Nilai Balmond: %d\n", Balmond);

    int Lesley2 = 57082;
    int *Layla2 = &Lesley2;
    int Balmond2 = *Layla2 + 1;

    printf("a) Nilai Layla: %d\n", *Layla2);
    printf("b) Nilai Balmond: %d\n", Balmond2);

    return 0;
}
