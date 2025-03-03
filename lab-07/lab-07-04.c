#include <stdio.h>

int main(void) {
    int input_0, input_1, input_2;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &input_0, &input_1, &input_2);
    printf("%10d %10d %10d\n", input_0, input_1, input_2);
    printf("%-6d %-6d %-6d\n", input_0, input_1, input_2);
    return 0;
}
