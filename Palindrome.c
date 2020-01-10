#include<stdio.h>

int checker(char*)

int main{
  char ch[50];
  int check;
  printf("Enter the word to be checked");
  scanf("%s",ch);
  check=checker(ch);
  if(!check)
    printf("\nThe word is a palindrome");
  else
    printf("\nThe word is not a palindrome");
}

int checker(char* c){
  char temp, size,flag=0;
  for(int i=0;c[i]!='\0';i++);
  size=i;
  for(int i=0,int j=size-1;i<j;i++,j--)
      if(c[i]!=c[j])
        flag=1;
  return flag;
}
