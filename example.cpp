#include <iostream>

using namespace std;

int main(){
	//Create room's variables
	int room_length = 5;
	int room_width = 10;
	float room_radius = 10.0;
	float room_circle_area = (room_radius*room_radius)*3.14;
	bool keep_running = true;
	char question;
	/* == equal
		!= not equal
		> greater
		< less 
		>= greater than or equal
		<= less than or equal
		&& both left and rigth are true
		|| left and right are not true
	*/
	while (keep_running) {
		cout << "Enter your Length: ";
		cin >> room_length;
		cout << "Enter your Width: ";
		cin >> room_width;

		if (room_length > room_width) {
			cout << "Length is greater" << endl;
		}
		else {
			cout << "width is greater" << endl;
		}
		cout << "Run again (Y/N): ";
		cin >> question;
		if ((question != 'y') && (question != 'Y')) {//Inline comment: Kill the program
			keep_running = false;
		}
 	}
	return 0;
}
