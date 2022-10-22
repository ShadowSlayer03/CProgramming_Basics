#include<stdio.h>
#include<stdlib.h>

// File HAndling //

int main()
{
  //Step 1: Make a pointer to a file
  FILE *fp;
  
  // Step 2: Opening/Accessing a file
  // fp = fopen(<file_name>,<file_operation)
  // Operations:
 //  "r"= reading, "w"= writing, "a"= appending    
  fp = fopen(open.txt,r);

  // Step 3: Make sure the opening was succesful
  // if(fp!=NULL) then succesful

  //Step 4: Work with file

  //Step 5: Close file
  fclose(fp);
  return 0;
}
