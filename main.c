#include <stdio.h>

int main() {
    printf("%i\n", muti(5, 6));
    printf("%i", divi(4, 2));
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
