#include <stdio.h>
#include <unistd.h>

int main() {
    int x;
    FILE *fd;

    x = 10; // Create a child process

    if (x < 0) {
        // Handle fork failure
        perror("Fork failed");
        return 1;
    }

    if (x == 0) {
        // Child process
        while (1) {
            fd = fopen("test.txt", "a");
            if (fd == NULL) {
                perror("Failed to open file");
                return 1;
            }
            fprintf(fd, "Child process writing: %d\n", getpid());
            fclose(fd);
            sleep(1);
        }
    } else {
        // Parent process
        while (1) {
            fd = fopen("test.txt", "a");
            if (fd == NULL) {
                perror("Failed to open file");
                return 1;
            }
            fprintf(fd, "Parent process writing: %d\n", getpid());
            fclose(fd);
            sleep(1);
        }
    }

    return 0;
}
