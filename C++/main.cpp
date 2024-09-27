//#include <iostream>

//using namespace std;

//int main()
//{
    // string namaLengkap;
    // string nim;

    // cout << "Masukkan nama lengkap anda: ";
    // getline(cin, namaLengkap);

    // cout << "Masukkan NIM anda: ";
    // getline(cin, nim);

    // cout << "\nNama lengkap anda adalah: " << namaLengkap << endl;
    // cout << "NIM anda adalah: " << nim << endl;

    // return 0;
    //string namaDepan;
    //string nim;

    //cout << "Masukkan nama pertama anda: ";
    //getline(cin, namaDepan);

    //cout << "Masukkan NIM anda: ";
    //getline(cin, nim);

    //cout << "\nNama pertama anda adalah: " << namaDepan << endl;
    //cout << "NIM anda adalah: " << nim << endl;

    //return 0;
    //int bil1 = 3, bil2 = 4, hasil1;
    //float bil3 = 3.0, bil4 = 4.0, hasil2;

    //hasil1 = bil1 + bil2;
    //cout << hasil1 << endl;
    //hasil1 = bil1 - bil2;
    //cout << hasil1 << endl;
    //hasil1 = bil1 * bil2;
    //cout << hasil1 << endl;
    //hasil1 = bil1 / bil2;  
    //cout << hasil1 << endl;
    //hasil1 = bil1 % bil2;   
    //cout << hasil1 << endl;

    //hasil2 = bil3 / bil4;   
    //cout << hasil2 << endl;
    //return 0;
    //int bil1 = 2, bil2 = 3, hasil;

    //hasil = bil1 < bil2 && bil1 < bil2;
    //cout << hasil << endl;

    //hasil = bil1 > bil2 || bil1 < bil2;
    //cout << hasil << endl;

    //hasil = !(bil1 > bil2) || bil1 < bil2; 

    //cout << hasil << endl;

    //return 0;

    //int nilai;
    //cin >> nilai;

    //if (nilai > 80) {
      //  cout << "A" << endl;
    //} else {
      //  cout << "Bukan A" << endl;
   // }

    //return 0;

    //int a, b, bilangan;
    //cout << "Masukkan batas bawah: ";
    //cin >> a;
    //cout << "Masukkan batas atas: ";
    //cin >> b;

    //for (bilangan = a; bilangan <= b; bilangan++) {
      //  cout << "Bilangan " << bilangan << endl;
    //}

    //return 0;

 
    //int bilangan, asli, jumlah;
    //cout << "Masukkan bilangan asli: ";
    //cin >> asli;

    //bilangan = 1;
    //jumlah = 0;
    //while (bilangan <= asli) {
      //  if (bilangan % 2 == 0) {
        //    jumlah += bilangan;
        //}
        //bilangan++;
    //}

    //cout << "Jumlah bilangan genap: " << jumlah << endl;
    //return 0;
    
//}

#include <iostream>
using namespace std;

// void operasi_float() {
//     float a, b;

//     // Input dua bilangan float
//     cout << "Masukkan bilangan pertama: ";
//     cin >> a;
//     cout << "Masukkan bilangan kedua: ";
//     cin >> b;

//     // Operasi matematika
//     float penjumlahan = a + b;
//     float pengurangan = a - b;
//     float perkalian = a * b;
//     float pembagian = (b != 0) ? a / b : 0; // Cek pembagian dengan nol

//     // Output
//     cout << "Hasil penjumlahan: " << penjumlahan << endl;
//     cout << "Hasil pengurangan: " << pengurangan << endl;
//     cout << "Hasil perkalian: " << perkalian << endl;
//     if (b != 0)
//         cout << "Hasil pembagian: " << pembagian << endl;
//     else
//         cout << "Pembagian tidak dapat dilakukan (pembagi 0)" << endl;
// }

// int main() {
//     operasi_float();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// string ubah_ke_tulisan(int angka) {
//     string satuan[] = {"", "Satu", "Dua", "Tiga", "Empat", "Lima", "Enam", "Tujuh", "Delapan", "Sembilan"};
//     string belasan[] = {"Sepuluh", "Sebelas", "Dua belas", "Tiga belas", "Empat belas", "Lima belas",
//                         "Enam belas", "Tujuh belas", "Delapan belas", "Sembilan belas"};
//     string puluhan[] = {"", "", "Dua puluh", "Tiga puluh", "Empat puluh", "Lima puluh", "Enam puluh", 
//                         "Tujuh puluh", "Delapan puluh", "Sembilan puluh"};
    
//     if (angka == 0) {
//         return "Nol";
//     } else if (angka <= 9) {
//         return satuan[angka];
//     } else if (angka >= 10 && angka <= 19) {
//         return belasan[angka - 10];
//     } else if (angka < 100) {
//         return puluhan[angka / 10] + (angka % 10 != 0 ? " " + satuan[angka % 10] : "");
//     } else if (angka == 100) {
//         return "Seratus";
//     }

//     return "Diluar jangkauan";
// }

// int main() {
//     int angka;
//     cout << "Masukkan angka (0-100): ";
//     cin >> angka;

//     if (angka >= 0 && angka <= 100) {
//         cout << angka << " : " << ubah_ke_tulisan(angka) << endl;
//     } else {
//         cout << "Angka di luar jangkauan." << endl;
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

void buat_pola(int n) {
    // Loop untuk setiap baris
    for (int i = n; i > 0; i--) {
        // Cetak angka menurun
        for (int j = i; j > 0; j--) {
            cout << j << " ";
        }
        
        // Cetak tanda "*"
        cout << "*";

        // Cetak angka menaik
        for (int j = 1; j <= i; j++) {
            cout << " " << j;
        }

        // Pindah ke baris baru setelah setiap iterasi
        cout << endl;
    }
}

int main() {
    int input;
    cout << "Masukkan angka: ";
    cin >> input;

    // Panggil fungsi untuk mencetak pola
    buat_pola(input);

    return 0;
}







