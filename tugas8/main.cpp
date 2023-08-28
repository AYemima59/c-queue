#include <iostream>
#include <queue>
using namespace std;

int i, jumlah;

void display_queue(queue<string> q);
void quepesanan(queue<string> quepesanan);

int main()
{
    int antri, p;
    string isi, kembali, silahkan, kembaliii, isipesanan;
    queue<string> airline;
    queue<string> airlineantri;

airline:
    system("cls");

    cout << "===================================================" <<endl;
    cout << "         Selamat Datang Di Yemima's Airline!       "<< endl;
    cout << "===================================================" <<endl;
    cout << "1.(Add) Tambah & Lihat Antrian " << endl;
    cout << "2.(Call) Panggil Antrian Customer " << endl;
    cout << "3.(Size) Jumlah Antrian" << endl;
    cout << "===================================================" <<endl;
    cout << "Pilih Menu :\t ";
    cin >> antri;

    if (antri == 1)
    {
        p = 1;
        system("cls");

        cout << "Lihat Ada Berapa Tiket :\t ";
        cin >> jumlah;

        for (i = 1; i <= jumlah; i++)
        {
            cout << "\nMasukkan Nama Anda :\t ";
            cin >> isi;
            airline.push(isi);

            cout << "\nTiket Apa(Ekomomi/Bisnis) :\t ";
            cin >> isipesanan;
            airlineantri.push(isipesanan);

            cout << "Anda Berada Di Antrian : " << i << endl;
        }

        cout << "\nKembali ke menu untuk memanggil antrian" << endl;
    }
    else if (antri == 2 && p != 1)
    {
        cout << "habis" << endl;
    }
    else if (antri == 2 && p == 1)
    {
        if (airline.empty() == 1 && airlineantri.empty() == 1)
        {
            cout << "habis" << endl;
            goto ulang;
        }

        display_queue(airline);
        quepesanan(airlineantri);

    cs:

        cout << "\n\nKetik (silahkan) Untuk Mengambil Pesanan Anda : ";
        cin >> silahkan;

        if (silahkan == "silahkan")
        {
            cout << "Atas Nama |" << airline.front() << "|, Selamat Jalan |" << airlineantri.front() << "| Stay Healty!" << endl;
            airline.pop();
            airlineantri.pop();
        }
        else
        {
            cout << "Ketik |silahkan| ya!!" << endl;
            goto cs;
        }

        cout << endl;
    }
    else if (antri == 3)
    {
        cout << "banyaknya antrian saat ini : ";
        cout << airline.size();
    }
    do
    {
    ulang:
        cout << "\nkembali (y/n) : ";
        cin >> kembali;

        if (kembali == "y")
        {
            goto airline;
        }
        else if (kembali == "n")
        {
            cout << "\nTerimakasih" << endl;
        }
        else
        {
            goto ulang;
        }

    } while (kembali != "n");

    return 0;
}

void display_queue(queue<string> q)
{
    i = i / i;
    while (!q.empty())
    {
        cout << endl;
        cout << i++ << ". Atas Nama : ";
        cout << q.front();
        q.pop();
    }
    if (jumlah = 0)
    {
        cout << "habis";
    }

    cout << endl;

    return;
}

void quepesanan(queue<string> quepesanan)
{
    i = i / i;
    while (!quepesanan.empty())
    {
        cout << endl;
        cout << i++ << ". Pesanan Anda : ";
        cout << quepesanan.front();
        quepesanan.pop();
    }
    if (jumlah = 0)
    {
        cout << "habis";
    }

    cout << endl;

    return;
}
