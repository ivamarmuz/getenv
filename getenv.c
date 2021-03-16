#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc > 1)
        printf("%s is at %p\n", argv[1], getenv(argv[1]));
        
    return 0;
}