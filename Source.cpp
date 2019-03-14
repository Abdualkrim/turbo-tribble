#include<iostream>

using namespace std;

int main()
{
	int Password, Cardpassword = 1111, Balance=5000, SBalance, WBalance, n;
	double nAc;
	bool FPW=false;

	cout << "Please enter the password: ";
	cin >> Password;
	if (Password != Cardpassword)
	{
		for (int i = 0; i < 3;)
		{
			cout << "Invalid password, Enter the password again: ";
			cin >> Password;
			if (Password == Cardpassword)
			{
				FPW = true;
				i=3;
			}
			if (i >= 2 && FPW==false)
			{
				cout << "All attempts are wrong, the card is locked." << endl;
			}
			i++;
		}
	}
	else
	{
		FPW = true;
	}
	
	if (FPW == true)
	{
		cout << "Options menu:" << endl << "1: Withdraw Balance."
			<< endl << "2: Balance Transfer."
			<< endl << "3: Balance Inquiry." << endl
			<<"4: Exit."<<endl;
		cin >> n;

		if (n == 1)
		{
			cout << "Determine the balance you want to withdraw (It must be a Multiples 50): ";
			cin >> WBalance;

			SBalance = WBalance % 50;
			if (SBalance != 0 || WBalance > Balance)
			{
				for (int i = 0; i < 3;)
				{
					cout << "Again: ";
					cin >> WBalance;
					SBalance = WBalance % 50;
					if (SBalance == 0 && WBalance <= Balance)
					{
						cout << "The draw was done." << endl;
						Balance -= WBalance;
						i = 3;
					}
				}
			}
			else
			{
				cout << "The draw was done." << endl;
				Balance -= WBalance;
			}
		}
		if (n == 2)
		{
			cout << "Enter account number (16 digits): " ;
			cin >> nAc;
			if (nAc > 1000000000000000 && nAc< 9999999999999999)
			{
				cout << "Enter the balance to be transform: ";
				cin >> WBalance;
				if (WBalance > Balance)
				{
					for (int i = 0; i < 3;)
					{
						cout << "Again: ";
						cin >> WBalance;
						if (WBalance <= Balance)
						{
							cout << "Transform successful." << endl;
							i = 3;
						}
					}
				}
				else
				{
					cout << "Transform successful." << endl;
				}
				
			}
			else
			{
				for (int i = 0; i < 3;)
				{
					cout << "Again: ";
					cin >> nAc;
					if (nAc > 1000000000000000 && nAc < 9999999999999999)
					{
						cout << "Enter the balance to be transform: ";
						cin >> WBalance;
						if (WBalance > Balance)
						{
							for (int i = 0; i < 3;)
							{
								cout << "Again: ";
								cin >> WBalance;
								if (WBalance <= Balance)
								{
									cout << "Transform successful." << endl;
									i = 3;
								}
							}
							
						}
						else
						{
							cout << "Transform successful." << endl;
						}
						i = 3;
					}
				}
			}
		}
		if (n == 3)
		{
			cout << "Your balance is: " << Balance << endl;
		}
		if (n == 4)
		{
			cout << "Exit successful." << endl;
		}

	}
	
	
	system("pause");
	return 0;
}