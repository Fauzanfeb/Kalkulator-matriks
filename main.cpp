#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void penjumlahan(){
    int i, j, m, n, matriks1[10][10], matriks2[10][10], hasil[10][10];
  cout << "Masukkan jumlah baris matriks: ";
  cin >> m;
  cout << "Masukkan jumlah kolom matriks: ";
  cin >> n;
  cout << "Masukkan elemen matriks pertama: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      cin >> matriks1[i][j];
    }
  }
  cout << "Masukkan elemen matriks kedua: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      cin >> matriks2[i][j];
    }
  }
  cout << "hasil penjumlahan matriks: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      hasil[i][j] = matriks1[i][j] + matriks2[i][j];
      cout << hasil[i][j] << "\t";
    }
    cout << endl;
  }
  cout << endl;
  getch();
}

void pengurangan(){
    int i, j, m, n, matriks1[10][10], matriks2[10][10], hasil[10][10];
  cout << "Masukkan jumlah baris matriks: ";
  cin >> m;
  cout << "Masukkan jumlah kolom matriks: ";
  cin >> n;
  cout << "Masukkan elemen matriks pertama: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      cin >> matriks1[i][j];
    }
  }
  cout << "Masukkan elemen matriks kedua: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      cin >> matriks2[i][j];
    }
  }

  cout << "Hasil pengurangan matriks: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      hasil[i][j] = matriks1[i][j] - matriks2[i][j];
      cout << hasil[i][j] << "\t";
    }
    cout << endl;
  }
  cout << endl;
   getch();
}

void perkalian(){
  int matriks1[10][10], matriks2[10][10], hasil[10][10];
  int i, j, k, m, n, p, q, jumlah = 0;
  cout << "Masukkan jumlah baris matriks pertama: ";
  cin >> m;
  cout << "Masukkan jumlah kolom matriks pertama: ";
  cin >> n;
  cout << "Masukkan jumlah baris matriks kedua: ";
  cin >> p;
  cout << "Masukkan jumlah kolom matriks kedua: ";
  cin >> q;
  if(n != p){
    cout << "Matriks tidak dapat dikalikan satu sama lain.\n";
  } else {
    cout << "Masukkan elemen matriks pertama: \n";
    for(i = 0; i < m; i++){
      for(j = 0; j < n; j++){
        cin >> matriks1[i][j];
      }
    }
    cout << "Masukkan elemen matriks kedua: \n";
    for(i = 0; i < p; i++){
      for(j = 0; j < q; j++){
        cin >> matriks2[i][j];
      }
    }
    for(i = 0; i < m; i++){
      for(j = 0; j < q; j++){
        for(k = 0; k < p; k++){
          jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
        }
        hasil[i][j] = jumlah;
        jumlah = 0;
      }
    }
    cout << "Hasil perkalian matriks: \n";
    for(i = 0; i < m; i++){
      for(j = 0; j < q; j++){
        cout << hasil[i][j] << "\t";
      }
      cout << endl;
    }
    cout << endl;
     getch();
  }
}

void transpose(){
  int i, j, m, n, matriks[10][10], transpose[10][10];
  cout << "Masukkan jumlah baris matriks: ";
  cin >> m;
  cout << "Masukkan jumlah kolom matriks: ";
  cin >> n;
  cout << "Masukkan elemen matriks\n";
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      cin  >> matriks[i][j];
    }
  }
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      transpose[j][i] = matriks[i][j];
    }
  }
  cout << "Hasil Transpose Matriks: \n";
  for (i = 0; i < n; i++){
    for (j = 0; j < m; j++){
      cout << transpose[i][j] << "\t";
    }
    cout << endl;
  }
cout << endl;
 getch();
}

void determinan(){

int a[3][3],i,j;
    char pil;
    do
    {
        cout << " Program Matriks 3x3 " << endl;
        cout << endl;
        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                cout << "\tInput Baris " <<(i+1)<< " Kolom " <<(j+1)<< " = ";
                cin >>a[i][j];
            }
            cout << endl;
        }
        cout << " Matriks 3x3 " << endl;
        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                cout << " " << a[i][j] << " ";
            }
            cout<<endl<<endl;
        }

        //rumus determinan
        int satu=((a[0][0]*a[1][1]*a[2][2]+a[0][1]*a[1][2]*a[2][0]+a[0][2]*a[1][0]*a[2][1]));
        int dua=((a[0][2]*a[1][1]*a[2][0]+a[0][0]*a[1][2]*a[2][1]+a[0][1]*a[1][0]*a[2][2]));
        int determinan = satu-dua;
        cout << " Det : " <<determinan<<endl;
        cout<<endl;
        cout <<" \tApakah anda ingin mengulangi operasi lagi?    : ";
        cin >> pil;
    }while((pil=='y')||(pil=='t'));
    cout << " Selesai " <<endl;
    getch();
    }


int main()
{
    int pilihan;
    do {
        system ("cls");
        cout << "----------PROGRAM MATRIKS-----------\n";
        cout << "------FAUZAN FEBRYAN TYOWARSA-------\n";
        cout << "-----------A11.2021.13255-----------\n";
        cout << endl;
        cout << "Pilih menu : \n";
        cout << "1. Penjumlahan Matriks\n";
        cout << "2. Pengurangan Matriks\n";
        cout << "3. Perkalian Matriks\n";
        cout << "4. Transpose Matriks\n";
        cout << "5. Determinan Matriks 3x3\n";
        cout << "6. keluar\n";
        cout << "Pilihan : ";
        cin >> pilihan;
        cout <<endl;
        switch (pilihan){
        case 1 :
            penjumlahan();
            break;
        case 2 :
            pengurangan();
            break;
        case 3 :
            perkalian();
            break;
        case 4 :
            transpose();
            break;
        case 5 :
            determinan();
            break;
        case 6 :
            return 0;
        default :
            cout << "---------EXIT---------";
            break;
        }
    }while(pilihan <= 6);
    getch();
}
