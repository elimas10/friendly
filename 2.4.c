#include <stdio.h>
#include <math.h>

int b(int A[],int n)
{
     int i ;
     if(n<=10)
        for(i=0;i<10 ;i++)
        {
        
          if(A[i]==1 && n==(i+1))
                    return 1;
                else
                    return 0 ;
         }
         
}

    else if(n>10)
     {
         int t;
         for(int i = 0;i < 10 ;i++)
         {
             if(A[i]==10)
             {
                 t=i+1;
                 break;
             }
         }
         
         return b(A[],n-t) ;
         
     }

}

 
 int main()
 {
 
  int i,n,A[10] ;
  scanf("%d",&n) ;
     for(i=0;i<10;i++){
    scanf("%d",&A[i]);
 }
     if(b(A[],n)){
         printf("%c",beautifull) ;
         }
      else
          printf("%c" ,ugly) ;
     return 0 ;
 }
