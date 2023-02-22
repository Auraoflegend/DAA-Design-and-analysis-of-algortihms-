#include<stdio.h>

 int linearsearch(int a[],int s,int key)
 {
    int i;
    for(int i=0;i<s;i++)
    {
        if(a[i]==key)
        return i;
    }

 }

int main(){

    int m;
    scanf("%d",&m);
    for ( int i = 0; i < m; i++)
    {
        int s;
        scanf("%d",&s);

        int a[s];
        for(int i=0;i<s;i++)
        {
            scanf("%d",&a[i]);
        }
        int k;
        scanf("%d",&k);

        int r=linearsearch(a,s,k);

        printf("%d",r);
    }
    
    
    return 0;
}





