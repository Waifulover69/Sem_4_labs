#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int Bubble_sort(int n,int a[]){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;

            }
        }
    }
}

int main(){
    int n,a[50],i,j;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter the numbers:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    Bubble_sort(n,a);
    printf("The sorted array is:");
    for(j=0;j<n;j++){
        printf("%d",a[j]);
    }
    return 0;

}