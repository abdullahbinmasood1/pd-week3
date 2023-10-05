 #include<iostream>
 using namespace std;
 main(){
	cout<<"Enter vegetable price per kilogram (in coins): ";
	float veg;
	cin>>veg;
	cout<<"Enter fruit price per kilogram (in coins): ";
	float fruit;
	cin>>fruit;
	cout<<"Enter total kilograms of vegetables: ";
	int kg_veg;
	cin>>kg_veg;
	cout<<"Enter total kilograms of fruits: ";
	int kg_fruit;
	cin>>kg_fruit;
	float pr_coins;
	pr_coins=veg*kg_veg+fruit*kg_fruit;
	float Rps;
	Rps=pr_coins/1.94;
	cout<<"Total earnings in Rupees (Rps): "<<Rps;
}

