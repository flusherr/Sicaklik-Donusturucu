#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
	char deger;
	float sicaklik;

	printf("\nSicaklik degeri F mi C mi? : ");
	scanf("%c", &deger);

	deger = toupper(deger);

	if (deger == 'C') {
		printf("Sicaklik degerini selsiyus degeri uzerinden yaz: ");
		scanf("%f", &sicaklik);
		sicaklik = (sicaklik * 9 / 5) + 32;
		printf("\nSicaklik Fahreneit üzerinden: %.1f", sicaklik);
	}
	else if (deger == 'F') {
		printf("Sicaklik degerini fahreneit degeri uzerinden yaz: ");
		scanf("%f", &sicaklik);
		sicaklik = ((sicaklik - 32) * 5) / 9;
		printf("\nSicaklik Selsiyus üzerinden: %.1f", sicaklik);
	}
	else {
		printf("\n %c bu harf C veya F degeri deðil!", deger);
	}
	return 0;