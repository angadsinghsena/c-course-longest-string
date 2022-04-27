#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    int index;
    if (argc == 1)
    {
        puts(" "); //puts is printing new line even if argument is passed. printf is not.
    }
    else
    {
        index = 1;
        for(int i = 2; i < argc; i++)
        {
            if(strlen(argv[index])<strlen(argv[i]))
            {
                index = i;
            }
        }
        puts(argv[index]);
    }
}
