
#include<iostream>
#include<string>
using namespace std;

class SavingsAccount
{
	static float annualInterestRate;
	float savingsBalance;
public:
	SavingsAccount(float _savingsBalance=0):savingsBalance(_savingsBalance){}
	float calculateMonthlyInterest()
	{
		savingsBalance+=savingsBalance*annualInterestRate / 12;
		return savingsBalance*annualInterestRate / 12;
	}
	static void modifyInterestRate(float val)
	{
		annualInterestRate = val;
	}
	void Print()
	{
		cout << "\nsavingsBalance = " << savingsBalance;
	}
};


float SavingsAccount::annualInterestRate = 0;


int main()
{
	SavingsAccount saver1(2000);
	SavingsAccount saver2(3000);
	saver1.modifyInterestRate(0.03);
	cout <<"\nsaver1.calculateMonthlyInterest() = "<< saver1.calculateMonthlyInterest();
	cout << "\nsaver2.calculateMonthlyInterest() = " << saver2.calculateMonthlyInterest();
	saver1.Print();
	saver2.Print();
	saver1.modifyInterestRate(0.04);
	cout << "\nsaver1.calculateMonthlyInterest() = " << saver1.calculateMonthlyInterest();
	cout << "\nsaver2.calculateMonthlyInterest() = " << saver2.calculateMonthlyInterest();
	saver1.Print();
	saver2.Print();
}

