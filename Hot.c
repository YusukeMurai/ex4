#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,r;
  int H=0;
  int T=0;
  printf("Tossing a coin...\n");
  for(i = 1;i<4;i++){
    r = rand()%2;
    printf("r =  %d\n",r);
    if(r == 0){
    printf("Round %d: Heads\n",i);
    H++;
    }else{
    printf("Round %d: Tails\n",i);
    T++;
    }
  }
  printf("Heads: %d Tails: %d\n",H,T);
}
