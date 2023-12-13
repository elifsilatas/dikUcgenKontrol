#include <iostream>

using namespace std;

main()
{
	cout << "*****Dikligini kontrol etmek istediginiz ucgenin degerlerini alt alta giriniz..*****" << endl;
	
	
	int a,b,c;
	cin >> a;
	cin >> b;
	cin >> c;
		
	if(a*a + b*b == c*c || c*c + a*a == b*b || c*c + b*b == a*a)
	{
		cout << "Bu degerler dik ucgen olusturur." << endl;
	}
	else
	{
		cout << "Bu degerler dik ucgen olusturmaz." << endl;
	}
	
	return 0;	
}