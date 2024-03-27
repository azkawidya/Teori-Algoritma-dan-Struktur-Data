#include <iostream>
#include <set>
using namespace std;

bool cekDuplikat(const int arr[], int panjangArr)
{
    set<int> elemen; // menyimpan elemen-elemen yang telah diperiksa

    for (int i = 0; i < panjangArr; ++i)
    {
        if (elemen.find(arr[i]) != elemen.end()) // memeriksa apakah elemen saat ini sudah ada dalam set
        {
            return true; // duplikat ditemukan
        }
        elemen.insert(arr[i]);
    }
    return false; // tidak ada duplikat
}

int main()
{
    int arr[] = {2, 1, 3, 1}; 
    int panjangArr = sizeof(arr) / sizeof(arr[0]); // menghitung jumlah elemen dalam array
    bool hasil = cekDuplikat(arr, panjangArr);

    if (hasil)
    {
        cout << "Duplikat ditemukan." << endl;
    } 
        else
    {
        cout << "Tidak ada duplikat." << endl;
    }

    return 0;
}
