#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,n,k,c=0;
    printf("Enter The Limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Number To Be Searched:");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {if(a[i]==k)
        {c=1;
        break;
        }}
        if (c==0)
        printf("Not Found:");
        else printf("Found");
        }


