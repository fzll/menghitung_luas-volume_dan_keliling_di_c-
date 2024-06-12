#include <iostream>
#include <cmath>
using namespace std;

int main(){

    string password;

    cout << "========= Login =========" << endl;
    cout << "Masukan password: ";
    cin >> password;

    // percabangan if/else
    if (password == "suhu"){
    	int pilihan;
    	cout << "============================================\n";
	    cout << "aplikasi penghitung luas,volume dan keliling \n";
	    cout << "============================================\n";
	    cout << "Menu: \n";
	    cout << "1. Hitung bangun datar\n";
	    cout << "2. Hitung bangun ruang\n";
	    cout << "Pilih salah satu: ";
	    cin >> pilihan;
        if (pilihan == 1) {
    		int nilai;
			    cout << "============================================\n";
			    cout << "aplikasi penghitung luas bangun datar \n";
			    cout << "============================================\n";
			    cout << "Menu: \n";
			    cout << "1. Hitung Persegi\n";
			    cout << "2. Hitung Persegi Panjang\n";
			    cout << "3. Hitung Segitiga\n";
			    cout << "4. Hitung Lingkaran\n";
			    cout << "5. Hitung jajargenjang\n";
			    cout << "6. Belah Ketupat\n";
			    cout << "7. Layang-layang\n";
			    cout << "8. Trapesium\n";
			    cout << "Pilih salah satu: ";
			    cin >> nilai;
				
			    // menggunakan percabangan if/else/if
			    if (nilai == 1) {
			    	double a,c,d;
			    	cout << "persegi \n ";
			        cout << "massukan panjang sisi: ";
			        cin >> a;
			        c= a*a;
			        cout << "luas persegi: " << c << endl;
			        d= 4*a;
			        cout << "keliling persegi: " << d << endl;
			    } else if (nilai == 2) {
			    	double a,b,c,d;
			    	cout << "persegi panjang \n ";
			        cout << "massukan sisi pertama: ";
			        cin >> a;
			        cout << "massukan sisi kedua : ";
			        cin >> b;
			        c= a*b;
			        cout << "luas persegi panjang: " << c << endl;
			        d= (2*a)+(2*b);
			        cout << "keliling persegi panjang: " << d << endl;
			    } else if (nilai == 3) {
			    	double a,b,c,d;
					cout << "segitiga \n"; 
			        cout << "massukan panjang alas: ";
			        cin >> a;
			        cout << "massukan tinggi segitiga: ";
			        cin >> b;
			        c= a * b *1/2;
			        cout << "luas segitiga: " << c << endl;
			  	 } else if (nilai == 4) {
			  	 	cout << "lingkaran \n ";
			  	 	double a,b,c,d;
			        cout << "Masukkan jari-jari lingkaran: ";
			        cin >> a;
			        c =(a * 2)*3.14159;
			        cout << "Luas lingkaran: " << c << endl;
			        d= 2 * a * 3.14;
			        cout << "keliling lingkaran: " << d << endl;
        		} else if (nilai == 5) {
        			cout << "jajargenjang \n ";
			  	 	double a,b,c,d;
			        cout << "Masukkan alas: ";
			        cin >> a;
			        cout << "Masukkan tinggi: ";
			        cin >> b;
			        c =a * b ;
			        cout << "Luas jajargenjang: " << c << endl;
			        d= (2 * a)+(2 * b);
			        cout << "keliling jajargenjang: " << d << endl;
        		}else if (nilai == 6) {
        			cout << "belah ketupat \n ";
			        double diagonal1, diagonal2;
			        cout << "Masukkan panjang diagonal 1: ";
			        cin >> diagonal1;
			        cout << "Masukkan panjang diagonal 2: ";
			        cin >> diagonal2;
			        
			        double luas = (diagonal1 * diagonal2) / 2;
			        double keliling = 4 * sqrt(pow(diagonal1 / 2, 2) + pow(diagonal2 / 2, 2));
			        
			        cout << "Luas belah ketupat: " << luas << endl;
			        cout << "Keliling belah ketupat: " << keliling << endl;
			    } else if (nilai == 7) {
			    	cout << "layang-layang \n ";
			        double diagonal1, diagonal2;
			        cout << "Masukkan panjang diagonal 1: ";
			        cin >> diagonal1;
			        cout << "Masukkan panjang diagonal 2: ";
			        cin >> diagonal2;
			        
			        double luas = (diagonal1 * diagonal2) / 2;
			        double keliling = 2 * (sqrt(pow(diagonal1 / 2, 2) + pow(diagonal2 / 2, 2)));
			        
			        cout << "Luas layang-layang: " << luas << endl;
			        cout << "Keliling layang-layang: " << keliling << endl;
			    } else if (nilai == 8) {
			    	cout << "trapesium \n ";
			        double alas1, alas2, tinggi, sisiMiring;
			        cout << "Masukkan panjang alas atas: ";
			        cin >> alas1;
			        cout << "Masukkan panjang alas bawah: ";
			        cin >> alas2;
			        cout << "Masukkan tinggi trapesium: ";
			        cin >> tinggi;
			        
			        sisiMiring = sqrt(pow((alas2 - alas1) / 2, 2) + pow(tinggi, 2));
			        double luas = ((alas1 + alas2) / 2) * tinggi;
			        double keliling = alas1 + alas2 + (2 * sisiMiring);
			        
			        cout << "Luas trapesium: " << luas << endl;
			        cout << "Keliling trapesium: " << keliling << endl;
			    } else {
			    	cout << "Pilihan tidak valid.\n";
				}
    	} else if (pilihan == 2) {
		    int pilihan;
		    cout << "Pilih bangun ruang:\n";
		    cout << "1. Kubus\n";
		    cout << "2. Balok\n";
		    cout << "3. Bola\n";
		    cout << "4. Kerucut\n";
		    cout << "5. Prisma Segitiga\n";
		    cout << "6. Limas Segitiga\n";
		    cout << "7. Tabung\n";
		    cout << "Masukkan pilihan Anda : ";
		    cin >> pilihan;
		
		    if (pilihan == 1) {
		        double sisi;
		        cout << "Masukkan panjang sisi kubus: ";
		        cin >> sisi;
		        double keliling = 12 * sisi;
		        double volume = pow(sisi, 3);
		        cout << "Keliling kubus: " << keliling << endl;
		        cout << "Volume kubus: " << volume << endl;
		    } else if (pilihan == 2) {
		        double panjang, lebar, tinggi;
		        cout << "Masukkan panjang balok: ";
		        cin >> panjang;
		        cout << "Masukkan lebar balok: ";
		        cin >> lebar;
		        cout << "Masukkan tinggi balok: ";
		        cin >> tinggi;
		        double keliling = 4 * (panjang + lebar + tinggi);
		        double volume = panjang * lebar * tinggi;
		        cout << "Keliling balok: " << keliling << endl;
		        cout << "Volume balok: " << volume << endl;
		    } else if (pilihan == 3) {
		        double jari_jari;
		        cout << "Masukkan jari-jari bola: ";
		        cin >> jari_jari;
		        double keliling = 2 * M_PI * jari_jari;
		        double volume = (4.0 / 3.0) * M_PI * pow(jari_jari, 3);
		        cout << "Keliling bola: " << keliling << endl;
		        cout << "Volume bola: " << volume << endl;
		       }else if (pilihan == 4) {
		        double jari_jari, tinggi;
		        cout << "Masukkan jari-jari kerucut: ";
		        cin >> jari_jari;
		        cout << "Masukkan tinggi kerucut: ";
		        cin >> tinggi;
		
		        double keliling = 2 * M_PI * jari_jari;
		        double volume = (1.0 / 3.0) * M_PI * pow(jari_jari, 2) * tinggi;
		
		        cout << "Keliling kerucut: " << keliling << endl;
		        cout << "Volume kerucut: " << volume << endl;
		    } else if (pilihan == 5) {
		        double alas, tinggi, sisi_prisma;
		        cout << "Masukkan panjang alas segitiga prisma: ";
		        cin >> alas;
		        cout << "Masukkan tinggi segitiga prisma: ";
		        cin >> tinggi;
		        cout << "Masukkan sisi prisma: ";
		        cin >> sisi_prisma;
		
		        double keliling = 3 * alas;
		        double volume = (alas * tinggi * sisi_prisma) / 2;
		
		        cout << "Keliling prisma segitiga: " << keliling << endl;
		        cout << "Volume prisma segitiga: " << volume << endl;
		    } else if (pilihan == 6) {
		        double alas, tinggi_limas, tinggi_prisma;
		        cout << "Masukkan panjang alas segitiga limas: ";
		        cin >> alas;
		        cout << "Masukkan tinggi limas: ";
		        cin >> tinggi_limas;
		        cout << "Masukkan tinggi prisma: ";
		        cin >> tinggi_prisma;
		
		        double keliling = 3 * alas;
		        double volume = (alas * tinggi_limas) / 2 * tinggi_prisma;
		
		        cout << "Keliling limas segitiga: " << keliling << endl;
		        cout << "Volume limas segitiga: " << volume << endl;
		    } else if (pilihan == 7) {
		        double jari_jari, tinggi;
		        cout << "Masukkan jari-jari tabung: ";
		        cin >> jari_jari;
		        cout << "Masukkan tinggi tabung: ";
		        cin >> tinggi;
		
		        double keliling = 2 * M_PI * jari_jari;
		        double volume = M_PI * pow(jari_jari, 2) * tinggi;
		
		        cout << "Keliling tabung: " << keliling << endl;
		        cout << "Volume tabung: " << volume << endl;
		    } else {
		        cout << "Pilihan tidak valid!" << endl;
		    }
		} else {
	    	cout << "Pilihan tidak valid.\n";
	    }
    } else {
        cout << "Password salah, coba lagi!"  << endl;
    }

    cout << "Terima kasih sudah menggunakan aplikasi ini!" << endl;

    return 0;
 }