#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    int A[20];
    int i,j,nilai,batas,baru,a,b,c,d,k;
    cout<<"Masukan jumlah elemen :";
    cin>>batas;
    cout<<"\n--------------------------------------------";
    cout<<endl;
    //menampilkan nilai
    for(i=0; i<batas; i++)
    {
        cout<<"\n Data Indeks ["<<i<<"] =";
        cin>>A[i];
    }
    cout<<endl;
    //masukan nilai yang akan dicari
    cout<<"\n Masukan nilai yang akan dicari = :";
    cin>>nilai;
    //mencari data
    for (j=0; j<batas; j++)
    {
        if (A[j]==nilai);
    }
        cout<<"\n Nilai yang di cari terdapat pada indek ["<<j<<"]";
        {
            cout<<"\n-------------------------------------------";
            //mengganti data
            cout<<endl;
            cout<<"\n Masukan indeks yang akan di ganti = : ";
            cin>>c;
            cout<<"\n Masukan data pengganti = :";
            cin>>baru;
            a=c;
            A[a]=baru;
            cout<<"\n Data yang baru = \n";
            for (b=0; b<batas; b++)
            {
                cout<<"\n Dta ["<<b<<"] ="<<A[b]<<"\n";
            }
            //mengganti data
            cout<<"\n---------------------------------------------";
            cout<<endl;
            cout<<"\n Masukan indeks yang ingin di hapus =:";
            cin>>d;
            i=d;
            cout<<"\n Nilai yang di hapus = :";
            cout<<" "<<A[i]<<"pada indeks {"<<i<<"]\n";
            cout<<"\n Nilai akhir : \n";
            for (j=d; j<batas; j++)
            {
                A[j]=A[j+1];
            }
            for (k=0; k<batas; k++)
        {
        cout<<"\n Data ["<<k<<"] = "<<A[k];
        }
        getch ();
}


}
