#include<iostream>
#include<ncurses.h>
using namespace std;
bool gameOver;
const int width = 20;
const int height = 20;
int headX, headY, fruitX, fruitY, score;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

void Setup()
{
    gameOver = false;
    dir = STOP;
    headX = width/2;
    headY = height/2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;


}

void Draw()
{

    system("clear");
    for (int i = 0; i <= width; i++) {
        cout << "-";
    }
    cout << endl;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j <= width; j++){
        if (j == 0) {
            cout << "|";
        } else if ( j == width) {
            cout << "|";
        } else {
            if ( i == headY && j == headX) {          // snake head
            cout << "O";
            } else if ( i == fruitY && j == fruitX) { // fruit
            cout << "*";
            } else {
            bool tail = false;
            for (int k = 0; k <= nTail; k++) {     // tail
                if (tailX[k] == j && tailY[k] ==  i) {
                cout << "o";
                tail = true;
                }
            }
            if (!tail) {
                cout << " ";
            }
            }
        }
        }
        cout << endl;
    }
 
    /*--- bottom wall ---*/
    for (int i = 0; i <= width; i++) {
        cout << "-";
    }
    cout << endl;
}

void Input()
{

}
void Logic()
{

}
int main()
{

}
