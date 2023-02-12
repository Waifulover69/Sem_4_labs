#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void String_match(char a[15],char c[15]){
    int n = strlen(a);
    int m = strlen(c);

    for(int i=0;i<m-n;i++){
        for(int j=0;j<n;j++){
            if(a[j]!=c[i+j]){
                break;
            }
            if(j==n){
                printf("Pattern found");

            }
        }
    }
    


}


int main(){
    char a[15],c[15];
    printf("Enter the pattern");
    gets(a);
    printf("Enter the text");
    gets(c);
    String_match(a,c);
    return 0;
}