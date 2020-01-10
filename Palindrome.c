#include<stdio.h>

int checker(char*);

int main() {
  char ch[50];
  int check;
  printf("Enter the word to be checked:\t");
  scanf("%s",ch);
  check=checker(ch);
  if(!check)
    printf("\nThe word is a palindrome");
  else
    printf("\nThe word is not a palindrome");
}

int checker(char* c){
  char temp;
  int size,flag=0,l;
  for(l=0;c[l]!='\0';l++);
  size=l;
  for(int i=0, j=size-1;i<j;i++,j--)
      if(c[i]!=c[j])
        flag=1;
  return flag;
}
