#include<iostream>
using namespace std;
int main()
 {
 	
   int arr[5] = {4, 5, 0, 7, 8};
   int max=arr[0];
   for (int i = 1; i < 5; i++)
    {
	 if (arr[i]>max)
	  
	   max=arr[i];

	   
	   } 
    cout <<"max value :"<<max<<endl;
	   
}
