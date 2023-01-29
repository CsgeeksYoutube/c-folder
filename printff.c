#include<stdio.h>
void main()
// f and e type conversion
// {
//     double x=5000, y=0.0025;
//     printf("%f %f %f %f\n\n",x,y,x+y,x/y);
//     printf("%e %e %e %e\n\n",x,y,x+y,x/y);
// }

//g type conversion
// {
//     int i=123456;
//     float x = 345.678;
//     printf("%3d %5d %8d\n",i,i,i);
//     printf("%3f %5f %13f\n",x,x,x);
//     printf("%3g %5g %8g\n",x,x,x);

// }
// precision
// {
//     float x = 345.678;
     
//      printf("%3f %5.2f %13.1f\n",x,x,x);
//      printf("%3e %5.5e %8.3e\n",x,x,x);

// }
{
    char line[20]="hexadecimal";
    printf("%s %s %s \n",line,line,line);
    printf("%10s %15s %5.2s %.5s",line,line,line,line);
}
//flags
// {
//     int i=123 , k=0xa08c, j=01777;
//     float x=12.0,y=-3.3;
//     printf("**%6d %7.0f %10.1e**\n\n",i,x,y);
//     printf("**%-6d %-7.0f %-10.1e**\n\n",i,x,y);
//     printf("**%+6d %+7.0f %+10.1e**\n\n",i,x,y);
//     printf("**%-+6d %-+7.0f %-+10.1e**\n\n",i,x,y);
//     printf("**%7.0f %#7.0f %7g %#7g**\n\n",x,x,y,y);
//     printf("**%8o %8x %#8o %#8X**\n\n",j,k,j,k);

// }
{
     char a[80]="Sada Shiv";
     printf("**%15s %-15s %6.4s**\n\n",a,a,a);
     
}