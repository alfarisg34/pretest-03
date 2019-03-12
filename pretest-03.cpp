/*	Nama program	: 
	Nama			: Alfari Sidnan Ghilmana
	NPM				: 140810180011
    Kelas           : A
	Tanggal buat	: 12 03 2019
	Deskripsi		: 
********************************************************************/
#include<iostream>
using namespace std;

struct r_mhs
{
    char npm[14];
    char nama[40];
    float ipk;
};
typedef r_mhs larikMhs[30];

void banyakData(int&n)
{
    cout<<"Banyak data : ";cin>>n;
}
void inputMhs(larikMhs& mhs,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"NPM  : ";cin>>mhs[i].npm;
        cout<<"Nama : ";cin>>mhs[i].nama;
        cout<<"IPK  : ";cin>>mhs[i].ipk;
    }
}
void cetakMhs(larikMhs mhs,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"NPM  : "<<mhs[i].npm;
        cout<<"Nama : "<<mhs[i].nama;
        cout<<"IPK  : "<<mhs[i].ipk;
    }
}
void sortNPM(larikMkhs& mhs,int n)
{
    for(int i=0;i<n;i++)
    {
        if(mhs[i].npm>mhs[i+1].npm)
        {
            
        }
    }
}
int main()
{
    int n;
    larikMhs mhs;
    banyakData(n);
    inputMhs(mhs,n);
    sortNPM(mhs,n);
    cetakMhs(mhs,n);
}