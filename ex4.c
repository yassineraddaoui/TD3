#include<stdio.h>
#include<string.h>

 char saisir_caractere(){
     char ch;
    printf("caractere: ");
    ch=getchar();
    return ch;
 }
 void supprimer_caracter(char* mot,char c){
    for(int i=0 ;mot[i];i++){
        if(mot[i]==c){
            for(int j=i;mot[j];j++){
                mot[j]=mot[j+1];
            }
                        i--;
        }
    }

 }
 void main(){
    char mot[1000],c;
    printf("STRING : ");
    gets(mot);
    c=saisir_caractere();
    supprimer_caracter(mot,c);
    printf("%s",mot);
 }
