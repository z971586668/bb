#include <iostream>
#include <fstream>
#include <unistd.h>
using namespace std;

bool print_help = false;

void print_usage();
void print_header();
int run_group_bb_sat();

int main(int argc, char** argv){
	print_header();
	//check if h
	int c = 0;
	while((c = getopt(argc, argv, "hs")) != -1){
		switch(c){
			case 'h' : 
				print_usage();
				return 1;
			case 's' : 
				if((c = getopt(argc, argv, "g")) != -1){
					cout << "group" << endl;

				}
				cout << "sat" << endl;
				break;
		}
	}
	return 1;
}

void print_usage(){
	cout << "usage of allsat " << endl;
}

void print_header(){
	cout << "All rights reversed, ECNU " << endl;
}

int run_group_bb_sat(){
	//analysis the learnt reason of assumptions, to see if they are backbone 
	//or did every variable implied by variable a form a uc together with a in a conflict
	return 0;
}
