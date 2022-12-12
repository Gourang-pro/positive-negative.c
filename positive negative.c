#include<conio.h>
#include<stdio.h>

int main()
{
    int no,ans;
    int cheakpositivenegative(int);

    printf("ENTER THE NUMBER:");
    scanf("%d",&no);

    ans=cheakpositivenegative(no);

    if(ans==0)
    printf("\n Number IS POSITIVE");
    else
    printf("\n Number IS NEGATIVE");

    return 0;

}
    int cheakpositivenegative(int n)
    {
        if(n>0)
        return 0;
        else
        return 1;

    }