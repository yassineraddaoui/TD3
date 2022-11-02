

#include <stdio.h>
#include <string.h>
#include<stdlib.h>



 char* replacer(char* ch,char*ancien,char*nouveau){

    int chL=strlen(ch);
    int ancielL=strlen(ancien);
    int nouveauL=strlen(nouveau);
    int occ=occurence(ch,ancien);
    int i=0,j=0;
    //Pray to understand the next line of code
    /*
    EXEMPLE
    ch= BONJOUR BONJOUR
    old=JOUR
    new=n
    chNew SIZE =15- (4*2)+(1*2)
    on va ajouter 1 char a ch et enlevé 4 char de ch
    +1 pour '\0'
*/
    char chNew [chL-(ancielL*occ)+(nouveauL*occ) +1];

     while(i<chL){
        if(strstr(&ch[i],ancien)==&ch[i]){
            strcpy(&chNew[j],nouveau);
            i+=ancielL; //on a remplacer  ancien avec nouveau
            j+=nouveauL; //on a met nouveau dans chNew
        }
        else{
            chNew[j]=ch[i];
            i++;
            j++;
        }
     }
    chNew[j]='\0';
    printf("Ancien : %s\nNouveau : %s\n",ancien,nouveau);

    printf("%s --> %s",ch,chNew);
    return *chNew;
}

 int occurence(char *ch ,char *ancien){
     int len=strlen(ch);
     int i=0,occ=0;
     int lenOld=strlen(ancien);

     while(i<len){
        if(strstr(&ch[i],ancien)==&ch[i]){
            occ++;
            i+=lenOld;//On a trouvé l'occurence
        }
        else{
            i++;
        }
     }

 return occ;
 }

int main()
{
    char ch[]="be tekupers";
    char ancien[]="tek";
    char nouveau[]="TEKK";
    char *chNew=replacer(ch,ancien,nouveau);
	return 0;
}


