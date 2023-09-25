#include <stdio.h>


#include<string.h>


#define Maxlength 100


#include"String.h"



void main(void)


{


       String     myString1 , myString2 , myString3;


       int i,start=0;


       printf("Ö÷´®String1\n");


       scanf("%s",myString1.str );


       printf("×Ó´®1String2\n");


       scanf("%s",myString2.str);


       printf("×Ó´®2String3\n");


       scanf("%s",myString3.str);


       myString1.length=strlen(myString1.str);


       myString2.length=strlen(myString2.str);


       myString3.length=strlen(myString3.str);


       if(Replace(&myString1,start,myString2,myString3)==0)


              printf("ä¸æˆåŠŸ\n");


       else


              for(i=0;i<myString1.length ;i++)


              printf("%c",myString1.str[i]);


}
