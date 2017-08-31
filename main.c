#include <stdio.h>

int main() {
    printf("%i\n", muti(5, 6));
    printf("%i\n", divi(4, 2));
    printf("%i\n", plus(7, 5));
    printf("%i", minus(7, 5));
}
// nhân hai số nguyên với nhau
// chia hai số nguyên cho nhau
int muti(int a, int b){
    int c = a * b;
    return a* b;
}
int divi(int a, int b){
    int c = a/ b;
    return a/ b;
}
int plus(int a, int b){
    int c = a + b;
    return a + b;
}
int minus(int a, int b){
    int c = a - b;
    return a - b;
}