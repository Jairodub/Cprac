#include <stdio.h>

// COUNT WORDS IN A FILE AND MAKE VERTICAL HISTOGRAM

int main(){
    int histArr [20]={0};
    int c;
    int inWord, chars=0;

    // make word count array
    while((c = getchar()) != EOF){ 
        if(c == ' '||c == '\n' || c == '\t' ){ //whenever the character in focus is not blank
            if(chars != 0 )// only count length of non-empty words  
                histArr[chars] += 1;
            chars = 0;
            inWord=0;
        }else{
            inWord=1;
            ++chars;
        }
    }

    // print vertical histogram
    for(int i = 0; i < 20; i++){
        for(int j = 0; j <= 20; j++){
            if(j==0){ // print scale on the left
                printf("%d", histArr[i]);
            }
            if(j<histArr[i]){
                printf("1");
            }
            else(printf(" "));
            if(j==20) printf("\n");
        }
    }

}
