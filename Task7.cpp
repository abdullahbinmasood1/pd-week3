 #include<iostream>
 using namespace std;
 main(){
	cout<<"Enter the movie name: ";
	string name;
	cin>>name;
	cout<<"Enter the adult tickets price: $";
	int adult;
	cin>>adult;
	cout<<"Enter the child tickets price: $ ";
	int child;
	cin>>child;
	cout<<"Enter the number of adult tickets sold: ";
	int adult_sold;
	cin>>adult_sold;
	cout<<"Enter the number of child tickets sold: ";
	int child_sold;
	cin>>child_sold;
	cout<<"Enter the percentage of the amount to be donated to charity: ";
	int percentage;
	cin>>percentage;
	
	cout<<"Movie: "<<name<<endl;
	int Total_amount;
	Total_amount=adult*adult_sold+child*child_sold;
	cout<<"Total amount generated from ticket sales: $"<<Total_amount<<endl;
	int Donation;
	Donation=Total_amount*10/100;
	cout<<"Donation to charity (10%): $"<<Donation<<endl;
	int Remaining;
	Remaining=Total_amount-Donation;
	cout<<"Remaining amount after donation: $"<<Remaining;
}

	