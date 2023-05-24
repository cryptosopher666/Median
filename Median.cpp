#include<iostream>
#include<conio.h>
using namespace std;
double median(double [], int);
int main(){
	int a;
	double c;
	cout<<"How many data's do you wanna enter? : ";
	cin>>a;
	double b[a];
	for(int i=0;i<a;i++){
		cout<<"Data "<<i+1<<" = ";
		cin>>b[i];
	}
	c=median(b,a);
	cout<<"Median = "<<c;
	getch();
	return 0;
}

double median(double arr[], int n){
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                double temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    if(n%2==0)
    return (arr[n/2]+arr[(n/2)-1])/2;
    return arr[n/2];
}


