#include <stdio.h>
#include <math.h>

int IsTheNumber ( const int N );

int main()
{
    int n1, n2, i, cnt;
				
    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for ( i=n1; i<=n2; i++ ) {
        if ( IsTheNumber(i) )
            cnt++;
    }
    printf("cnt = %d\n", cnt);

    return 0;
}



int IsTheNumber ( const int N )
{
  int ret = 0,tmpret = 0;
  int tmp=N;
  int b=0;//Î»Êý
  int a[20];
  int i;
  for (i=0;i<20;i++)
    a[i] = 10 ;
  double i2;
  for (i2= 1;i2<tmp/2; i2++ )
  {
    if (i2 == tmp/i2)
    {
       tmpret = 1;
       break;
    }
  }
  
  if (tmpret)
{
	int j=0;
  while (tmp)
  {
    b++;
    a[j] = tmp%10;
    tmp=tmp/10;
    j++;
    
  }
  int a4,a5;
  for (a4=0;a4<b;a4++)
  {
    for (a5=a4+1;a5<b;a5++)
    if (a[a4]==a[a5])
    {
    	 ret =1 ;
    	 break;
	}
     
  }
}
  return ret;
}
