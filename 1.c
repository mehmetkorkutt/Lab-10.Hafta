#include<stdio.h>
#include<string.h>

int main() {
	
	int islem;
	printf(" 1.Dosya olustur\n 2.Ogrenci \n 3.Yeni Kayit Ekle\n 4.Cikis\n");
	printf("Yapmak istediginiz islem numarasini giriniz.\n");
	scanf("%d",&islem);
	
	char adsoyad[50];
	char bolum[50];
	int num;
	
	
	switch(islem){
		
		case 1: {
			FILE *filep;
			filep= fopen("ogrenci_bilgi.txt","w");
			printf("Dosya olusturuldu.\n");
			break;
			
		}
		
		case 2: {
			FILE *filep;
			filep= fopen("ogrenci_bilgi.txt","a+");
			fscanf(filep,"%s %s %d",adsoyad,bolum,&num);
			printf(" %s\n %s\n %d\n",adsoyad,bolum,num);
			break;
		}
		
		case 3: {
			FILE *filep; 
			filep=fopen("ogrenci_bilgi.txt","a+");
			printf("Bilgileri giriniz:\n");
			fflush(stdin);
			fgets(adsoyad,128,stdin);
			
			fgets(bolum,128,stdin);
			scanf("%d",&num);
			
			fputs(adsoyad,filep);
			fputs(bolum,filep);
			fprintf(filep,"%d",num);
			
			
			printf("Kayit eklendi\n");
			
			break;
			
		}
		
		
	}
	
	return 0;
}
