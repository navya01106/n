# include<stdio.h>
int main()
{
    int num;
    printf("input any number\n");
    scanf("%d" ,&num);
    if(num%2==0)
        printf("%d is even",num);
    else
    printf("%d is odd\n",num);
    
    return 0;
}
