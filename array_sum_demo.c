#include<stdio.h>
#include<stdlib.h>

//this demo prints the sum of array A and also takes array inputs

int sumArray(int num, int a[])
    {
        int j;
        int sum;

        sum=0;
        for(j=0;j<num;j++){
            sum+=a[j];}
    
     return sum;

    }

int main(){
    int n, i,x,sum;
    printf("enter the number of elements you want in the array \n");
    scanf("%d", &n);

    int a[n];

    for(i=0;i<n;i++){
        printf("Enter %d element of array:",(i+1));
        scanf("%d",&a[i]);
    }

    printf("Till what element do you want the sum \n");
    scanf("%d",&x);

    sum = sumArray(x,a);
    printf("The sum of the first %d elements is: %d \n", x, sum);

}

    

