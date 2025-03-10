#include <iostream>
using namespace std;

int main(){
    struct autokocsi{
        string rendszam;
        string marka;
        string tipus;
        short int evjarat;
    } autokocsi[10];

      autokocsi[0].rendszam = "DEF-456";
      autokocsi[0].marka = "Subaru";
      autokocsi[0].tipus = "Impreza";
      autokocsi[0].evjarat = 1999;

      autokocsi[1].rendszam = "NIG-420";
      autokocsi[1].marka = "Ford";
      autokocsi[1].tipus = "Focus";
      autokocsi[1].evjarat = 2018;

      autokocsi[2].rendszam = "GAY-789";
      autokocsi[2].marka = "Volkswagen";
      autokocsi[2].tipus = "Golf";
      autokocsi[2].evjarat = 2020;

      autokocsi[3].rendszam = "JKL-101";
      autokocsi[3].marka = "Honda";
      autokocsi[3].tipus = "Civic";
      autokocsi[3].evjarat = 2017;

      autokocsi[4].rendszam = "MNO-202";
      autokocsi[4].marka = "BMW";
      autokocsi[4].tipus = "X5";
      autokocsi[4].evjarat = 2019;

      autokocsi[5].rendszam = "PQR-303";
      autokocsi[5].marka = "Mercedes";
      autokocsi[5].tipus = "C-Class";
      autokocsi[5].evjarat = 2016;

      autokocsi[6].rendszam = "STU-404";
      autokocsi[6].marka = "Audi";
      autokocsi[6].tipus = "A4";
      autokocsi[6].evjarat = 2021;

      autokocsi[7].rendszam = "VWX-505";
      autokocsi[7].marka = "Mazda";
      autokocsi[7].tipus = "CX-5";
      autokocsi[7].evjarat = 2015;

      autokocsi[8].rendszam = "KMS-690";
      autokocsi[8].marka = "Tesla";
      autokocsi[8].tipus = "Model 3";
      autokocsi[8].evjarat = 2022;

      autokocsi[9].rendszam = "BCD-707";
      autokocsi[9].marka = "Hyundai";
      autokocsi[9].tipus = "Tucson";
      autokocsi[9].evjarat = 2019;

      string rendszam1;
      bool kocsi;
      kocsi = false;
      cout << "Irjon be egy rendszamot: ";
      cin >> rendszam1;
      cout << endl;

      for (int i = 0; i < 10; i++) {
          if (rendszam1 == autokocsi[i].rendszam) {
              cout << "Marka: " << autokocsi[i].marka << endl;
              cout << "Tipus: " << autokocsi[i].tipus << endl;
              cout << "Evjarat: " << autokocsi[i].evjarat << endl;
              cout << "Rendszam: " << autokocsi[i].rendszam << endl;
              kocsi = true;
              break;
          };
      };
      if(!kocsi){
          cout << "Nincs ilyen rendszamu auto" << endl;
      };
  return 0;
};
