
#include <stdio.h>
#include <string.h>

int occ(char *s,char c)
{
    int i,count=0;
     for(i=0;s[i]!='\0';i++)
    {
    	if(s[i]==c)
    	{
          count++;
		}
 	}
 	return count;
 }
 char saisir_caractere(){
     char ch;
    printf("caractere: ");
    ch=getchar();
    return ch;
 }
  void saisir2(char *mot){
    printf("STRING : ");
    gets(mot);

 }

int main()
{

    char s[1000],c;
	int count=0;
    saisir2(s);
    c=saisir_caractere();

    printf("%c se repete %d fois dans %s \n ",c,occ(s,c),s);

	return 0;
}


