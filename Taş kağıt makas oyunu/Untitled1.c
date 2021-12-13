#include <stdio.h>
#include <time.h>

int main(){
  	
  int sayi,tahmin,t=1,k=2,m=3,i,bilgisayar=0,siz=0;
  
    printf("Tas=1 Kagit=2 Makas=3 ");
    
   srand(time(NULL));


     for(i=1;i<4;i++)
	 {
	 
	 
	     sayi=rand()%3+1;
	 	
	 	printf(" \n\nSeciniz: ");
	 	scanf("%d",&tahmin);
	
	
	if(tahmin>3 || tahmin<1)
	{
		printf("Hatali giris tekrar deneyin.");
		break;
	}
	
	
	
	   if(sayi==1)
		 {
		 	 
			   if(tahmin=1)
		 	{
		 		printf("Berabere\n");
		 		bilgisayar=bilgisayar+1;
		 		siz=siz+1;
		 		printf("Bilgisayar: %d  Siz: %d",bilgisayar,siz);
		 		
		 		
			 }
		 	
		 	 else if(tahmin=2)
		 	{
		 		printf("Puan aldiniz.\n");
		 		siz=siz+1;
		 		printf("Bilgisayar: %d  Siz: %d",bilgisayar,siz);
		 		
		 		
			 }
		 else	if(tahmin=3)
		 	{
		 		printf("Bilgisayar puan aldi.\n");
		 		bilgisayar=bilgisayar+1;
		 		printf("Bilgisayar: %d  Siz: %d",bilgisayar,siz);
		 		
			 }
		 	
	 
		 
			  } 	
	 	else if(sayi==2)
	 	{
	 		if(tahmin=1)
	 		{
	 			printf("Bilgisayar puan aldi.\n");
	 			bilgisayar=bilgisayar+1;
	 			printf("Bilgisayar: %d  Siz: %d",bilgisayar,siz);
			 }
	 		
	 	else	if(tahmin=2)
	 		{
	 			printf("Berabere\n");
	 			siz=siz+1;
	 			bilgisayar=bilgisayar+1;
	 			printf("Bilgisayar: %d  Siz: %d",bilgisayar,siz);
	 		
			 }
	 	else	if(tahmin=3)
	 		{
	 			printf("Puan aldiniz.\n");
	 			siz=siz+1;
	 			printf("Bilgisayar: %d  Siz: %d",bilgisayar,siz);
	 	
			 }
		
	 	
		 }
	 	else  if(sayi==3)
	 	 {
	 	 	 if(tahmin=1)
	 	 	{
	 	 		printf("Puan aldiniz.\n");
	 	 		siz=siz+1;
	 	 		printf("Bilgisayar: %d  Siz: %d",bilgisayar,siz);
			  }
	 	else 	if(tahmin=2)
	 	 	{
	 	 		printf("Bilgisayar puan aldi.\n");
	 	 		bilgisayar=bilgisayar+1;
	 	 		printf("Bilgisayar: %d  Siz: %d",bilgisayar,siz);
			  }
	 	 else	if(tahmin=3)
	 	 	{
	 	 		printf("Berabere\n");
	 	 		siz=siz+1;
	 	 		bilgisayar=bilgisayar+1;
	 	 		printf("Bilgisayar: %d  Siz: %d",bilgisayar,siz);
			  }
	
	 
	 	 	
		  }
	
	}  
  
  	 if(bilgisayar<siz)
  	{
  		printf("\n\n Tebrikler kazandiniz <3 :)\n");
  		
	  }
  	
  	else if(siz<bilgisayar)
  	{
  		printf("\n\n Kaybettiniz :(\n");
  
	  }
  	
    else if(siz=bilgisayar)
	{
		printf("\n\n Berabere bitti\n ");
	
	  }  
    system("pause");
	return 0;
}
