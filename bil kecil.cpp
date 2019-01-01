#include <iostream> //Nama : Umar Ibnu Zainal Muttaqin
using namespace std;
void logika(int a, int b, int c)
{
	if (a<b)
	{
		if(a<c)
		{
			if(b<c)
			{
				cout<<a<<b<<c;
			}else{
				cout<<a<<c<<b;
			}
		}else{
			cout<<c<<a<<b;
		}
	}else{
		if(b<c)
		{
			if(c<a)
			{
				cout<<b<<c<<a;
			}else{
				cout<<b<<a<<c;
			}
		}else{
			cout<<c<<b<<a;
		}
	}
}

int main()
{
	int x,y,z;
	cout<<"Masukan nilai pertama : ";
	cin>>x;
	cout<<"Masukan nilai kedua : ";
	cin>>y;
	cout<<"Masukan nilai ketiga : ";
	cin>>z;
	cout<<"Berdasarkan data input, nilai berurutan dari yang terkecil adalah ";
	logika(x,y,z);
}
