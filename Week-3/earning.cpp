#include<iostream>
using namespace std;
int main() {
	int vegWeight,fruitWeight;
	float vegPrice ,fruitPrice,earningCoins,earningRupees; 
	float Exchange=1.94;
	cout<<"Enter vegetable price per kilogram (in coins): ";
	cin>>vegPrice;
	cout<<"Enter fruit price per kilogram(in coins) : ";
	cin>>fruitPrice;
	cout<<"Enter total kilogram of vegetable :";
	cin>>vegWeight;
	cout<<"Enter total kilogram of fruits:";
	cin>>fruitWeight;
	earningCoins=(vegPrice*vegWeight)+(fruitPrice*fruitWeight);
	earningRupees=earningCoins/Exchange;
	cout<<"Total Earning in Rupees (Rps): "<<earningRupees<<endl;
	}
