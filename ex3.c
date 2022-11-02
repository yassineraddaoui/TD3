#include<stdio.h>
#include<string.h>

  void saisir2(char *mot){
    printf("STRING : ");
    gets(mot);

 }
 int palindrome (char *mot){
     int i=0,j=strlen(mot)-1;
    int bl=1;
    while(i<=j&&bl){
        if (mot[i]==mot[j]){
            i++;
            j--;
        }
        else
            bl=0;
    }
    if(bl==1)
        printf("PALINDROME");
    else
        printf("NON PALINDROME");

    return bl;
 }
void main(){
    char *mot[20];
    saisir2(mot);
    palindrome(mot);
}
