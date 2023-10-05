 #include<iostream>
 using namespace std;
 main(){
	int min;
	cout<<"Number of Minutes: ";
	cin>>min;
	int sec;
	cout<<"Frames per Second: ";
	cin>>sec;
	int frames;
	frames=60*sec*min;
	cout<<"Total Number of Frames: "<<frames;
}