#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main(){
	int n;
	cout<<"No of Points? ";cin>>n;
	
	float arr[n][n+1];
	
	//Clear an array
	for(int i=0;i<n;i++){
		for(int j=0;j<n+1;j++){
			arr[i][j]=0;
		}
	}
	
	//Giving x & f(x) values from user
	cout<<"Enter \"x\" & \"f(x)\"..."<<endl;
	for(int i=0;i<n;i++){
		cout<<"x"<<i<<" & f(x"<<i<<"): ";
		cin>>arr[i][0]>>arr[i][1];	
	}cout<<endl;
	
	//Calculating orders
	for(int a=0;a<n-1;a++){
		for(int i=0;i<(n-1)-a;i++)
		arr[i][a+2]=(arr[i+1][a+1]-arr[i][a+1])/(arr[i+(a+1)][0]-arr[i][0]);	
	}
	
	// print Table
	cout<<"Newton Divided Difference Table\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<n+1;j++){
			if(j>1)
			printf("%.6f\t",arr[i][j]);
			else cout<<arr[i][j]<<'\t';
		}cout<<endl;
	}
	getch();
	return 0;
}
