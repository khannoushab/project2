#include <stdio.h>
#include <string.h>

void update(int *a,int *b) {
    int t = *a;
    *a = *a + *b;
    t = t - *b;
    *b = t > 0 ?(t):(-t);   
}
extern int sum(int a, int b);
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}