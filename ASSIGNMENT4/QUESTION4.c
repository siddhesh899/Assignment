include<stdio.h>


void CheckNumber(int ivalue)
{ 
  if(ivalue > 0)
  {
    printf("The number is positive\n");
  }
  else if(ivalue < 0)
  {
    printf("The number is negative\n");
  }
  else
  {
    printf("The number is zero\n");
  }

}

int main()
{
  int i value = 0;
  printf("Enter a number\n");
  scanf("%d",&ivalue); 
  CheckNumber(ivalue); 
  return EXIT_SUCCESS;
}
