#include <stdio.h>
 
int main()
{
  int  n, i, d, swap,k,counter=0;
 
  //printf("Enter number of elements\n");
  scanf("%d %d",&n,&k );
 
 // printf("Enter %d integers\n", n);
 
  for (i = 0; i < n; i++)
  int array[] ;   
  scanf("%d", &array[n]);
 
  for (i = 0 ; i < ( n - 1 ); i++)
  {
    for (d = 0 ; d < n - i - 1; d++)
    {
      if (array[d] > array[d+1]) 
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
        counter++ ;
      }
    }
  }
  while(array[d]==k)
              break;
 
  //printf("Sorted list in ascending order:\n");
 
  for ( i = 0 ; i < n ; i++ )
     printf("%d\n", array[i]);
 
  return 0;
}
