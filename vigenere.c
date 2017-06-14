#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
int main(int argc, string argv[])
{
    string c=(argv[1]);
    if(argc!=2||argv[1]=='\0') {
    printf("Print some words at least\n");
    return(1);
}
    for (int i = 0; i < strlen(c); i++)
    {   
        if (!isalpha(c[i]))
        {
            printf("Must be alphabet. Try again.\n");
            return 1;
        }
    } 
    printf("plaintext: ");
    string s = get_string();
    printf("ciphertext: ");
    if (argc==2) {
    for (int q = 0, n = strlen(s); q < n; q++)
       {   
        for (int l = 0, j = strlen(c); l < j; l++){
            if (isupper(s[q]))
            {
               printf("%c",((s[q]+toupper(c[l])-65)%26+65));
            }
            else if (islower(s[q]))
            {
               printf("%c",((s[q]+tolower(c[l])-97)%26+97));
            }
            else {
                printf("%c",s[l]);
            }
        }
        printf("\n");
        return(0);           
}
}
}
