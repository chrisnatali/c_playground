#include <stdio.h>

int main() {
    char *names[] = {"zero", "one", "two", "three"};
    int n;
    scanf("%d", &n);
    if (0 < n && n < 4) {
        printf("%s", names[n]);
    }
    else {
        printf("%d", n);
    }
    return 0;
}
