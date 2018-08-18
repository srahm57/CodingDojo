/* Over time, Alexey's mail box got littered with too many letters. Some of them are read, while others are unread.

Alexey's mail program can either show a list of all letters or show the content of a single letter. As soon as the program shows the content of an unread letter, it becomes read letter (if the program shows the content of a read letter nothing happens). In one click he can do any of the following operations:

Move from the list of letters to the content of any single letter.
Return to the list of letters from single letter viewing mode.
In single letter viewing mode, move to the next or to the previous letter in the list. You cannot move from the first letter to the previous one or from the last letter to the next one.
The program cannot delete the letters from the list or rearrange them.

Alexey wants to read all the unread letters and go watch football. Now he is viewing the list of all letters and for each letter he can see if it is read or unread. What minimum number of operations does Alexey need to perform to read all unread letters?

Input
The first line contains a single integer n (1 ≤ n ≤ 1000) — the number of letters in the mailbox.

The second line contains n space-separated integers (zeros and ones) — the state of the letter list. The i-th number equals either 1, if the i-th number is unread, or 0, if the i-th letter is read.

Output
Print a single number — the minimum number of operations needed to make all the letters read. */
// 4 states. Start. ReadSingle. 0. 00
#include <iostream>
using namespace std;

int main() {
	short state = 1;
	int num_op = 0;
	int n;
	cin>>n;
	while(n--){
		bool input;
		cin>>input;
		if(state == 1){
			if(input==1){
				state = 2;
				num_op++;
			}
		}
		else if(state == 2){
			if(input==1){
				num_op++;
			}
			else{
				state = 3;
			}
		}
		else if(state == 3){
			if(input==1){
				state = 2;
				num_op+=2;
			}
			else{
				state = 4;
			}
		}
		else if(state == 4){
			if(input==1){
				state = 2;
				num_op+=2;
			}
		}
	}
	cout<<num_op;
	return 0;
}
