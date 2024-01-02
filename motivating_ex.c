#include <stdio.h>
#include <string.h>

char sensitive_data[20];

void sink_mtd(){
    char dest[50];
	memcpy(dest,sensitive_data,sizeof(sensitive_data));
}

int auth(){
		char data[100];
		fgets(data,sizeof(data),stdin);
		strcpy(sensitive_data,data);
		sink_mtd();	
}

void main(){
	auth();

	
}