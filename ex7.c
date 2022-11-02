#include<stdio.h>
void fusionner(int t[],int t2[],int t3[],int n,int n2){
int i;
for(i=0;i<n;i++){
    *(t3+i)=*(t+i);
}
for(int j=0;j<n2;j++){
    *(t3+i+j)=*(t2+j);
}
}

void remplir(int t[],int n){
    for(int i=0;i<n;i++){
            scanf("%d",t+i);
    }
    printf("---------------\n");
}

void afficherTab(int t[],int n){

    for(int i=0;i<n;i++)
        printf("t[%d] : %d\t",i,*(t+i));

}
void main(){
int n;
int n2;
printf("Donner taille Tab1 : ");
scanf("%d",&n);
printf("Donner taille Tab2 : ");
scanf("%d",&n2);
int t[n];
int t2[n2];
int t3[n+n2];
printf("Remplissage TAB1\n");
remplir(t,n);
printf("Remplissage TAB2\n");
remplir(t2,n2);
fusionner(t,t2,t3,n,n2);
printf("T3 :\n");
afficherTab(t3,n+n2);

}

