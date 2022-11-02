#include<stdio.h>
#include<string.h>

  void convertir(char *mot){
    printf("STRING : ");
    gets(mot);
    for(int i=0;mot[i];i++){
        if(mot[i]>='a'&&mot[i]<='z')
        mot[i]=mot[i]-32;
    }

 }
void main(){
    char *mot[20];
    convertir(mot);
    printf("UPPERCASE : %s",mot);
}

