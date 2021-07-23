#include <stdio.h>

int main()
{
    int sveta;
    for(sveta = 0; sveta < 5  ; sveta++)
    {
        if(sveta == 2)
        {
            for(int dima=0; dima<5; dima++)
            {
                printf("x ");   
            }
        } 
        else
        {
            for(int dima=0; dima < 5; dima++)
            {
                if (dima==2)
                {
                    printf("  x");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");   
    }
    return 0;
}
