#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

string transform(int n, string text);

int main(int argc, string argv[]){
    
    if(argc != 2){
        printf("Usage: %s\n",argv[0]);
        return 1;
    }else{
        int n = atoi(argv[1]);
        if(n > 0){

            string text = get_string("plaintext: ");
            transform(n, text);
            printf("%s\n",text);
            
        }else{
            printf("Usage: %s\n",argv[0]);
        }
    }
}
string transform(int n, string text){
    printf("ciphertext: ");
    for(int i=0; i<strlen(text); i++){

        // text transform to number
        if(text[i] >= 65 && text[i] <= 90){
            if(text[i] + n > 90){
                text[i] = ((text[i] - 65 + n) % 26) + 65;
            }else{
                text[i] = text[i] + n;
            }
    }else{
        if(text[i] >= 97 && text[i] <= 122){
            if(text[i] + n > 122){
                text[i] = ((text[i] - 97 + n) % 26) + 97;
            }else{
                text[i] = text[i] + n;
            }
        }
    }
 }

 return text;

}


