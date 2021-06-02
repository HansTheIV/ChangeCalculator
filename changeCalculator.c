#include<stdio.h>
#include<stdlib.h>
#include<math.h>


void numBills(double total, double billSize, double* numOfBills, double* newTotal) // accepts the total as an argument, and will return an 
			       //array with the number of $20 bills and the new total, respectively.
{
	int numberBills = floor(total/billSize);
	*numOfBills = numberBills;
	*newTotal = total - (numberBills*billSize);
	
}

int main()
{
	char valueStr[32];
	double denominations[8] = {20, 10, 5, 1, 0.25, 0.10, 0.05, 0.01},
	       numOfCurrencyD[8];
	int numOfCurrency[8];
	double numOfBills;
        double valueDollar, valueChange;
	double total;
	
	
	scanf("%s", valueStr);
	
	valueDollar = strtod(valueStr, NULL);

	for(int i = 0; i < 8; i++)
	{
		numBills(valueDollar, denominations[i], &numOfBills, &total);
		valueDollar = total;
		numOfCurrencyD[i] = numOfBills;
	}
	int a;
	for(int i = 0; i < 8; i++)
	{
		a = numOfCurrencyD[i];
		numOfCurrency[i] = a;
	}

	printf("You will need : \n%i $20 bills, %i $10 bills, %i $5 bills, %i $1 bills,", numOfCurrency[0],  numOfCurrency[1], numOfCurrency[2], numOfCurrency[3]); 	
	printf("%i quarters, %i dimes, %i nickels,",  numOfCurrency[4], numOfCurrency[5], numOfCurrency[6]);
	printf("and %i pennies.", numOfCurrency[7]);
	

		return 0;
}

