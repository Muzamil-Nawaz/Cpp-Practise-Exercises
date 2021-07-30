#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Date{
	public:
		int year;
		int month;
		int date;
		Date(int x, int y, int z){
			year = x;
			month = y;
			date = z;
		}
		void change(int x, int y, int z){
			year = x;
			month = y;
			date = z;	
		}
		void print(){
			cout<<date<<'-'<<month<<'-'<<year<<endl;
		}
		void calculation(int year, int month, int day){
			string weekday[7] = {"Saturday","Sunday","Monday","Tuesday", "Wednesday","Thursday","Friday"};
			int mon;
		   if(month > 2)
		      mon = month; 
		   else{
		      mon = (12+month); 
		      year--; 
		   }
		   int y = year % 100; 
		   int c = year / 100; 
		   int w = (day + floor((13*(mon+1))/5) + y + floor(y/4) + floor(c/4) + (5*c));
		   w = w % 7;
		   cout<<weekday[w];
		}
};

int main(){
	Date d1(2021,05,10);
	d1.print();
	d1.calculation(2021,05,10);
}
