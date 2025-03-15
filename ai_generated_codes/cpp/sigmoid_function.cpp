// Dosya_Adi: sigmoid_function.cpp
// kod_dili: C++

#include <cmath> // exp fonksiyonunu kullanabilmek için cmath kütüphanesini dahil ediyoruz.

/**
 * Sigmoid fonksiyonunu hesaplayan fonksiyon.
 * @param x Girdi değeri.
 * @return Sigmoid fonksiyonunun sonucu.
 */
double sigmoid(double x) {
    // e^(-x) kullanarak sigmoid fonksiyonunun değerini hesaplar.
    return 1.0 / (1.0 + std::exp(-x));
}

/**
 * Main fonksiyonu, örnek girdilerle sigmoid fonksiyonunu test etmek için kullanılabilir.
 */
int main() {
    // Örnek kullanım:
    double girdi = 0.5;
    double sonuc = sigmoid(girdi);
    std::cout << "sigmoid(" << girdi << ") = " << sonuc << std::endl;
    return 0;
}