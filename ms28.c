#include<stdio.h> 
main() 
{ 
    char outline[50]; 
    char one[7],two[7],four[7],five[7]; 
    int three; 
    sprintf(outline,"this is %d times %s \n",10,"charlie"); 
    printf("%s",outline); 
    sscanf(outline,"%s %s %d %s %s",&one,&two,&three,&four,&five); 
    printf("%s",one); 
    printf("%s",two); 
    printf("%d",three); 
    printf("%s",four); 
    printf("%s",five); 
} 

