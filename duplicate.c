#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int num[]={1,2,3,4,1};


int findDuplicate(int *num)
{
int dup=-1;

for(int i=0;i<5;i++)
{ 
   int val=abs(num[i]);

   if(num[val]>=0)
   {
     num[val]=-num[val];
   }
   else
   {
     dup=val;
     break;
   }
}
return dup;
}

printf("duplicate number is :%d",findDuplicate(num));
}

      

