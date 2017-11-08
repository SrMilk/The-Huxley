#include <stdio.h>
#include <ctype.h>
#include <string.h>
char *forma(char *pnt){
	
	int i;
	
	for(i=0;i<strlen(pnt);i++){
		pnt[i] = toupper(pnt[i]);
	}
	
	return pnt;
}

int main(){
	char opc[10], ropc[2];
	int i, h;
	
	float valor = 0;
	
	for(i=0;i<7;i++){
		scanf("%s%*c", opc);
		
		if(strcmp(forma(opc), "REVISTA") == 0){
			valor += 750;
			
		}else if(strcmp(forma(opc), "OUTDOOR") == 0){
			valor += 1500;
		}else if(strcmp(forma(opc), "RáDIO") == 0){
			scanf("%s%*c", ropc);
			
			if(strcmp(forma(ropc), "AM") == 0){
				valor += 300;
			}else if(strcmp(forma(ropc), "FM") == 0 ){
				valor += 500;
			}
		}else if(strcmp(forma(opc), "TV") == 0){
			
			scanf("%d%*c", &h);
			
			if(h<=20){
				valor += 1200;
			}else{
				valor += 2000;
			}
		}
	}
	
	printf("%.2f", valor);
}
