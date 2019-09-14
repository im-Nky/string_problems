// sorting in stl

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

bool myfunction (int j,int k) 
{
	return (j<k); 
}

struct myclass 
{
  	bool operator() (int i,int j) { return (i<j);}
} myobject;

int main()
{
	vector<int>::iterator it;
	vector <int> v={4234,3,543,5,45,3425,45,6,547};
	cout<<"Unsorted Data\n";
	for (int i=0;i<v.size();i++)
	{
		cout <<v.at(i)<<"\t"<<v[i]<<endl; 
		
	}
	cout<<"Sorted Data\n";	
	sort(v.begin(),v.end());
	
	/*Printing elements of vector */
	
	cout<<"using for loop\n";
	for (int i=0;i<v.size();i++)
	{
		cout <<v.at(i)<<"\t"<<v[i]<<endl; 
		
	}
	//using iterator	
	cout<<"Using Iterator\n";     
	sort (v.begin(), v.begin()+4);
	for (it=v.begin(); it!=v.end(); ++it)
	{
		cout <<*it<<endl; 	
	}
		
	sort (v.begin(), v.end(), myobject);
	for (it=v.begin(); it!=v.end(); ++it)
	{
		cout <<*it<<endl; 	
	}
	sort (v.begin()+4, v.end(), myfunction);
	for (it=v.begin(); it!=v.end(); ++it)
	{
		cout <<*it<<endl; 	
	}		
}

