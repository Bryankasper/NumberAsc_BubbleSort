/*Enhanced Bubblesort algorithm
*created by iamkxxspr
follow:www.instagram.com/iamkxxspr*/

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the total number of data to be determined:";
	cin>>n;
	int data[n];
	cout<<"Enter the data separated by space: ";
	for(int a = 0;a<n;a++)
	{
		cin>>data[a];
	}
	int temp=0;
			for(int i=0;i<n;i++)
			{
				for(int j = i+1;j<n;j++)
					if(data[j]<data[i])
					{
						temp = data[i];
						data[i] = data[j];
						data[j] = temp;
					}
			}
			cout<<"\n\n";
			cout<<"Sorted Number :";
			
			for(int i = 0;i<n;i++)
			{
				cout<<data[i]<<" ";	
			}

	return 0;
}
