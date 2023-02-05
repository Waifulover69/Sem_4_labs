#include<stdio.h>
#include<math.h>
#include<stdlib.h>

unsigned int ConGCD(unsigned int m, unsigned int n){
    unsigned int t;
    int opcount = 0;
    if(m>n){
        t = n;
    }
    else{
        t = m;
    }

    while(t!=0){
        if(m%t==0){
            if(n%t==0){
                return t;
                break;
            }
        }
        t = t - 1;
        opcount++;
    }


}

int main(){
    unsigned int m,n;
    printf("Enter the two numbers whose GCD has to be calculated:");
    scanf("%d",&m);
    scanf("%d",&n);
    printf("The GCD of the given two numbers is: %d",ConGCD(m,n));
    

}
