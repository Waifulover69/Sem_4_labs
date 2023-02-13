#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void String_search(char *pat,char* text){
    int m = strlen(pat);
    int n = strlen(text);

    for(int i=0;i<n;i++){
        int j;
        for(j=0;j<m;j++)
            if(text[i+j]!=pat[j])
                break;
        if(j==m)
            printf("Pattern found at index %d",i);


        
    }
}


int main(){
    char pat[15],wor[15];
    printf("Enter the pattern");
    gets(pat);
    printf("Enter the text");
    gets(wor);
    String_search(pat,wor);
    return 0;
}
