include<stdio.h>


void Even(int ivalue)
{ 
  if(ivalue %=2)
  {
    printf("The number is EVEN\n");
  }
  
  else
  {
    printf("The number is odd\n");
  }

}

int main()
{
  int i value = 0;
  printf("Enter a number\n");
  scanf("%d",&ivalue); 
  Even(ivalue); 
  return EXIT_SUCCESS;
}
