#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<vector>

using namespace std;
int main()
{
	vector <int> g1,g2,g3;
	int floor,temp, distance=0;
	cout<<"Enter the current floor "<<endl;
	cin>>floor;
	temp=floor;
	g1.push_back(floor);
	
	cout<<"Enter the subsequent floors. To stop the elevator press 0"<<endl;
	
	while(floor!=0)
	{
		cin>>floor;
		g1.push_back(floor);
	}
	
	std::sort(g1.begin(),g1.end());
	
	int n= g1.size();
	for (int i=1;i<n;i++)
	{
		if(g1[i]>=temp)
		cout<<g1[i]<<" ";
	}
	
	
	for (int i=n-1;i>0;i--)
	{
		if(g1[i]<temp)
		cout<<g1[i]<<" ";
	}
	cout<<endl;
	distance= (2*(g1[n-1]-temp)+(temp-g1[1]));
	cout<<"Total Distance is "<<distance<<endl;
	
	
	return 0;
}
