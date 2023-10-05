 #include<iostream>
 using namespace std;
 main(){
	cout<<"Enter the size of the fertilizer bag in pounds: ";
	int size;
	cin>>size;
	cout<<"Enter the cost of bag: $";
	int cost;
	cin>>cost;
	cout<<"Enter the area in square feet that can be covered by the bag: ";
	int area;
	cin>>area;
	int cost_per_pound;
	cost_per_pound=cost/size;
	cout<<"Cost of fertilizer per pound: $"<<cost_per_pound<<endl;
	int cost_per_squarefeet;
	cost_per_squarefeet=cost/area;
	cout<<"Cost of fertilizing per square foot: $"<<cost_per_squarefeet;
}
	