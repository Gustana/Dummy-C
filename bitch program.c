#include <stdio.h>
	int main(){
		char  name[21], alamat[41], umur[4];
		
		printf ("Insert your name :");
		fgets (name,21,stdin);
		
		printf ("Insert your age :");
		fgets (umur,4,stdin);
		
		printf ("Insert your address home :");
		fgets (alamat,41,stdin);
		
		
		printf ("So your name is %s\n", name);
		printf ("Your age is %s\n", umur);
		printf ("Your address is %s\n", alamat);
		printf ("bitch please !");
		
		return 0;
		}
