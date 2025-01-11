// pseudo random function random.c

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int our_random_function(int max){
    int x;
    x = (rand() % max) + 1;
    return x;
}

int main(){
    int random;
    srand(getpid());
    random = our_random_function(10);
    printf("%d\n", random);

    random = our_random_function(30);
    printf("%d\n", random);

    return 0;
}