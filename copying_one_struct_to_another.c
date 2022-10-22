#include<stdio.h>
#include<stdlib.h>

// Copying one struct to another //
typedef struct student
{
char name[10];
char USN[11];
int age;
}Student;

Student s1,s2;

int main()
{
  printf("Enter name of student:\n");
  scanf("%s",s1.name);
  printf("Enter USN of student:\n");
  scanf("%s",s1.USN);
  printf("Enter age of student:\n");
  scanf("%d",&s1.age);

  s2=s1;

 printf("The name is %s\n",s2.name);
 printf("The USN is %s\n",s2.USN);
 printf("The age is %d",s2.age); 
  
  return 0;
}