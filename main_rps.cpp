/*
Program: main_rps.cpp
Author: Jaydeep Rotithor
Date: 4/30/2015
Description: executes all of the functions in the game of rock, paper, scissors
Input: none
output: none

*/
#include "tool.h"
#include "paper.h"
#include "scissors.h"
#include "rock.h"
#include "RPSGame.h"
#include <iostream>
#include <cstdlib>
using namespace std;

/*       
Function: main
description: executes the game of rock, paper, scissors
Parameters: none
pre-conditions: the user wants to play the game of rock, paper, scissors
post_conditions: the game is played to a degree that satisfies the user.

*/
int main(){
	int x;
	int a;
	int b;
	int c;
	bool exit_error = false;
	bool play_on = true;
	int wins = 0;
	int loss = 0;
	int tie = 0;
	
	char t;
	cout << "Welcome to Rock, Paper, Scissors! Do you want to set different strengths for the tools?(1 for yes, 0 for no)" << endl;
	cin >> x;
	while(x != 0 && x != 1){
		cout << "The input is invalid. try again: "<< endl;
		cin.clear();
		cin.ignore();
		cin >> x;
	}
	if(x == 1){
		cout << "What strength do you want to set rock to?";
		cin >> a;
		while(cin.fail()){
			cout << "the input is invalid. please try again: " << endl;
		    cin.clear();
			cin.ignore();
			cin >> a;
		
		}
		cout << "What strength do you want to set paper to?";
		cin >> b;
		while(cin.fail()){
			cout << "the input is invalid. please try again: " << endl;
		    cin.clear();
			cin.ignore();
			cin >> b;
		
		}

		cout << "What strength do you want to set scissors to?";
		cin >> c;
		while(cin.fail()){
			cout << "the input is invalid. please try again: " << endl;
		    cin.clear();
			cin.ignore();
			cin >> c;
			
		}

	}        
	
	
	

	while(play_on == true){
			tool t1;
			
	rock r1;
	if(x == 1)
	r1.set_strength(a);
	paper p1; 
	if(x == 1)
    p1.set_strength(b);
	scissors s1;
	if(x == 1)
	s1.set_strength(c);
	RPSGame g1;
	cout << "Choose your tool(r=rock, p=paper,s=scissor,e=exit): " << endl;
	cin >> t;
	   
	if(t != 'r' && t != 's' && t != 'p' && t != 'e'){
	exit_error = true;
		while(exit_error == true){
		cout << "That's not a valid input. Please try again: " << endl;
		cin.clear();
		cin.ignore();
		cin >> t;
		if(t == 'r' || t == 's' || t == 'p' || t == 'e')
			exit_error = false;
		}
	}
	if(t == 'e'){
		
		exit(0);
		
	}  
	char a = g1.set_tool(t);
	char b = g1.set_computer_tool();
	int i = 0;
	if(b == 'r'){
		cout << "Computer chose rock. " << endl; 
	   i = r1.get_strength();
	}
	else if(b == 'p'){
		cout << "Computer chose paper. " << endl; 
	    i = p1.get_strength();
	}
	else if(b == 's'){
		cout << "Computer chose scissors. " << endl; 
		i = s1.get_strength();
	}
	int rock1 = r1.fight(a,b,i);
	int paper1 = p1.fight(a,b,i);
	int scissors1 = s1.fight(a,b,i);



	if(rock1 == 1 || paper1 == 1 || scissors1 == 1){
		cout << "You win!" << endl;
		g1.set_wins();
		wins++;
	}
	else if(rock1 == -1 || paper1 == -1 || scissors1 == -1){
		cout << "Computer wins. :(" << endl;
		g1.set_losses();
		loss++;
		
	}
	else if(rock1 == 0 || paper1 == 0 || scissors1 == 0){
		
		cout << "Tie" << endl;
		g1.set_ties();
		tie++;
	}
	cout << "Wins: ";
	cout << wins << endl;
	cout << "Losses: ";
	cout << loss << endl;
	cout << "Ties: ";
	cout << tie << endl;
	
	}
	
}
	

	
