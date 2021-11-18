// Tic Tac Toe Game in C++                   //Made By: Junaid Aslam Rajput

 											  //Roll No: 20SW084

#include<graphics.h>									  

#include<iostream>

#include<stdlib.h>

using namespace std;



char square[10] = {'o','1','2','3','4','5','6','7','8','9'}; //For Position of Elements

															 //at which game played

void StartingPage(); 										 //Just For Look

int checkwin();		

void board();												 //Whole board of Tic Tac Toe

															 //and its numbers

void graphicsfunc();



int main()

{

//	graphicsfunc();

	int player = 1,i,choice;



    char mark;

    do

    {

        board();  								//Print the Board

        player=(player%2)?1:2;					//For Changing players and make alternative

	if(player==1)

       { cout << "Player " << player << " Turn, Enter X at Position:  ";     //Display message which player`s 

        														  //turn is now and take its position 

        														  //of playing

        cin >> choice;}

    else

    	 { cout << "Player " << player << " Turn, Enter O at Position:  ";

			cin >> choice;}

        mark=(player == 1) ? 'X' : 'O';					//Player 1 has indication of "x" sign

        												//Player 2 has indication of "x" sign



        if (choice == 1 && square[1] == '1')            //If any of the player marks its choice at 

        												//position 1. Than, prints its sign of inication



            square[1] = mark;							

        else if (choice == 2 && square[2] == '2')		//If any of the player marks its choice at 

        												//position 2. Than, prints its sign of inication



            square[2] = mark;

        else if (choice == 3 && square[3] == '3')		//If any of the player marks its choice at 

        												//position 3. Than, prints its sign of inication



            square[3] = mark;

        else if (choice == 4 && square[4] == '4')		//If any of the player marks its choice at 

        												//position 4. Than, prints its sign of inication



            square[4] = mark;

        else if (choice == 5 && square[5] == '5')		////If any of the player marks its choice at 

        												//position 5. Than, prints its sign of inication



            square[5] = mark;

        else if (choice == 6 && square[6] == '6')		//If any of the player marks its choice at 

        												//position 6. Than, prints its sign of inication



            square[6] = mark;

        else if (choice == 7 && square[7] == '7')		//If any of the player marks its choice at 

        												//position 7. Than, prints its sign of inication



            square[7] = mark;

        else if (choice == 8 && square[8] == '8')		//If any of the player marks its choice at 

        												//position 8. Than, prints its sign of inication



            square[8] = mark;

        else if (choice == 9 && square[9] == '9')		//If any of the player marks its choice at 

        												//position 9. Than, prints its sign of inication



            square[9] = mark;

        else

        {

            cout<<"Invalid move ";				//If user presses number out of board than signals message



            player--;

            cin.ignore();						//ignore that position in order to crushfree our program

            cin.get();

        }

        i=checkwin();							//Checks if anyone wins in middle of the game		



        player++;

    }while(i==-1);

    board();

    if(i==1)



        cout<<"==>\aPlayer "<<--player<<" win ";			//Shows which player wins

    else

        cout<<"==>\aGame draw";								//Also has possibility of draw



    cin.ignore();

    cin.get();

    return 0;

}



/*********************************************

    FUNCTION TO RETURN GAME STATUS

    1 FOR GAME IS OVER WITH RESULT

    -1 FOR GAME IS IN PROGRESS

    O GAME IS OVER AND NO RESULT

**********************************************/



int checkwin()

{

    if (square[1] == square[2] && square[2] == square[3])  //If Horizontal win in 1st row



        return 1;

    else if (square[4] == square[5] && square[5] == square[6])  //If Horizontal win in 2nd row



        return 1;

    else if (square[7] == square[8] && square[8] == square[9])   //If Horizontal win in 3rd row



        return 1;

    else if (square[1] == square[4] && square[4] == square[7])   //If vertical win in 1st column



        return 1;

    else if (square[2] == square[5] && square[5] == square[8])	  //If vertical win in 2nd column



        return 1;

    else if (square[3] == square[6] && square[6] == square[9])	   //If vertical win in 3rd column



        return 1;

    else if (square[1] == square[5] && square[5] == square[9])		//If Diagonally win from left top to 

																	//bottom right



        return 1;

    else if (square[3] == square[5] && square[5] == square[7])   //If Diagonally win from right top to 

																	//bottom left



        return 1;

    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' 				//If nothing of such condition 

                    && square[4] != '4' && square[5] != '5' && square[6] != '6' 	//happens. Simply Draw the Game	

                  && square[7] != '7' && square[8] != '8' && square[9] != '9')



        return 0;

    else

        return -1;     //For Game in Progress

}





/*******************************************************************

     FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK

********************************************************************/



void board()   //Simply prints the board and its positions at which players print the "X" and "0"

{



    system("cls");

    cout << "\n\n\tGame Rules:\n\n";

	cout<<"1.  It is a Multiplayer Game.";

    cout<<"\n2.  Numbers Entered must be 1 to 9. As there are only 9 positions of play.";

	cout<<"\n3.  Don`t try to print your choice which is already there. Otherwise, it signals Incorrect and start waiting untill another correct number not given.";

	cout<<"\n4.  Positions which are allready filled marked as 'O' or 'X'. You are allowed to print on numbers position only.";

	cout << "\n\n\n\nPlayer 1 (X)  -  Player 2 (O)" << endl << endl;

    cout << endl;



    cout << "     |     |     " << endl;

    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;



    cout << "_____|_____|_____" << endl;

    cout << "     |     |     " << endl;



    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;



    cout << "_____|_____|_____" << endl;

    cout << "     |     |     " << endl;



    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;



    cout << "     |     |     " << endl << endl;

}



void graphicsfunc()

{

	int gdriver=DETECT,gmode;

	initgraph(&gdriver,&gmode,"C:/TC/BGI");

	setbkcolor(GREEN);

	setcolor(RED);

	settextstyle(COMPLEX_FONT,HORIZ_DIR,10);

	outtextxy(50,120,"TIC-TAC-TOE Game");

	setbkcolor(YELLOW);

	setcolor(BLUE);

	settextstyle(COMPLEX_FONT,HORIZ_DIR,4);



	outtextxy(1050,470,"Made By:\n");

	outtextxy(1050,520,"Junaid Aslam\n");

	outtextxy(1050,570,"Roll No:\n");

	outtextxy(1050,620,"20SW084");

	getch();

	closegraph();

}



/*******************************************************************

                END OF PROJECT

********************************************************************/
