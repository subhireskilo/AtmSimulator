#include <stdio.h>

int main() {
    int paracekme, parayatirma, islem;
    int bakiye = 0;
    int cikis = 0; // Döngüyü kontrol etmek için bayrak (flag) degiskeni

    printf("****************************\n");
    printf("ATM SIMULASYONUNA HOS GELDINIZ\n");
    printf("****************************\n");

    do {
        // Menü her islemden sonra tekrar gösterilir
        printf("\nYapmak istediginiz islemi giriniz\n");
        printf("1-Para Cekme\n2-Para Yatirma\n3-Bakiye Sorgulama\n4-Cikis\n");
        scanf("%d", &islem);

        switch(islem) {
            case 1:
                printf("Cekmek istediginiz tutari giriniz: ");
                scanf("%d", &paracekme);
                // Bakiye kontrolü
                if(paracekme > bakiye) {
                    printf("Bakiyeniz yetersiz!\n");
                }
                else {
                    bakiye -= paracekme;
                    printf("%d TL cekildi. Kalan bakiye: %d TL\n", paracekme, bakiye);
                }
                break;

            case 2:
                printf("Yatirmak istediginiz tutari giriniz: ");
                scanf("%d", &parayatirma);
                bakiye += parayatirma; // Bakiyeyi artir
                printf("%d TL yatirildi.\n", parayatirma);
                break;

            case 3:
                printf("Guncel Bakiyeniz: %d TL\n", bakiye);
                break;

            case 4:
                printf("Cikis yapiliyor, iyi gunler...\n");
                cikis = 1; // Döngüden çikisi saglar
                break;

            default:
                // 1-4 disindaki girisler için uyari
                printf("Gecersiz islem girdiniz!\n");
                break;
        }
    } while(cikis != 1); // cikis 1 olmadigi sürece döngü devam eder

    return 0;
}
