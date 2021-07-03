 #include<stdlib.h> 
#include<stdio.h>


int main()
{
  char str[100]="abhsgs234cid*(hshshs349*(20hshshkd3257";
  for(int i=0;str[i]!='\0';i++)
{
   if(str[i]-48<=48&&str[i]-48>=57)
     printf("%c",str[i]);
}


return 0;
}
