#include <iostream>
#include <ctime>
#define rand rand()
#define cls() system("cls")
#define pause() system("pause")
using namespace std;
int GodChar() {
	int temp = rand % 4;
	switch(temp) {
		case 0:
			cout << "☆ ";
		 	break;
		case 1:
			cout << "♡ "; 
			break;
		case 2:
			cout << "♧ ";
			break;
		case 3:
			cout << "7 ";
			break;
		default:
			system("exit");
			break;
	}
	return temp;
}
int main(void)
{
	srand((unsigned int)time(0));
	GOGODCHAR:
	int slot[3] = {0,};
	for (int i = 0; i < 3; i++) {
		slot[i] = GodChar();
	}
	cout << endl;
	if (slot[0] == slot[1] && slot[1] == slot[2]) {
		if (slot[0] == 3) {
			cout << "축하합니다! 잭팟입니다!" << endl;	
		} else {
			cout << "모두 다 맞췄네요! 한 번 더 기회를 드립니다!" << endl; 
			cls();
			goto GOGODCHAR;
		}
	}
	pause();
	return main;
}
