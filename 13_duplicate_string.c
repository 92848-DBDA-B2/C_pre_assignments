#include<stdio.h>
#include<string.h>
int main()
{


char *str[10]={"renu","simba","renu","popeye"};
int n=sizeof(str)/sizeof(str[0]);
for (int i = 0; i < n-1; i++)
{
    for (int j = 1; j < n; j++)
    {
      if(strcmp(str[i],str[j])==0)
        {
            printf("found the duplicate");
            printf("%s",str[i]);
            
        }
    }
    
    

}



    return 0;

}