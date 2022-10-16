
/* Suman Mandal 16-10-2022*/
#include<iostream>
using namespace std;
int main()
{
	int arr[50],temp,num,i,pos,size;
	cout<<"ENTER THE SIZE OF ARRAY ::"<<endl;
	cin>>size;
	if(size>50)
	{
		cout<<"overload!"<<endl;
	}
	else
	{
        //INSERTION OF ELEMENTS IN ARRAY //
		cout<<"ENTER ELEMENTS INTO ARRAY ::"<<endl;
		for(i=0;i<size;i++)
		{
			cin>>arr[i];
		}
	}
    //INSERTION POF NEW ELEMENT IN ARRAY WITH SPECIFIED POSITION //
	cout<<"ENTER ELEMENT TO INSERT IN ARRAY ::"<<endl;
	cin>>num;
	cout<<"ENTER POSITION OF ELEMENT IN ARRAY ::"<<endl;
	cin>>pos;
	if(pos<0 || pos>size+1)
	{
		cout<<"INVALID POSITION !!"<<endl;
	}
	else{
	
	for(i=size-1;i>=pos-1;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[pos-1]=num;
	size++;
    }
    //DISPLAY OF ELEMENTS IN ARRAY //
	cout<<"ELEMENTS IN ARRAY ARE ::"<<endl;
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
    //DELETION OF ELEMENT FROM ARRAY //
	cout<<"ENTER POSITION OF ELEMENT TO DELETE ::"<<endl;
	cin>>pos;
	temp=arr[pos-1];
	if(pos>size)
	{
		cout<<"invalid input !"<<endl;
	}
	else{
	for(i=pos-1;i<size-1;i++)
	{
		arr[i]=arr[i+1];
	}
	size--;
    }    
    cout<<"DELETED ELEMENT IS::"<<temp<<endl;
    
    cout<<"ELEMENTS IN ARRAY ARE::"<<endl;
    	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
