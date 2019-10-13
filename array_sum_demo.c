#include<stdio.h>
#include<stdlib.h>

//this demo prints the sum of array A and also takes array inputs


int main(){
    int n, i,x,sum=0,a[100];
    printf("enter the number of elements");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d elements of array:",(i+1));
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        sum+=a[i];
        
    }
    printf("The sum of the first elements is: %d \n", sum);

}

    

