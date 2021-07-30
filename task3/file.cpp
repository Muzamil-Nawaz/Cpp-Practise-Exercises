#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	string str,str2;
	ifstream MyReadFile("file.txt");
	while(getline (MyReadFile,str)){
		str2+=str;
	}
	
	MyReadFile.close();
	int n = 14;
	int count=1,lineCount=1,symbolCount=0;
	
	ofstream out;
	char ch;
	out.open("updatedFile.txt");
	for(int i = 0; i<str2.size(); i++){
		ch = str2.at(i);
		out.put(ch);
		if(!isalpha(ch) && !isdigit(ch) && !ch!=' '){
			symbolCount++;
		}
		if(count<n){
			
			count++;
		}
		else{
			out<<"\n";
			lineCount++;
			count=0;
		}
	}
	out.close();
	cout<<"Number of lines in new file :"<<lineCount<<endl;
	cout<<"Number of symbols in new file: "<<symbolCount<<endl;
	
	
	
}
