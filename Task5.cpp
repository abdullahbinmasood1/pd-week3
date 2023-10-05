 #include<iostream>
 using namespace std;
 main(){
	cout<<"Enter the name of the Person: ";
	string name;
	cin>>name;
	cout<<"Enter the target weight loss in kilograms: ";
	int W_loss;
	cin>>W_loss;
	int days;
	days=15*W_loss;
	cout<<"Amir will need "<<days<<" days to lose "<<W_loss<<" kg of weight by following the doctor's suggestions";
}