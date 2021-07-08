#include<stdio.h>
struct info{
int roll_no;
char name[50];
float CGPA;
};
void init(struct info *s){ //call by reference
    printf("Enter roll_no: \n");
    scanf("%d",&s->roll_no);
    printf("Enter name: \n");
    scanf("%s",&s->name);
    printf("Enter CGPA: \n");
    scanf("%f",&s->CGPA);
}
void show(struct info s){ //call by value
    printf("%s \n",s.name);
    printf("%d \n",s.roll_no);
    printf("%f \n",s.CGPA);
}
int main()
{
    struct info s;
    init(&s);
    show(s);
    return 0;
}
