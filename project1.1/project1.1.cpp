
#include "pch.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;
    void main()
	{//CHPT1,QUES 1

		int num1;
		int num2;
		int sum;

		cout << "Enter two numbers";
		cin >> num1 >> num2;
		sum = num1 + num2;
		cout << num1 << " " << num2 << " " << sum;
	}

	void main2()
	{//CHPT1, QUES 2
		cout << "**************************************************\n\n";
		cout << "\t   C C C\t   S S S S\t  !!\n";
		cout << "\t C \t C\t S\t   S\t  !!\n";
		cout << "\tC\t\tS   \t\t  !!\n";
		cout << "       C\t\t S   \t\t  !!\n";
		cout << "       C\t\t   S S S S   \t  !!\n";
		cout << "       C\t\t\t   S      !!\n";
		cout << "\tC\t\t\t    S     !!\n";
		cout << "\t C \t C\t S\t   S\t  \n";
		cout << "\t   C C C\t   S S S S\t  00\n\n";
		cout << "**************************************************\n\n";
		cout << "\Computer Science is Cool Stuff!!!\n\n";
	}
	void main3()
	{//CHPT1,QUES 3
		int quarters;
		int dimes;
		int nickels;
		int totalCents;
		cout << "Enter the number of quarters:\n";
		cin >> quarters;
		cout << "Enter the number of dimes:\n";
		cin >> dimes;
		cout << "Enter the number of nickels:\n";
		cin >> nickels;
		totalCents = (quarters * 25) + (dimes * 10) + (nickels * 5);
		cout << "total in cents " << totalCents << endl;
	}

	void main4()
	{//CHPT1,QUES 4
		int time;
		double distance;
		double acc = 32;
		cout << "enter time in seconds";
		cin >> time;
		distance = (acc * (time * time) / 2);
		cout << "distance travel" << distance;
	}

	void main5()
	{//CHPT1,QUES 5
		char c;
		cout << ("enter a character");
		cin >> c;
		cout << " ";
		cout << " " << c << " " << c << " " << c << " ";
		cout << " " << c << "   " << c << " ";
		cout << c << " ";
		cout << c << " ";
		cout << c << " ";
		cout << c << " ";
		cout << c << " ";
		cout << " " << c << "   " << c << " ";
		cout << " " << c << " " << c << " " << c << " ";
	}

	void main6() {
		// CHPT 2, QUES 1
		double Mouse;
		double Man;
		double lethaldoseMo;
		double lethaldoseMan;
		double Can;
		double sweetener;

		char answer;

		cout << "enter the weight of the mouse in grams";
		cin >> Mouse;
		cout << "enter the lethal dose for the mouse in grams";
		cin >> lethaldoseMo;

		
			cout << "enter weight of man";
			cin >> Man;
			lethaldoseMan = lethaldoseMo * Man / Mouse;
			Can = lethaldoseMan / sweetener;
		
		
		cout << "man weight:" << Man << "grams";
		cout << "the lethal dose of sweetener is:" << lethaldoseMan << "grams";
		cout << "lethal number of cans of diet soda" << endl;

		cin >> answer;
	}

	void main7() {
		// CHPT 2, QUES 2
		double preSal;
		double Due;
		double annSal;
		double MontlyS;
		double increase = .076;

		int choice;

		do {
			cout << "enter your previous annual salary";
			cin >> preSal;
			Due = ((preSal * increase) / 2);
			cout << "previous salary due is" << Due;

			annSal = (preSal * (1 + increase));
			cout << "new annual salary is";

			MontlyS = (preSal * (1 + increase) / 12);

			cout << "new montly salary is";
			cout << "to repeat calculations for different values press 'y' or 'Y'/n";

			cin >> choice;
		} while (choice == 'y' || choice == 'Y') ;
	}

	void main8() {
		//CHPT 2, QUES 4
		double loanAmount;
		int interestR;
		double duration;
		double faceInterestR;
		double amount;
		double montlyPay;
		double faceDuration;
	

		
			cout << "Enter the needed amount";
			cin >> loanAmount;
			cout << "Enter interest rate";
			cin >> interestR;
			cout << "enter the duration of loan";
			cin >> duration;
			faceInterestR = interestR / 100;
			faceDuration = duration / 12.0;
			amount = loanAmount / (1 - faceInterestR * faceDuration);

			montlyPay = amount / duration;
		
			cout << " Amount to request";
			cout << "montly payment";
			cout << "do you want to continue press 'y' or 'Y'";
			
			
	}


	void main9() {
		// CHPT 2, QUES 5
		int roomCap;
		int attendPPL;
		int invitedPPL;
		char choice;

		do {
			cout << "enter max room capacity";
			cin >> roomCap;
			cout << "enter number of people to atttend the meeting";
			cin >> attendPPL;
			if (attendPPL <= roomCap) {
				cout << "meetting can be conducted";
				if (roomCap - attendPPL)
				{
					cout << roomCap - attendPPL;
					cout << "more people can attend the meeting" << endl;
				}
			}
			else {
				cout << "meeting could not be conducted" << endl;
				cout << (attendPPL - roomCap);
				cout << "people must be excluded" << endl;
			}
			cout << "if you want to repeat press 'y' or 'Y'" << endl;
			cin >> choice;
		} while (choice == 'y' || choice == 'Y');
	}

	void main10()
		{ //CHPT2,QUES 11
			int temp1;
			int temp2;
			double velocity = 331.3 + 0.61;
			char n;
			{
				cout << "Enter The StartingTempeture:";
				cin >> temp1;
				cout << "Enter The Ending Tempeture:";
				cin >> temp2;
				for (int i = 0; temp1 >= i; i++) {
					if (temp1 < temp2)
						temp2 = temp2 + 1;
				}
				cout << velocity << "m/s" << endl;
			}
		}
	void main11()
	{//CHPT2,QUES 14
		int exer;
		cout << ("How many exercises to input? ");
		cin >> exer;

		if (exer == 1) {
			int exer1;
			int poss1;

			cout << "Score received for exercise 1: ";
			cin >> exer1;
			cout << "Total points possible for exercise 1: ";
			cin >> poss1;

			int result = (exer1 / poss1) * 100;

			cout << "Your total is " << exer1 << " out of " << poss1 << ", or " << result << "%";
		}
		else if (exer == 2) {
			int exer1;
			int exer2;
			int poss1;
			int poss2;

			cout << "Score received for exercise 1: ";
			cin >> exer1;
			cout << "Total points possible for exercise 1: ";
			cin >> poss1;
			cout << "Score received for exercise 2: ";
			cin >> exer2;
			cout << "Total points possible for exercise 2: ";
			cin >> poss2;

			int exerTotal = exer1 + exer2;
			int possTotal = poss1 + poss2;
			int result = (exerTotal / possTotal) * 100;

			cout << "Your total is " << exerTotal << " out of " << possTotal << ", or " << result << "%";
		}
		else if (exer == 3) {
			int exer1;
			int exer2;
			int exer3;
			int poss1;
			int poss2;
			int poss3;

			cout << "Score received for exercise 1: ";
			cin >> exer1;
			cout << "Total points possible for exercise 1: ";
			cin >> poss1;
			cout << "Score received for exercise 2: ";
			cin >> exer2;
			cout << "Total points possible for exercise 2: ";
			cin >> poss2;
			cout << "Score received for exercise 3: ";
			cin >> exer3;
			cout << "Total points possible for exercise 3: ";
			cin >> poss3;

			int exerTotal = exer1 + exer2 + exer3;
			int possTotal = poss1 + poss2 + poss3;
			int result = (exerTotal / possTotal) * 100;

			cout << "Your total is " << exerTotal << " out of " << possTotal << ", or " << result << "%";
		}
		else {
			cout << "Please enter a value from 1-3";
		}
	}

	void main12()
		{
			// CHPT2, QUES 9
			double sumP = 0;
			double sumN = 0;
			double sumT = 0;
			double number;
			int TotalP = 0;
			int TotalN = 0;

			cout << "Enter 10 whole numbers";
			for (int i = 0; 1 < 10; i++) {
				cin >> number;
				sumT += number;
				if (number > 0) {
					sumP += number;
					TotalN++;
				}
				else {
					sumN += number;
					TotalN++;
				}
				cout << "sum of positive number" << sumP << endl ;
				cout << "sum of negative number" << sumN <<endl;
				cout << "sum of all numbers" << sumT <<endl;
				}
	}
			

	void main13()
		{// CHPT2, QUEST 10
			double sumP = 0;
			double sumN = 0;
			double sumT = 0;
			double Number;
			int TotalN = 0;
			int TotalP = 0;

			for (int i = 0; i <= 10; i++)
			{
				cin >> Number;
				sumT += Number;
				if (Number > 0) {
					sumP += Number;
					TotalP++;
				}
				else {
					sumN += Number;
					TotalN++;
				}
			}
			cout << "sum of all positve number" << sumP <<endl;
			cout << "average of all positve number" << sumP / TotalP <<endl;

			cout << "sum of all negative number" << sumN <<endl;
			cout << "average of all negative number" << sumN / TotalN <<endl;

			cout << "sum of all numbers" << sumT <<endl;
			cout << "average of all numbers" << sumT / 10 <<endl;

}

	void main14()
		{//Chpt3 QUES 2
			int a, b, c;
			double d;
			double squared;

			char next;
			 {
				cout << "quadratic equation is form: ax^2 +bx+c = 0" << endl;
				cout << "x variable to be calculated" << endl;
				cout << "enter the value for a";
				cin >> a;
				cout << "enter the value for b";
				cin >> b;
				cout << "enter the value for c";
				cin >> c;
				d = (b * b - 4 * a * c);
				if (d == 0)
				{
					cout << "root of the equation is:" << -b / a << endl;
				}
				else if (d > 0) {
					cout << "root of equation are:" << (((-1 * b) + squared(d)) / (2 * a));
					cout << " and " << (((-1 * b) - squared(d)) / (2 * a));
				}
				else {
					cout << " complex root"<< endl;
					cout << "root of equation " << (-1 * b) / (2 * a) << "+ i" << squared(-1 * d) << endl;
					cout << "root of equation " << (-1 * b) / (2 * a) << "- i" << squared(-1 * d) << endl;
				}
			}
			cout << "if you want to repeat calculations press 'y' or 'Y'" << endl;
			cin >> next;
			while (next == 'y' || next == 'Y') {};

		}

	void main15() {
			//CHPT 3, QUES 5
			double interestR;
			double loan;
			double annualIn;
			double balance;
			int month;
			double x;
			double y;
			

			do {
				cout << "enter total loan";
				cin >> loan;
				cout << "enter interest";
				cin >> interestR;
				cout << "monthy payment = " << (loan / 20);
				annualIn = 0;
				balance = loan;
				month = 0; 
			}
				while (balance > 0) {
					annualIn += ((interestR * balance) / (100 * 12));
					month++;
					y = ((interestR * balance) / (100 * 12));
					x = ((loan / 20) - y);

					balance -= x;
					if (balance < 0)
						balance = 0;
					cout << "balance left" << balance;
				}
				cout << "annualized interest is" << ((annualIn * 100 * 12) / (loan *month));
	}
	

	void main16()
		{// CHPT4  QUES 1
			double AnnualM = .03;
			double initialInt = .06;
			double taxSavingsRate = .35;
			int homePrice, downPay, initialBal;

			cout << "Ann after tax cost of home ownership " << endl;

			cout << "Please enter the cost of house $ " << endl;
			cin >> homePrice;
			cout << "Please enter down payment amount $ " << endl;
			cin >> downPay;

			initialBal = homePrice - downPay;
			double annualmCost = initialBal * AnnualM;
			double firstYearInt = initialBal * initialInt;
			double taxSavingsTot = annualmCost * taxSavingsRate;


			cout << endl << "Annual after-tax cost of home ownership for the first year is $" << fixed << setprecision(2) << annualmCost - taxSavingsTot + (firstYearInt*.65);

			cout << endl << "Your initial loan balance is $" << fixed << setprecision(2) << initialBal << endl;
			cout << "Your annual mortgage cost is $" << fixed << setprecision(2) << annualmCost << endl;
			cout << "With a tax savings each year of $" << fixed << setprecision(2) << taxSavingsTot << endl << endl;

			char runAgain;
			cout << "Would you like to repeat this calculation again? Type 'y' for Yes or 'n' for No: ";
			cin >> runAgain;

			if (runAgain == 'y' || runAgain == 'Y') {
				cout << endl << endl;
				main16();
			}
			else {
				cout << endl << "Goodbye!" << endl << endl;
			}
		}

	void main17() {
			//CHPT 4 QUES 2
			double height;
			double weight;
			int age;

			cout << "Enter weight of person in pounds: ";
			cin >> weight;
			cout << "Enter height of person in inches: ";
			cin >> height;
			cout << "Enter age of person: ";
			cin >> age;

			double hatS = (weight / height)*2.9;
			cout << endl << "This person's hat size is: " << fixed << setprecision(2) << hatS;

			double jacketS = (height*weight) / 288;
			if (age <= 39)
				cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS;
			else if (age <= 49)
				cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.125;
			else if (age <= 59)
				cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.25;
			else if (age <= 69)
				cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.375;
			else if (age <= 79)
				cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.50;
			else if (age <= 89)
				cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.625;
			else if (age <= 99)
				cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.750;
			else
				cout << endl << "This person's jacket chest size is: " << fixed << setprecision(2) << jacketS + 0.875;

			double waistS = weight / 5.7;
			double xtraWaist = ((age - 28) / 2)*.10;
			double xtra = waistS + xtraWaist;

			if (age <= 28)
				cout << endl << "This person's waist size is: " << fixed << setprecision(2) << waistS << " inches";
			else
				cout << endl << "This person's waist size is: xtra " << fixed << setprecision(2) << xtra << " inches";

			char runAgain;
			cout << endl << endl << "Would you like to run this calculation again? Type 'y' for Yes or 'n' for No: ";
			cin >> runAgain;

			if (runAgain == 'y' || runAgain == 'Y') {
				cout << endl << endl;
				main17();
			}
			else {
				cout << endl << "Goodbye!" << endl << endl;
			}
	}



	void main18() {
			// CHPT5 QUES4
			int quarters;
			int dimes;
			int pennies;
			int amount;
			int newAmount;

			cout << "enter any number" << endl;
			cin >> amount;

			quarters = amount / 25;
			newAmount = amount - (25 * quarters);
			newAmount = newAmount / 1;

			dimes = amount / 10;
			newAmount = amount - (10 * dimes);
			newAmount = newAmount / 1;

			pennies = amount / 1;
			newAmount = amount - (1 * pennies);
			newAmount = newAmount / 1;

			cout << "quaters" << quarters << endl;
			cout << "dimes" << dimes << endl;
			cout << "pennies" << pennies << endl;
	}

	void main19() {
			//CHPT 5, QUES 
			int day;
			int month;
			int year;
			int weekDay;
			int dayofWeek;
			
			cout << "enter day";
			cin >> day;
			cout << "enter month";
			cin >> month;
			cout << "enter year";
			cin >> year;

			 int dayofWeek (month, day, year);

			switch (weekDay) {
			case 0: cout << "sunday" << endl;
				break;
			case 1: cout << "monday" << endl;
				break;
			case 2: cout << "tuesday" << endl;
				break;
			case 3: cout << "wednesday" << endl;
				break;
			case 4: cout << "thursday" << endl;
				break;
			case 5: cout << "friday" << endl;
				break;
			case 6: cout << "saturday" << endl;
				break;
			default: cout << "Invalid date" << endl;
			}
			int dayofWeek(int month, int day, int year) 
				int day_week;
				if (month > 12 || month < 0 || day > 31 || day < 0) {
					return -1;
				}
				else {
					cout << "the day is";
					day_Week = day;
					day_Week += 2 * month;
					day_Week += (3 * (month + 1) / 5);
					day_Week += year;
					day_Week += year / 4;
				}
		}


	void main() {
		//main1();
		//main2();
		//main3();
		//main4();
		//main5();
		//main6();
		//main7();
		//main8();
		//main9();
		//main10();
		//main11();
		//main12();
		//main13();
		//main14();
		//main15();
		//main16();
		//main17();
		//main18();
		//main19();
		system("pause");
		return 0;
	}





    
