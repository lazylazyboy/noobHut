#include <stdio.h>

int main()
{
  double cm=0;
  double foot=0,inch=0;
  scanf("%lf",&cm);
  inch = cm/(100*0.3048*(13.0/12.0));
  foot=12*inch;
  printf("%d %d",(int)foot,(int)inch);
  return 0;
}

