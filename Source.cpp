#include<iostream>
#include<string>
using namespace std;
int main()
{
	int chk=0;
	int rows = 3;
	int columns = 3;
	char arr[3][3]; // array created as a representation of box of tick cross
	string name1, name2;
	//cin.ignore();
	cout << "Enter player1 name ";
	cin >> name1;
	cout << "Enter player2 name";
	cin.ignore();
	cin >> name2;
	int  row, column, row1, column1;
	for (int i = 0; i<rows; i++)             // putting stars in box to show it to the players
	{
		for (int j = 0; j<columns; j++)
		{
			arr[i][j] = '*';
			cout << arr[i][j];
		}
		cout << endl;
	}
	for (int k = 0; k<4; k++)            // loop of 4 as after this loop box space will be be finished.someone will be looser or winner or the game will draw
	{
		cout << name1 << " Please enter your desired row number ";
		cin >> row;
		while (row <0 || row >2)
		{
			cout << endl << "You have entered wrong index.This doesnot exist.EENTER AGAIN"; //check so that user maynot enter row below 0 or above 2
			cin >> row;
		}
		cout << name1 << " Please enter your desired column number ";
		cin >> column;
		while (column <0 || column >2)
		{
			cout << endl << "You have entered wrong index.This doesnot exist.ENTER AGAIN";//check so that user maynot enter coloumn below 0 or above 2
			cin >> column;
		}
		if (arr[row][column] == 'X' || arr[row][column] == '0')
		{
			cout << endl << "You cant enter same row and coloumn numbers" << endl; // user cannot enter row or col no of box thats already filled
		}
		if (arr[row][column] != 'X' && arr[row][column] != '0')
		{
			arr[row][column] = 'X';
		}
		cout << name2 << " Please enter your desired row number ";
		cin >> row1;
		while (row1 <0 || row1 >2)
		{
			cout << endl << "You have entered wrong index.This doesnot exist.ENTER AGAIN"; //check so that user2 maynot enter row below 0 or above 2
			cin >> row1;
		}
		cout << name2 << " Please enter your desired column number ";
		cin >> column1;
		while (column1 <0 || column1 >2)
		{
			cout << endl << "You have entered wrong index.This doesnot exist.ENTER AGAIN";//check so that user2 maynot enter column below 0 or above 2
			cin >> column1;
		}
		if (arr[row1][column1] == 'X' || arr[row1][column1] == '0')
		{
			cout << endl << "You cant enter same row and coloumn numbers" << endl;
		}
		if (arr[row1][column1] != 'X' && arr[row1][column1] != '0')
		{
			arr[row1][column1] = 'O';
		}
		for (int i = 0; i<rows; i++)
		{
			for (int j = 0; j<columns; j++)
			{
				cout << arr[i][j];
			}
			cout << endl;
		}
		for (int w = 0; w<2; w++)
		{
			if ((arr[w][0] == 'X') && (arr[w][1] == 'X') && (arr[w][2] == 'X')) // check the box if anyy pattern has formed or any player has won
			{
				cout << name1 << " " << "has won the game " << endl;
				chk=chk+1;
				break;
			}
		}
		if (chk > 0)
		{
			break;
		}
		for (int w = 0; w<2; w++)
		{
			if ((arr[0][w] == 'X') && (arr[1][w] == 'X') && (arr[2][w] == 'X'))
			{
				cout << name1 << " " << "has won the game " << endl;
				chk=chk+1;
				break;
			}
		}
		if (chk > 0)
		{
			break;
		}
		if ((arr[0][0] == 'X') && (arr[1][1] == 'X') && (arr[2][2] == 'X'))
		{
			cout << name1 << " " << "has won the game " << endl;
			chk=chk+1;
			break;
		}
		if (chk > 0)
		{
			break;
		}
		if ((arr[0][2] == 'X') && (arr[1][1] == 'X') && (arr[2][0] == 'X'))
		{
			cout << name1 << " " << "has won the game " << endl;
		chk=chk+1;
			break;
		}
		if (chk > 0)
		{
			break;
		}
		for (int w = 0; w<2; w++)
		{
			if ((arr[w][0] == 'O') && (arr[w][1] == 'O') && (arr[w][2] == 'O'))
			{
				cout << name2 << " " << "has won the game " << endl;
				chk=chk+1;
				break;
			}
		}
		if (chk > 0)
		{
			break;
		}
		for (int w = 0; w<2; w++)
		{
			if ((arr[0][w] == 'O') && (arr[1][w] == 'O') && (arr[2][w] == 'O'))
			{
				cout << name2 << " " << "has won the game " << endl;
				chk=chk+1;
				break;
			}
		}
		if (chk > 0)
		{
			break;
		}
		if ((arr[0][0] == 'O') && (arr[1][1] == 'O') && (arr[2][2] == 'O'))
		{
			cout << name2 << " " << "has won the game " << endl;
			chk=chk+1;
			break;
		}
		if (chk > 0)
		{
			break;
		}
		if ((arr[0][2] == 'O') && (arr[1][1] == 'O') && (arr[2][0] == 'O'))
		{
			cout << name2 << " " << "has won the game " << endl;
			chk=chk+1;
			
			break;
		}
		if (chk > 0)
		{
			break;
		}
	}
}
