#include <stdio.h>
int main(){
int x;
printf("ta huvisagch oruulna uu:\n");
scanf("%d",&x);
printf("oruulsan %d huvisagch tani %p end bna \n ",x ,&x);
int a, b;
printf("heden huvisagch buhii massiv uusgeh ve:\n");
scanf("%d",&a);
char y[a];
printf("%d huvisagch buhii massiv ni %p bairlalaas hoishih %d byte hemjeend bairlana:" , a ,&y[a],a );
return 0;
}

