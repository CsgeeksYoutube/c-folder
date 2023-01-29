#include<stdio.h>
#include<ctype.h>
void main(){
    int count,tag;
    char letter[80];
    for(count=0; (letter[count] =getchar())!= '\n';++count);
    tag=count;
    for(count=0;count < tag;++count)
        putchar(toupper(letter[count]));

}