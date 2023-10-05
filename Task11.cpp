 #include<iostream>
 using namespace std;
 main(){
	cout<<"Enter the person's age: ";
	int age;
	cin>>age;
	cout<<"Enter the number of times they've moved: ";
	int moved;
	cin>>moved;
	int Average_years;
	Average_years=age/(moved+1);
	cout<<"Average number of years lived in the same house: "<<Average_years;
}