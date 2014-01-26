#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    while(1)
    {
	
    int G=0,flag=1;
    char str[257];
    if(!scanf("%s",str))break;
    
    int L=strlen(str);
    for(int i=L-1;i>=0;i--)
    {
       if(str[i]>=112&&str[i]<=122)
       {
            G++;       
       }
       else if(str[i]=='N')
       {
           if(G==0)
           flag=0;
       }
       
       else if(str[i]=='C'||str[i]=='D'||str[i]=='E'||str[i]=='I')
       {
          if(G>=2)
          {
               G-=1;
          }
          else
          {
              flag=0;
          }
       }
       else
       {
           flag==0;
       }
    }
    if(G==1&&flag==1){printf("YES\n");}
    else{printf("NO\n");}
    }
    return 0;
}
