#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do{
        n = get_int("Height: ");
        for(int i=1;i<=n;i++){
             for(int m=1;m<=n-i;m++){
                    printf(" ");
                }
            for(int j=1;j<=i;j++){
                printf("#");
            }
            printf("\n");
        }

    }while(n<1 || n>8);
   
  
}
