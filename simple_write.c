#include <unistd.h>
#include <stdlib.h>

int main(){
    if ((write(1, "Here is some data to display\n", 29)) != 29)
        write(2, "A write error has occurred on file descriptor 1\n",47);
    exit(0);
}
