#include <stdio.h>

int main()
{
    int sveta;
    for(sveta = 0; sveta < 5  ; sveta++)
    {
        
        for(int dima=0; dima < 5; dima++)
        {
            if(dima == sveta)
            {
                printf("x");
            } 
            else if(dima == (4 - sveta))
            {
                printf("x");
            }      
            else
            {
                printf(" ");
            }
        }
        printf("\n");   
    }
    return 0;
}
