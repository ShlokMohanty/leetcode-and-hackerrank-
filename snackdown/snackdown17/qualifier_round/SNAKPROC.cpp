#include<iostream>
using namespace std;
int main()
{

int report;
int length;
int i;
cin>>report;
for(i=0;i<right;i++)
{
	//...H..T..H
	cin>>length;
	char str[length];
	 int j,
	int flag=0;
	cin>>str;
	for(j=0;j<length;j++)
	{
		if(str[0]=='T') 
		  {
			cout<<"valid";
			flag=1;
			break;
		  }
		if(str[j]=='.')// j=0 str[0]=.,str[1]=H 
		 { 
			continue;
		 }
		if(str[j]=='H')
		  { 
		    j+=1;// j=2
	       	    while(str[j]=='.') //str[2]=...
			{
				j++;//j=3
			}
		     if(str[j]=='H')
			{
			printf("Invalid\n");
			flag=1;
			break;
			}
		      if(str[j]=='T')
			{
			  continue;
			}
		  }
		if(str[j]=='T')
		 {
		    printf("Invalid\n");
			flag=1;
			break;
		 }
		if(str[j]=='\0')
			{
			printf("Invalid\n");
			flag=1;
			break;
			}
	}
	if(flag==0)
	  {
		printf("Valid\n");

	  }
}
}		
			
