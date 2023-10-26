#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	cout<< "\n\t\t\t\t\t\t\t\tWelcome to Number Guessing Game!!!"<<endl;

	cout<< "\t\t\t\t\t\t\tAre you ready to put your guessing skills to the test?"<<endl;

	cout<< "This game is all about trying to guess the secret number I'm thinking of.Don't worry I'll give you some hints along the way to help you out."<<endl;

	cout<< "\n\nHere's how to play:"<<endl;

	cout<<"\n1.Objective: Your goal is to guess the secret number correctly within a limited number of tries."<<endl;

	cout<<"\n2.Range: I will think of a number between a specified range (e.g., 1 to 100). I'll let you know what this range is at the beginning of the game."<<endl;

	cout<<"\n3.Guess: You can make a guess by typing a number within the specified range. For example, you can type 50 if you think the secret number is 50."<<endl;

	cout<<"\n4.Hints: After each guess, I will provide you with a hint to help you get closer to the secret number. The hint will usually be one of the following:\n"
"\t\t\tToo high: Your guess is higher than the secret number.\n"
"\t\t\tToo low: Your guess is lower than the secret number.\n"
"\t\t\tCorrect!: You've guessed the secret number.\n"<<endl;

	cout<<"5.Winning: If you guess the secret number within the allotted number of tries, congratulations! You win the game."<<endl;

	cout<<"\n\t\t\tYou will get a limited chances based on the difficulty level you choose"<<endl;


	    while (true)
		{
        cout << "\nDifficulty Levels\n";
        cout << "\n1 for easy level!\t";
        cout << "\n2 for medium-level!\t";
        cout << "\n3 for difficult level!\t";
        cout << "\n0 for ending the game!\n" <<endl;

        int level;
        cout << "Enter the difficulty level number: ";
        cin >> level;


	srand(time(0));
	int randomNum = (rand() % 200 ) + 1;
	int guess;

    if (level == 1)
	{
        cout << "\nYou will get 10 choices for finding the random number between 1 and 200.";
        int leftChance = 10;
        for (int i = 1; i <= 10; i++) {


        cout << "\n\nEnter the number: ";
        cin >> guess;
        if(guess== randomNum)
			{
            	cout<<"Correct! You've Guessed the secret number.";
            	break;
        	}
        else if(guess>randomNum)
			{
            	cout<<guess<<" is Too High than the random number";
        	}
        else
			{
            	cout<<guess<<" is Too Low than the random number";
        	}
        leftChance--;
        if(leftChance==0)
			{
                cout<<"\n\nBetter luck next time"<<endl;
                cout<<randomNum<<" is the number\n\n";
        	}
    	}
    }



        else if (level == 2)
		{
        	cout << "\nYou have 6 choices for finding the random number between 1 and 200.";
        	int leftChance = 6;
        	for (int i = 1; i <= 6; i++)
			{


            	cout << "\n\nEnter the number: ";
            	cin >> guess;
            	if(guess== randomNum)
				{
                	cout<<"Correct! You've guessed the secret number";
                	break;
            	}
            	else if(guess>randomNum)
				{
                	cout<<guess<<" is Too High than the random number";
            	}
            	else
				{
                	cout<<guess<<" is Too Low than the random number";
            	}
            	leftChance--;
            	if(leftChance==0)
				{
                	cout<<"\n\nBetter luck next time"<<endl;
                	cout<<randomNum<<" is the number\n";
            	}
        	}
    	}

		else if (level == 3)
		{
        	cout << "\nYou have 3 choices for finding the secret number between 1 and 200.";
        	int leftChance = 3;
        	for (int i = 1; i <= 3; i++)
			{
            	cout << "\n\nEnter the number: ";
            	cin >> guess;
            	if(guess== randomNum)
				{
                	cout<<"Correct! You've guessed the secret number";
                	break;
            	}
            	else if(guess>randomNum)
				{
                	cout<<guess<<" is Too High than the random number";
            	}
            	else
				{
                	cout<<guess<<" is Too Low than the random number";
	            }
					leftChance--;
            	if(leftChance==0)
				{
	                cout<<"\n\nBetter luck next time"<<endl;
                	cout<<randomNum<<" is the number\n";
            	}
        	}
    	}



        else if (level == 0)
		{
            exit(0);
        }
        else
		{
            cout << "Kindly select between (0,1,2,3)"<< endl;
        }
    }
return 0;
}
