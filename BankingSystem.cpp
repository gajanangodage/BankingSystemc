#include<iostream>
using namespace std;
class Bank{
	private:
		int password;
		long int account = 1234668322;
		int amount = 0;
		public:
			int accounts()
			{
				return account;
			}
			void credit()
			{
				int data ;
				cout<<"Enter the amount"<<endl;
				cin>>data;
				amount+= data;	
				cout<<"Loading............"<<endl;
				cout<<"Tranasction is Succussfull"<<endl;
				cout<<"Now your Total balance is "<<amount<<endl;
			}
			void debit()
			{
				int data;
				cout<<"Enter the amount"<<endl;
				cin>>data;
				if(data>amount)
				{
					cout<<"The amount is not available"<<endl;
				}
				else
				{
					amount-=data;
					cout<<"Loading............"<<endl;
					cout<<"Tranasction is Succussfull"<<endl;
					cout<<"Total Balance is "<<amount<<endl;
					
				}
			}
			void info()
			{
				cout<<"The account no is "<<account<<endl;
				cout<<"The balance is "<<amount<<endl;
			}
};
int main()
{
	Bank b1;
	long int details;
	cout<<"Enter the account no"<<endl;
	cin>>details;
	int accc = b1.accounts();
	if(accc== details)
	{
		jump:
		int ch;
		cout<<"\n\n\nPress 1 for Credit \n Press 2 for Debit\n Press 3 for info\nPress 4 for EXIT\n"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
					b1.credit();
					goto jump;
				}
			case 2:
				{
					b1.debit();
					goto jump;
				}
			case 3:
				{
					b1.info();	
					goto jump;	
				}
			case 4:
				{
					cout<<"EXIT..................."<<endl;
					cout<<"Thanks For Visiting "<<endl;
					break;
				}
			default:
				{
					cout<<"INVAILD CHOISE"<<endl;
					goto jump;
				}
		}
	}	
}
