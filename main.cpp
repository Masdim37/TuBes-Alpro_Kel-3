#include <iostream>

using namespace std;

//float TotalHarga;
//void diskon_ppn(float diskon, float ppn, float TotalHarga){
//    float diskon10 = 0.1 * TotalHarga;
//    float diskon20 = 0.2 * TotalHarga;
//    float ppn = 0.1 * TotalHarga;
//    cout << "Jumlah biaya : " << TotalHarga + ppn << endl;
//}

int main(){
    string datadiri[10], menu[50];
    int HargaBeef[3] = {70000, 85000, 88000, 97000};
    int HargaChicken[3] = {20000, 40000, 45000, 50000};
    int HargaFish[2] = {47000, 50000, 85000};
    int HargaDrinks[5] = {3000, 5000, 10000, 10000, 15000, 15000};
    int kategori, jumlah, PilihBeef;

    cout << "---------JAVASTEAK APP-----------------" << endl;
    cout << "Selamat datang di aplikasi JAVASTEAK || JAGONYA SEAK!!" << endl;
    cout << endl;
    cout << "Sebelum mulai, yuk masukin data diri kamu!" << endl;
    cout << "Nama = "; getline(cin, datadiri[1]);
    cout << "Tanggal lahir (dd/mm/yy) = "; getline(cin, datadiri[2]);
    cout << "nomor Telepon = "; getline(cin, datadiri[3]);
    cout << "Email = "; getline(cin, datadiri[4]);
    cout << "Alamat = "; getline(cin, datadiri[5]);
    cout << endl;
    cout << "Sip, data diri kamu sudah tersimpan!" << endl;
    cout << endl;

    cout << "---------------------JAVASTEAK APP--------------------" << endl;
    cout << "Selamat datang di aplikasi JAVASTEAK || JAGONYA STEAK!!" << endl;
    cout << endl;
    cout << "-----MAIN MENU----- " << endl;
    cout << "1. Beef" << endl;
    cout << "2. Chicken" << endl;
    cout << "3. Fish" << endl;
    cout << "4. Drinks" << endl;
    cout << "Mau makan apa? [1-4] = "; cin >> kategori;
    cout << endl;

    switch(kategori){
    case 1:
        cout << "-----BEEF MENU-----" << endl;
        cout << "1. Sirloin lokal                                     = Rp. 70.000" << endl;
        cout << "   Daging sapi lokal has luar yang mengandung lemak" << endl;
        cout << "2. Sirloin Aussie                                    = Rp. 85.000" << endl;
        cout << "   Daging sapi impor has luar yang mengandung lemak" << endl;
        cout << "4. Rib eye aussie                                    = Rp. 88.000" << endl;
        cout << "   Daging sapi yang berasal dari tulang iga dan mengandung urat" << endl;
        cout << "3. Secondary cut wagyu                               = Rp. 97.000" << endl;
        cout << "   Daging sapi jepang (black angus) berkualitas dan bertekstur lembut" << endl;
        cout << "Pilihanmu [1-4]: "; cin >> PilihBeef;
        if(PilihBeef == 1){
            menu[i] = ""
        }
        cout << "Jumlah makanan yang ingin dipesan : "; cin >> jumlah;
        cout << "Apakah anda ingin memesan makanan lainnya [Y/T] : "
        break;
    case 2:
        cout << "-------CHICKEN MENU--------" << endl;
        cout << "1. Chicken burger                                    = Rp. 20.000" << endl;
        cout << "   Burger ayam lengkap dengan french fries" << endl;
        cout << "2. Chicken steak                                     = Rp. 40.000" << endl;
        cout << "   Potongan dada ayam bermutu tanpa tepung" << endl;
        cout << "3. Chicken schnitzel                                 = Rp. 45.000" << endl;
        cout << "   Potongan dada ayam bermutu dilapisi tepung panir" << endl;
        cout << "4. Chicken gordon blue                               = Rp. 50.000" << endl;
        cout << "   Daging ayam berisikan daging sapi dan keju" << endl;
        break;
    case 3:
        cout << "-------FISH MENU-------" << endl;
        cout << "1. Fish and chips (dory)                             = Rp. 47.000" << endl;
        cout << "   Filet ikan dory yang digoreng tepung" << endl;
        cout << "2. Marlin steak                                      = Rp. 50.000" << endl;
        cout << "   Filet ikan marlin kaya akan omega 3 dan DHA" << endl;
        cout << "3. Salmon steak                                      = Rp. 85.000" << endl;
        cout << "   Filet ikan salmon berbumbu yang dipanggang" << endl;
        break;
    case 4:
        cout << "-------DRINKS MENU--------" << endl;
        cout << "1. Hot tea                                           = Rp. 3.000" << endl;
        cout << "2. Iced tea                                          = Rp. 5.000" << endl;
        cout << "3. Chocolate Milkshake                               = Rp. 10.000" << endl;
        cout << "4. Iced cola                                         = Rp. 10.000" << endl;
        cout << "5. Coffee mocchachino                                = Rp. 15.000" << endl;
        cout << "6. Coffee vanilla latte                              = Rp. 15.000" << endl;
        break;
    deafult :
        cout << "pilih kategori makanan yang tersedia" << endl;
    }


    return 0;
}
