 #include<iostream>
 using namespace std;
 main(){
	cout<<"Number of square meters you can paint: ";
	int square_meters;
	cin>>square_meters;
	cout<<"Width of the single wall (in meters): ";
	int width;
	cin>>width;
	cout<<"Height of the single wall (in meters): ";
	int height;
	cin>>height;
	int No_of_walls;
	No_of_walls=square_meters/(width*height);
	cout<<"Number of walls you can paint: "<<No_of_walls;
}

	