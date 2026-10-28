#include<stdio.h>
struct student
{
char name[10];
int roll;
};
void show(struct student st);
void main(){
struct student std;
printf("\nenter student record:\n");
printf("\nstudent name:\t");
scanf("%s",std.name);
printf("\n enter student roll no:\t");
scanf("%d",&std.roll);
show(std);
}
void show(struct student st)
{
printf("\nstudent name is %s",st.name);
printf("\nroll is %d",st.roll);
}
