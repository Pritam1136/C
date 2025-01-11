//  sleep.c

#include <stdio.h>
#include <unistd.h>

int main(){
    printf("Wait while processing...");
    fflush(stdout);
    sleep(5);
    printf("Done\n");

    return 0;
}