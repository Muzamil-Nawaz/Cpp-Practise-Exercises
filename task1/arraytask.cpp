#include <iostream>
#include <string>
using namespace std;

int * deleteElements(int num[7]){
	int newArraySize=0;
	int prev = 0;
	for(int i = 1; i<7; i++){
		
		if(num[prev] > num[i]){
			newArraySize++;
			num[i] = -1;
			
		}
		prev++;
	}
	int num2[newArraySize] ;
	newArraySize=0;
	cout<<"After removing required elements:"<<endl;
	for(int j = 0; j<7; j++){
		if(num[j]!=-1){
		num2[newArraySize] = num[j];
		cout<<num[j]<<" ";
		}
	}
	return num2;

	
	
}
int main() {
	int numbers[7] = {1,3,4,1,4,3,5};
  	deleteElements(numbers);
  	
  	
  return 0;
}


