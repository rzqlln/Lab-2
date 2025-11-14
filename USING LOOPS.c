/* AQUINO, RIZELLE FATE P. DIT1-2 */
#include <stdio.h>

int main() {
    // While loop: Print numbers from 1 to 10
    int i = 1;
    printf("While loop: ");
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // For loop: Print even numbers from 2 to 20
    printf("For loop: ");
    for (int j = 2; j <= 20; j += 2) {
        printf("%d ", j);
    }
    printf("\n");

    // Do-while loop: Print numbers from 1 to 5
    int k = 1;
    printf("Do-while loop: ");
    do {
        printf("%d ", k);
        k++;
    } while (k <= 5);
    printf("\n");

    return 0;
}
