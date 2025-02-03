#include <stdio.h>
#include <math.h>

int main() {
    double first;
    double second;
    printf("enter first double:\n");
    scanf("%lf", &first);

    printf("enter second double:\n");
    scanf("%lf", &second);
    first = fabs(first);
    second = fabs(second);

    printf("%f\n", (first < second) ? second : first);

    return 0;
}
