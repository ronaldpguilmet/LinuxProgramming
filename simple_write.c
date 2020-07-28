#include <unistd.h>
#include <stdlib.h>

int main(){
    if ((write(1, "Hello Ron\n", 10)) != 10)
        write(2, "A write error has occurred on file descriptor 1\n",10);
    exit(0);
}
