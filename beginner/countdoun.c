#include <stdio.h>
#include <unistd.h>

int main() {
    int number;

    number = 10;
    while (1) {
        if (number == 5) {
            number--;  // Decrement number to avoid infinite loop
            continue;
        }
        printf("%d\n", number);
        sleep(2);
        number--;

        if (number < 1) {
            break;
        }
    }

    return 0;
}
