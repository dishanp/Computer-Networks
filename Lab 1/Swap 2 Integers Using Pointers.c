#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a,b;
    printf("Enter 2 numbers: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Before Swapping: a=%d,b=%d \n",a,b);
    swap(&a,&b);
    printf("After Swapping: a=%d,b=%d \n",a,b);
    return 0;
}
