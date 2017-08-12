#include <stdio.h>

int nmatch(char* s1, char* s2);

int main()
{

  printf("%d", nmatch("abcbd", "*b*"));
  printf("%d", nmatch("abc", "a***"));


  printf("%d", nmatch("coucou", "couu"));
  printf("%d", nmatch("coucou", "  coucou"));
  printf("%d", nmatch("", "coucou"));
  printf("%d", nmatch("coucou", ""));
  printf("%d", nmatch("couc*ou", "coucfhdkfasdfou"));
  printf("%d", nmatch("c*oucou", "casdfsadf"));

  printf("------------------");

  printf("%d", nmatch("couccoucfhdkfasdfou", "*ou"));
  printf("%d", nmatch("ccasoucdfsadfou", "*ouc*ou"));
  printf("%d", nmatch("coucou", "coucou*"));
}
