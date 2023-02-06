#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int opcount = 0;

void getPrimeFactors(int n, int a[50])  
{  
    int count,lmt = 0;
    
    for(count = 2; n > 1; count++)  
    {  
        while(n % count == 0)  
        {  
            a[lmt++] = count;
            n = n / count;  
        }  
    }  
    printf("\n");  
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
        opcount++;
        if(a[x1]==b[x2]){
            gcd = gcd * a[x1];
            x1++;
            x2++;
        }
        else if(a[x1] < b[x2]){
            x1++;
            x2++;
        }
        else{
            x2++;
            x1++;
        }
    }
    printf("GCD of the given numbers is: %d\n", gcd);
    printf("The operation count is: %d",opcount);

} 
