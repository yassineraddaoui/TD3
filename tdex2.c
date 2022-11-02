#include<stdio.h>
#include<string.h>
void saisir2(char *mot){
    printf("STRING : ");
    gets(mot);
}
void inverser(char*mot){
    int len=strlen(mot);
    char aux;
    for (int i = 0; i < len / 2; i++){
        aux=mot[i];
        mot[i]=mot[len-i-1];
        mot[len-i-1]=aux;
    }
}
void main(){
    char mot[20];
    saisir2(mot);
    inverser(mot);
    printf("Mot inversé :%s",mot);
}
