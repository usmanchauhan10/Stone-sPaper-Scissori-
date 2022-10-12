#include<iostream>
#include<string.h>
#include<cstdlib>        //rand()			
#include<conio.h>       //system("cls")
#include<windows.h>    //sleep()

using namespace std;
int inputuser();                 //function declaration
int winner(string,string);      //function declaration
void display();                //function declaration


int main()
    {
        string     name;
        cout<<"\n\n\t\t\t\t******** WELCOME TO ROCK PAPER SCISSOR GAME ********\t\n\n";
        cout<<"Enter your name		:		";
        getline(cin,name);
        cout<<endl;
        char input;
        int score=0;   
        do
        {
	        system("cls");
	        display();                   //display() function calling
	        score=score+inputuser();    //inputuser() function calling
	        cout<<"\nWould you like to play again   y/n    ";
            cin>>input;
	        cout<<endl;	 
        }while(input!='n');
        
        for(int i=0;i<name.size();i++)
        {
	        cout<<name[i];
	        Sleep(100);       // Make program pause 100 miliseconds
        }
        cout<<"  Your score is  "<<" ( "<<score<<" ) "<<endl;
        cout<<"\n\n********************************************************************************************\n\n"<<endl;
    }


int inputuser()                           //inputuser()  defination
{
	int input;
	string yinput;
	cout<<" Enter 1) for Rock"<<endl;
    cout<<" Enter 2) for Paper"<<endl;
    cout<<" Enter 3) for Scissor"<<endl;
    label1:
	   
    cout<<"\nEnter your input	:	";
    cin>>input;
    cout<<endl;	
    if(input==1)
    {
	    yinput="Rock";
    }
    else if(input==2)
    {
	    yinput="Paper";
    }
    else if(input==3)
    {
	    yinput="Scissor";
    }
    else
    {
	    cout<<"invalid input		"<<endl;
	    goto label1;
    }
    cout<<"You choose                      :               "<<yinput<<endl;

int computerinput=rand()%3 + 1;	           //rand() function that generates random number between 1 to 3
    string cinput;
    if(computerinput==1)
    {
	    cinput="Rock";
    }
    else if(computerinput==2)
    {
	    cinput="Paper";
    }
    else if(computerinput==3)
    {
	    cinput="Scissor";
    }
    cout<<"Computer choose			:		"<<cinput<<endl;
    cout<<endl;
    int output=winner(yinput,cinput);     //
    if(output==1)
    {
	    cout<<"\t\tYou won! Hurray	\n";
	    return 1;
    }
    else if(output==0)
    {
	    cout<<"\t\tYou lose! Bad Luck\n"<<endl;
	    return 0;
    }
    else if(output==-1)
    {
	    cout<<"\t\tWoah! That's Tie!		\n"<<endl;
	    return 0;
    }
}

int winner(string yinput,string cinput)            //winner function defination that return somevalue
{
	if(cinput=="Rock")
	{
		if(yinput=="Rock")
		{
			return -1;
		}
		else if(yinput=="Scissor")
		{
			return  0;
		}
		else if(yinput=="Paper")
		{
			return 1;
		}
	}
	if(cinput=="Scissor")
	{
		if(yinput=="Rock")
		{
			return 1;
		}
		else if(yinput=="Scissor")
		{
			return  -1;
		}
		else if(yinput=="Paper")
		{
			return 0;
		}
	}
	if(cinput=="Paper")
	{
		if(yinput=="Rock")
		{
			return 0;
		}
		else if(yinput=="Scissor")
		{
			return  1;
		}
		else if(yinput=="Paper")
		{
			return -1;
		}
	}
}

void display()                       //display()  defination
{
	cout<<"********************************************************************************************\n\n"<<endl;
	cout<<"\t________________________________________ WELCOME __________________________________________\n\n"<<endl;
	cout<<"                                          \t    TO                                               \n\n"<<endl;
    cout<<"\t________________________________ Rock, Paper, Scissor. Game ________________________________\n\n"<<endl;
	cout<<endl;
	cout<<"\t           GAME RULES : "<<endl;
	cout<<"\t\t\t\t --> Rock crushes the Scissor"<<endl;
	cout<<"\t\t\t\t --> Scissor cuts the Paper"<<endl;
	cout<<"\t\t\t\t --> Paper covers the Rock"<<endl;
	cout<<endl;
}


