#include <stdio.h>
#include <stdlib.h>

typedef int* pint;

// creation of the list
 void creation (pint *T,int *n1)
     {  (*T)=NULL;
	    int i,n;
        printf("please cheak the size of the liste\n" );
        scanf("%d",&n);
        *T=(pint)malloc(n*sizeof(int));
		printf("give the elements of the list with increasing order\n");
          for ( i = 0; i < n; i++)
		     {
	          scanf("%d",&(*T)[i]);
             }


           //list display
            printf("The list is :\n");
            for(i=0;i<n;i++){printf("\n %d \n",(*T)[i]);}
        *n1=n;
    }

// reorder the list
 void reoder (pint *p , int n)
    {
	int i,x,r=0;
	while (r==0)
     	{
     		r=1;
             for (i = 0; i < n-1; i++)
                {
                  if ((*p)[i]>(*p)[i+1]) {x=(*p)[i]; (*p)[i]=(*p)[i+1]; (*p)[i+1]=x; r=0;}
                }
	    }
	    //list display after reorder
            printf("\n The list affter reorder is :\n");
            for(i=0;i<n;i++){printf("\n %d \n",(*p)[i]);}
	 }

//fonction exist
int existe (pint t,int n,int val)
    {
      //n the size of liste
      int begin,end;
      begin=0;
      end=n-1;
      while (begin<end)
      { if (val==t[begin]+t[end]) {return 1;}
           else
           {
             if (val>t[begin]+t[end]) {begin++;}
                else {end--;}
           }
       }
       return 0;
    }



int main ()
{
 pint T=NULL;
 int i,val,daily,n=0;
 creation(&T,&n);
 printf("\n The size of tour list is : %d   \n",n );
 reoder(&T,n);
 printf("\n give a  famous K : ");
 scanf("%d",&val);
 daily=existe(T,n,val);
 if (daily==1) printf("The resulte is ->>>   True ");
       else    printf("The resulte is ->>>   False");
return 0;
}
