#include <stdio.h>
#include <stdlib.h>

#include "email.h"

int main(int argc, char *argv[])
{
    if(argc == 2){
        usage();
        emailval(argc,argv);
    }
    return 0;
}
