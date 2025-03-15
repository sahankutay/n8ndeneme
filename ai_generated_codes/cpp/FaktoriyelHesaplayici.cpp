// Dosya_Adi: FaktoriyelHesaplayici.cpp
// kod_dili: C++

#include <iostream>

/*
 * Faktöriyel fonksiyonu, verilen bir tam sayının faktöriyelini hesaplar.
 * Bir sayının faktöriyeli, 1'den o sayıya kadar olan tüm tam sayıların çarpımıdır.
 * Örneğin 5! = 5 * 4 * 3 * 2 * 1 = 120.
 *
 * Parametre:
 *    n - Faktöriyeli hesaplanacak tam sayı
 * Dönüş:
 *    Faktöriyeli temsil eden bir tam sayı
 */
int faktoriyel(int n) {
    if (n < 0) {
        std::cerr << "Negatif sayilarin faktöriyeli hesaplanamaz!" << std::endl;
        return -1;  // Negatif değer hatalı bir girdi olduğunu belirtir
    }
    if (n == 0) {
        return 1; // Matematiksel olarak 0! = 1 tanımlanmıştır
    }
    int sonuc = 1;
    for (int i = 1; i <= n; ++i) {
        sonuc *= i;
    }
    return sonuc;
}

int main() {
    int sayi;
    std::cout << "Lütfen faktöriyelini hesaplamak istediğiniz sayıyı giriniz: ";
    std::cin >> sayi;

    int sonuc = faktoriyel(sayi);
    if (sonuc != -1) {
        std::cout << sayi << "! = " << sonuc << std::endl;
    }
    
    return 0;
}