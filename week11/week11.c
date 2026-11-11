#include <stdio.h>
#include <time.h>
int niilber(int n) {
    if (n < 0) n = -n;
    if (n == 0) return 0;
    return (n % 10) + niilber(n / 10);}
int zereg(int suuri, int zereg_too) {
    if (zereg_too == 0) return 1;
    return suuri * zereg(suuri, zereg_too - 1);}
long fib_rec(int n) {
    if (n <= 1) return n;
    return fib_rec(n - 1) + fib_rec(n - 2);}
long fib_loop(int n) {
    if (n <= 1) return n;
    long a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c; }
    return b;}
void uhraah(int n) {
    if (n == 0) {
        printf("Go!\n");
        return;}
    printf("%d... ", n);
    uhraah(n - 1); }
int main() {
    printf("Niilber: %d\n", niilber(123));
    printf("Zereg: %d\n\n", zereg(2,3));
    long ehleh = time(NULL);
    printf("Fib rec: %ld ", fib_rec(40));
    printf("(%ld sek)\n", time(NULL) - ehleh);
    ehleh = time(NULL);
    printf("Fib loop: %ld ", fib_loop(40));
    printf("(%ld sek)\n\n", time(NULL) - ehleh);
    uhraah(5);
return 0;
}
