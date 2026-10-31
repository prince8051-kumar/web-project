int main() {
    int a[5] = {10, 20, 30, 40, 50};   // every value given
    int b[5] = {1, 2};                 // the rest become 0
    int c[] = {7, 8, 9};               // size is worked out: 3
    int d[5] = {0};                    // all five become 0

    int cn = sizeof(c) / sizeof(c[0]); // number of elements in c

    printf("a: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\nb: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", b[i]);
    }
    printf("\nc: ");
    for (int i = 0; i < cn; i++) {
        printf("%d ", c[i]);
    }
    printf("\nd: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", d[i]);
    }
    printf("\n");

    return 0;
}