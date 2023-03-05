
#include <iostream>
#include <conio.h>
using namespace std;

char one = '1', two = '2', three = '3', four = '4', five = '5', six = '6', seven = '7', eight = '8', nine = '9';

void drawBoard();
void inputX();
void inputO();
void converter(char, char);
void goBack(char);
void drawMaker();
bool checker();

void drawBoard()
{
	cout << endl <<  "\tT I C   T A C   T O E   G A M E" << endl; 
    cout << "\n" << endl;

    cout << "\t\t" << " " << one   << "  |   " << two   << "  |  " << three << " \n"
         << "\t\t" << "---- ------ ---- \n"
         << "\t\t" << " " << four  << "  |   " << five  << "  |  " << six << " \n"
         << "\t\t" << "---- ------ ---- \n"
         << "\t\t" << " " << seven << "  |   " << eight << "  |  " << nine << " \n";

    cout << "\n\n" << endl;
}

void inputX()
{
    char x;
    cout << "\t Player 1 \"X\" turn: ";
    x = getch();
    converter(x, 'X');
}

void inputO()
{
    char o;
    cout << "\t Player 2 \"O\" turn: ";
    o = getch();
    converter(o, 'O');
}

void converter(char ox, char ch)
{
    switch (ox)
    {
        case '1':
        	if(one != 'X' && one !='O')
            	one = ch;
            else
        		goBack(ch);
            break;
        case '2':
        	if(two != 'X' && two !='O')
            	two = ch;
            else
        		goBack(ch);
            break;
        case '3':
            if(three != 'X' && three !='O')
            	three = ch;
            else
        		goBack(ch);
            break;
        case '4':
            if(four != 'X' && four !='O')
            	four = ch;
            else
        		goBack(ch);
            break;
        case '5':
            if(five != 'X' && five !='O')
            	five = ch;
            else
        		goBack(ch);
            break;
        case '6':
            if(six != 'X' && six !='O')
            	six = ch;
            else
        		goBack(ch);
            break;
        case '7':
            if(seven != 'X' && seven !='O')
            	seven = ch;
            else
        		goBack(ch);
            break;
        case '8':
            if(eight != 'X' && eight !='O')
            	eight = ch;
            else
        		goBack(ch);
            break;
        case '9':
            if(nine != 'X' && nine !='O')
            	nine = ch;
            else
        		goBack(ch);
            break;
    
	    default:
	        cout << "\n\t Wrong input ... Try again\n";
	        if (ch == 'X')
	        	inputX();
	        else
	        	inputO();
	        break;
    }
    
    //drawMaker();
}

void drawMaker()
{
	static int iter = 0;
	iter++;
	
    if(iter > 9)
    {
        cout << "\t Match Draw!!!" << endl;
        exit(0);
    }
	
}

void goBack(char ch)
{
	cout << "\n\t Already Taken\n";
	if (ch == 'X')
	inputX();
	else
	inputO();
}

bool checker()
{
    
    if ((one == two && two == three) || (one == four && four == seven)
     || (one == five && five == nine) || (two == five  && five == eight)
      || (three == six && six == nine) || (three == five && five == seven)
       || (four == five && five == six) || (seven == eight && eight == nine))
        {
            return true;
        }
    /* else */
    drawMaker();
    return false;
}

int main()
{

    do
    {

        system("cls");
        drawBoard();
        if (checker() == true)
        {
            cout << "\t Player 2 \"O\" Win!!!" << endl;
            break;
        }
        inputX();


        system("cls");
        drawBoard();
        if (checker() == true)
        {
            cout << "\t Player 1 \"X\" Win!!!" << endl;
            break;
        }
        inputO();

    } while (true);

    return 0;
}
