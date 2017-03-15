#include <iostream>

using namespace std;

typedef struct  polinom
{
	int bil, pangkat;
	char x;
};

polinom p1[5], p2[6], p3[2];
polinom tambah[8], kali[5*2], turun[5];

int k = 0, l = 0, m = 0;

void fung_p1()
{
	p1[0].bil = 6;
	p1[0].x = 'x';
	p1[0].pangkat = 8;

	p1[1].bil = 8;
	p1[1].x = 'x';
	p1[1].pangkat = 7;

	p1[2].bil = 5;
	p1[2].x = 'x';
	p1[2].pangkat = 5;

	p1[3].bil = 1;
	p1[3].x = 'x';
	p1[3].pangkat = 3;

	p1[4].bil = 15;

}

void fung_p2()
{
	p2[0].bil = 3;
	p2[0].x = 'x';
	p2[0].pangkat = 9;

	p2[1].bil = 4;
	p2[1].x = 'x';
	p2[1].pangkat = 7;

	p2[2].bil = 3;
	p2[2].x = 'x';
	p2[2].pangkat = 4;

	p2[3].bil = 2;
	p2[3].x = 'x';
	p2[3].pangkat = 3;

	p2[4].bil = 2;
	p2[4].x = 'x';
	p2[4].pangkat = 2;

	p2[5].bil = 10;
}

void fung_p3()
{
	p3[0].bil = 1;
	p3[0].x = 'x';
	p3[0].pangkat = 2;

	p3[1].bil = 5;
}

void pengisian_polinom() {
	fung_p1();
	fung_p2();
	fung_p3();
}

void penjumlahan() {
	for (int a = 0; a < sizeof(p1) / sizeof(polinom); a++)
	{
		for (int b = 0; b < sizeof(p2) / sizeof(polinom); b++)
		{
			if (p1[a].pangkat == p2[b].pangkat)
			{
				tambah[k].bil = p1[a].bil + p2[b].bil;
				tambah[k].x = p1[a].x;
				tambah[k].pangkat = p1[a].pangkat;
				k++;
			}
		}
	}

	for (int a = 0; a < sizeof(p1) / sizeof(polinom); a++)
	{
		if (p1[a].pangkat != tambah[0].pangkat)
		{
			if (p1[a].pangkat != tambah[1].pangkat)
			{
				if (p1[a].pangkat != tambah[2].pangkat)
				{
					tambah[k].bil = p1[a].bil;
					tambah[k].x = p1[a].x;
					tambah[k].pangkat = p1[a].pangkat;
					k++;
				}
			}
		}
	}

	for (int a = 0; a < sizeof(p2) / sizeof(polinom); a++)
	{
		if (p2[a].pangkat != tambah[0].pangkat)
		{
			if (p2[a].pangkat != tambah[1].pangkat)
			{
				if (p2[a].pangkat != tambah[2].pangkat)
				{
					tambah[k].bil = p2[a].bil;
					tambah[k].x = p2[a].x;
					tambah[k].pangkat = p2[a].pangkat;
					k++;
				}
			}
		}
	}

	cout << "P1 + P2 = ";
	for (k = 0; k < sizeof(tambah) / sizeof(polinom); k++)
	{
		cout << tambah[k].bil << tambah[k].x << tambah[k].pangkat << " ";
	}
}

void pengurangan() {
	for (int a = 0; a < sizeof(p1) / sizeof(polinom); a++)
	{
		for (int b = 0; b < sizeof(p2) / sizeof(polinom); b++)
		{
			if (p1[a].pangkat == p2[b].pangkat)
			{
				tambah[m].bil = p1[a].bil - p2[b].bil;
				tambah[m].x = p1[a].x;
				tambah[m].pangkat = p1[a].pangkat;
				m++;
			}
		}
	}

	for (int a = 0; a < sizeof(p1) / sizeof(polinom); a++)
	{
		if (p1[a].pangkat != tambah[0].pangkat)
		{
			if (p1[a].pangkat != tambah[1].pangkat)
			{
				if (p1[a].pangkat != tambah[2].pangkat)
				{
					tambah[m].bil = p1[a].bil;
					tambah[m].x = p1[a].x;
					tambah[m].pangkat = p1[a].pangkat;
					m++;
				}
			}
		}
	}

	for (int a = 0; a < sizeof(p2) / sizeof(polinom); a++)
	{
		if (p2[a].pangkat != tambah[0].pangkat)
		{
			if (p2[a].pangkat != tambah[1].pangkat)
			{
				if (p2[a].pangkat != tambah[2].pangkat)
				{
					tambah[m].bil = p2[a].bil;
					tambah[m].x = p2[a].x;
					tambah[m].pangkat = p2[a].pangkat;
					m++;
				}
			}
		}
	}

	cout << "P1 - P2 = ";
	for (m = 0; m < sizeof(tambah) / sizeof(polinom); m++)
	{
		cout << tambah[m].bil << tambah[m].x << tambah[m].pangkat << " ";
	}
}

void perkalian()
{
	for (int a = 0; a < sizeof(p1) / sizeof(polinom); a++)
	{
		for (int b = 0; b < sizeof(p3) / sizeof(polinom); b++)
		{
			kali[l].bil = p1[a].bil * p3[b].bil;
			kali[l].x = p1[a].x;
			kali[l].pangkat = p1[a].pangkat + p3[b].pangkat;
			l++;
		}
	}
	cout << "P1 * P3 = ";
	for (l = 0; l < sizeof(kali) / sizeof(polinom); l++)
	{
		if (kali[l].pangkat == 2)
		{
			kali[l].x = 'x';
		}

		cout << kali[l].bil << kali[l].x << kali[l].pangkat << " ";
	}
}

void turunan()
{
	for (int a = 0; a < sizeof(p2)/sizeof(polinom); a++)
	{
		if (p2[a].pangkat == 0)
		{
			break;
		}
		else
		{
			turun[a].bil = p2[a].bil * p2[a].pangkat;
			turun[a].x = 'x';
			turun[a].pangkat = p2[a].pangkat - 1;
		}
	}
	
	cout << "P2\' = ";
	for (int a = 0; a < sizeof(turun) / sizeof(polinom); a++)
	{
		cout << turun[a].bil << turun[a].x << turun[a].pangkat << " ";
	}
}

int main()
{
	cout<<"===============================================\n";
	cout<<"Program penghitung Aritmatika Polinomial\n";
	cout<<"===============================================\n";
	cout<<"Diketahui:\n";
	cout<<"1.P1= 6x^8+8x^7+5x^5+x^3+15\n";
	cout<<"2.P2= 3x^9+4x^7+3x^4+2x^3+2x^2+10\n";
	cout<<"3.P3= x^2+5\n";
	cout<<"Operasi :\n";
	cout<<"1.Penjumlahan dari P1+P2?\n";
	cout<<"2.Pengurangan dari P1-P2?\n";
	cout<<"3.Perkalian dari P1*P3?\n";
	cout<<"4.Turunan dari P2?\n\n";
	cout<<"Hasil : \n";
	cout<<"1. ";
	//Mengisi variabel polinom p1, p2,  p3
	pengisian_polinom();

	//penjumlahan
	penjumlahan();
	cout << endl;
	cout<<"\n2. ";
	//pengurangan
	pengurangan();
	cout << endl;
	cout<<"\n3. ";
	//perkalian
	perkalian();
	cout << endl;
	cout<<"\n4. ";
	//Turunan
	turunan();
	cout << endl;

	return 0;
}
