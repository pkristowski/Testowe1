
#include<stdio.h>
main(){
  int a,b,c,d;
  printf("Podaj cztery liczby\n");
  scanf("%d %d %d %d",&a,&b,&c,&d);
  while(a<b){
    a++;
  }
  while(a<c){
    a++;
  }
  while(a<d){
    a++;
  }
  printf("Liczba %d jest największa, w mordę jeża!\n",a);
}
