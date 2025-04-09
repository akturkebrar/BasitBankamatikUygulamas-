#include <stdio.h>
#include <stdlib.h>

/* Basit bankamatik uygulaması*/

int main(int argc, char *argv[]) {
 
  int bakiye=3000;
  int tutar, islem;
  printf("para cekme icin 1| para yatirma icin 2| bakiye sorgulama icin 3| kart iadesi icin 4: ");
  printf("islem seciniz: ");
  scanf("%d", &islem);
  
  
  switch(islem){
  	case 1:
  	printf("bakiye: %d \n",bakiye);
  	printf("cekmek istediginiz tutari giriniz: ");
  	scanf("%d", &tutar);
  	if(tutar>1000){
  		printf("yetersiz bakiye. ");
  		
	  }
  	bakiye=bakiye-tutar;
  	printf("yeni bakiyeniz: %d",bakiye);
  	break;
  	case 2:
  		printf("yatirmak istediginiz tutari giriniz: ");
  		scanf("%d",&tutar);
  		bakiye=bakiye+tutar;
  		printf("yeni bakiyeniz: %d",bakiye);
  	break;
  	case 3:
  		printf("bakiyeniz %d",bakiye);
  	break;
  	case 4:
  		printf("kartinizi alabilirsiniz: ");
  	break;
   } 
   
return 0;
}