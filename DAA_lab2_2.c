#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void getPrimeFactors(int n, int a[50]){
    int i,j,isPrime,lmt=0;
    for(i=2;i<n;i++){
        if(n%i==0){
            isPrime = 1;
            for(j=2;j<=i/2;j++){
                if(i%j==0){
                    isPrime = 0;
                    break;


                }
            }
            if(isPrime==1){
               a[lmt++] = i;
               printf("%d\n",i);
            }
        }

    }
}


 int main(){
    int m,n,a[50],b[50],gcd = 1,x1=0,x2=0;
    printf("Enter First number");
    scanf("%d",&m);
    printf("Enter Second number");
    scanf("%d",&n);
    getPrimeFactors(m,a);
    getPrimeFactors(n,b);
    while(a[x1]!=0 && b[x2]!=0){
        if(a[x1]==b[x2]){
            gcd = gcd * a[x1];
            x1++;
            x2++;
        }
        else if(a[x1] < b[x2])
            x1++;
        else
            x2++;
    }
    printf("GCD of the given numbers is: %d", gcd);

} 