#include<stdio.h>
#include<stdlib.h>

// fgets -- scanf
// puts -- printf
// how to use fgets instead of gets //
// fgets(variable_in_which_value_to_be_stored,size_of_variable,stdin)

int main()
{
  int i;
  char str[20];


fgets(str,20,stdin);
printf("%s",str);

  return 0;
}