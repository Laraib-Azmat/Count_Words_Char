#include<iostream>
#include<string>
using namespace std;
int main(){
	
	char ch,cha;
a:
int count=0,word=0;
cout<<"Enter a phrase: ";
while((ch=getchar())!='\n')
{
	if ((ch==' ')&& (count<2))
	{
		word=0;
	}
	else if ((ch==' ')&&(word>1)){
		word++;
	}
	else if((ch==' ')&&(word<1))
	{
		word +=2;
	}
	count++;}
	cout<<endl<<"leters "<<count<<endl;
	cout<<"word "<<word<<endl;
	goto a;
	
	
	
	return 0;}
	

