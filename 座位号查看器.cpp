#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
using namespace std;
int main(){
//	freopen("temp.in","w",stdin);
//	freopen("temp.out","r",stdout);
	int x,y,a[8][12]={},temp=0;
	bool mode=0;
	cin>>x>>y;
	for(int i=0;i<8;i++){
	int j=0;
	if(mode){
		for(j=0;j<12;j++){
		a[i][j]=j+1+temp;
		cout<<a[i][j];
		}
		mode=1;
	}
	else{
		for(j=12;j>0;j--){
		a[i][j]=j+1+temp;
		cout<<a[i][j]<<' ';
		}
		mode=0;
		}
		temp=j;	
		cout<<'\xa';
	}
	return 0;
	for(int i=0;i<8;i++){
		for(int j=0;j<12;j++){
			cout<<a[i][j];
		}
		cout<<'\xa';
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}

