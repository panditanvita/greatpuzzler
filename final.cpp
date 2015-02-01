/*final project: create a text-based game. 
a Player onject, which is updated based on input responses

*/

#include <stdio.h>
#include <iostream> 
#include <math.h>
#include <stdlib.h>
#include <map>
#include <regex>
#include <string>
using namespace std;

#include <sstream>


string puzzle0 = "There is a lotus on a lake. Each day, the lotus doubles in size. By the end of the thirtieth day, the lotus has covered the entire lake. On which day has it covered half the lake?";

string puzzle1 = "There are three boxes, Box 1 contains only apples, Box 2 contains only oranges, and Box 3 contains both apples and oranges. The boxes have been incorrectly labeled such that no label identifies the actual contents of the box it labels. Opening just one box, and without looking in the box, you take out one piece of fruit. Which box should you open to be able to immediately label all of the boxes correctly? ";

string puzzle2 = "On the ground in an open field, there lies a carrot, some sticks and pebbles, and a scarf. Why are they lying there?";
string puzzle3 = "How many times do the hands of a clock overlap in 24 hours?";
string puzzle4 = "What is the number of the parking space currently blocked by a *? \n | 16 | 06 | 68 | 88 | * | 98 |";

//a map from puzzle numbers to the puzzle
map<int,string> puzzles = 
{
    {0,puzzle0},
    {1,puzzle1},
    {2,puzzle2},
    {3,puzzle3},
    {4,puzzle4},
};

int points[5] = {2,3,4,5,7}; //a map from puzzle numbers to their points
bool solved[5] = {false,false,false,false,false}; //check if a puzzle is solved or not


int total = 0;
int your_points = 0;
string your_answer = "";

bool check_answer(string answer, int puzzleNum){
    your_answer = answer;

    switch(puzzleNum){
        case 0:
            //check if the answer is the right answer) TODO regex matching

            return (your_answer.find("29")!= -1);
        case 1:

            return (your_answer.find("3")!= -1 || your_answer.find("three")!= -1);

        case 2:
            //regex r("\\s*(snow)\\s*(man)");

            return (your_answer.find("snowman") != -1 || your_answer.find("snow man") != -1); //(regex_m)atch(answer,snowman))));

        case 3:
            return (your_answer.find("22")!= -1);

        case 4:
            return (your_answer.find("86")!= -1);	

	return false;
}
}

int main(){
    cout << "\n----------------------Press any key to begin----------------------" << endl;
    //scanf("%s");
    cin.get();
    cin.get();

    cout << "You are standing in an empty field, holding a lute. There are some small huts in the distance. " <<endl;
    cout << "You begin walking towards the huts." << endl;

    cout << "\n----------------------Press any key to continue----------------------" << endl;
    //getchar();
    //scanf("%s");
    cin.get();
    cin.get();

    cout << "You have approached the outskirts of a small village. Nearby, you see a market, and some people walking around." << endl;
    cout << "The people have noticed you. They are staring. " << endl;
    cout << "\n----------------------Press any key to continue----------------------" << endl;
    //getchar();
    //scanf("%s");
    cin.get();
    cin.get();

    cout << "A large man detaches himself from the group and comes over to you." << endl;
    cout << "Man: Who are you and what is your purpose here? " << endl;
    cout << "\n----------------------Press any key to continue----------------------" << endl;
    //getchar();
    cin.get();
    cin.get();
        
    int choiceOne_Path;
    cout << "# What would you like to say?" << endl;
    cout << "\t >> To say 'I just woke up in the fields beyond your village. I do not know how I got here or where I am' Enter '1' " << endl;
    cout << "\t >> To say 'I am a traveling bard' Enter '2' " << endl;
    retry:
    cout << "\nEnter your choice: ";
    cin >> choiceOne_Path;
    if(choiceOne_Path == 1)
    {
        cout << "You: I just woke up in the fields beyond your village. I do not know how I got here or where I am." << endl;
        ending1:
        cout << "\n!!!----------------------Ending 1: Burned At Stake----------------------!!!" << endl;        
        cout << "\nThe man's face is hard to read." << endl;
        cout << "\nMan: Follow me. " << endl;
        cout << "\nYou both walk towards the north side of the village for a few minutes. " << endl;
        cout << "\nYou: Where are we going?" << endl;
        cout << "\n----------------------Press any key to continue----------------------" << endl;
        cin.get();
        cin.get();

        cout << "Man: We cannot allow you to do evil to this town." << endl;
        cout << "He nods to the group of people who have followed  behind you, and they begin to surround you." << endl;
        cout << "You realise that they think you are a witch. You try to make a run for it, but the man lunges forwards and grabs you." << endl;
        cout << "It ends quickly." << endl;
        goto end;
    }
    else if(choiceOne_Path == 2)
    {
        cout << "\nYou: 'I am a traveling bard'" << endl;
        cout << "Man: Ah, we do enjoy the presence of a bard to liven up the evenings after a long day of harvest. " << endl;
        cout << "He calls out to the others behind him." << endl;
        cout << "Man: Tis a bard!" << endl;
        cout << "A cheer goes up from the crowd." << endl;
        cout << "Man: You must join us for the harvest gathering this evening." << endl;

    }
    else
    {
        cout << "Press either '1' or '2'." << endl;
        goto retry;
    }
 
    cout << "\n----------------------Press any key to continue----------------------" << endl;
    getchar();
    getchar();


    int choiceTwo_Path;
    cout << "# What would you like to say?" << endl;
    cout << "\t >> To say 'Thank you, I would love to join you at the gathering.' Enter '1' " << endl;
    cout << "\t >> To say 'Actually, I was thinking of exploring further this day. The sun is long to set.' Enter '2' " << endl;
    
    cout << "\nEnter your choice: ";
    cin >> choiceTwo_Path;


    switch(choiceTwo_Path)
    {
        case 1: 
            cout << "They seem so friendly and happy to see you." << endl;
            cout << "You: Thank you, I would love to join you at the gathering." << endl;
            cout << "The peasants smile." << endl;
            cout << "Man: My name is Erowit. The Great Puzzler will be pleased with you." << endl;
            cout << "The others nod." << endl;
            cout << "Erowit: He demands a test of wit from all who seek to know him. We will carry out the tests upon you." << endl;
            break;

        case 2: 
            cout << "You don't like the look of this place, and you're not thrilled by the idea of sitting around with a bunch of peasants all day." << endl;
            cout << "You: Actually, I was thinking of exploring further this day. The sun is long to set." << endl;
            cout << "There is a silence for a few moments." << endl;
            cout << "Man: You snub our god." << endl;

            goto ending1;
    }
    cout << "\n----------------------Press any key to continue----------------------" << endl;
    getchar();
    getchar();

    //the gathering! 
    int choiceThree_Path;
    cout << "# What would you like to say?" << endl;
    cout << "\t >> To say 'Sure, I can do puzzles.' Enter '1' " << endl;
    cout << "\t >> To say 'I don't like puzzles.' Enter '2' " << endl;
    
    cout << "\nEnter your choice: ";
    cin >> choiceThree_Path;


    switch(choiceThree_Path)
    {
    	case 1: 
            cout << "You: Sure, I can do puzzles." << endl;
            cout << "Erowit: Then let us begin! There are five puzzles of increasing difficulty. If you solve enough of them, you may meet the Great Puzzler" << endl;
            break;

        case 2: 
            cout << "You: I don't like puzzles." << endl;
            cout << "Their smiles disappear." << endl;
            goto ending1; //ominous code
    }
    cout << "\n----------------------Press any key to continue----------------------" << endl;
    getchar();
    getchar();

    //PUZZLE TIME
    
    
    puzzleTry:

    if (your_points > 12){
    	goto ending3;
    }
    cout << "Erowit: Which puzzle would you like to try? You can choose a puzzle from 0 to 4." <<endl;
    cout << "You have currently solved " << total << " puzzles for a total of " << your_points << " points." << endl;

    int puzzleNum;
    cout << "\nEnter your choice. If you wish to give up, enter '5'." << endl;
    cin >> puzzleNum;

    if (puzzleNum ==5){
    	goto ending2;
    }
    if (puzzleNum >5 || puzzleNum <0){
    	cout << "Not a valid option." << endl;
    	goto puzzleTry;
    }
    if (solved[puzzleNum]){
    	cout << "You've solved that already!" <<endl;
    	goto puzzleTry;
    }
 
    cout << "Puzzle: " << puzzleNum << endl;
    cout << puzzles[puzzleNum] << endl;
    thisPuzzleTry:
    cout << "Enter your answer: " ;
    cin >> your_answer;
    if (check_answer(your_answer,puzzleNum)){
    	total += 1;
    	your_points += points[puzzleNum];
    	solved[puzzleNum] = true;
        cout << "Erowit: Good job! That's the right answer." << endl;
        cout << "\n----------------------Press any key to continue----------------------" << endl;

        cin.get();
        cin.get();

    } else{
    	cout << "Erowit: Wrong. Want to try again, or try a different puzzle?" << endl;
        int tryAgain;
        cout << "\nIf you wish to try again, enter '1'. If you wish to try a different puzzle, enter '2'." << endl;
        cout << "Enter your answer: " ;
        cin >> tryAgain;

        if (tryAgain == 1){
        	goto thisPuzzleTry;
        } 

    }

    goto puzzleTry;

    


    ending2:
        cout << "\n!!!----------------------Ending 2: No Meeting the Great Puzzler For You----------------------!!!" << endl;
        cout << "You: Man, I don't have time for this. I give up." << endl;
        cout << "Their smiles disappear." << endl;
        cout << "Erowit: You dishonour us." << endl;
        cout << "The people pick up their shovels, rakes, hammers, axes and other handy bludgeoning apparatus they have lying around." << endl;
        cout << "You decide it is a good time to run away. " << endl;
        goto end;

    ending3:
        cout << "\n!!!----------------------Ending 3: The Great Puzzler----------------------!!!" << endl;
        cout << "Erowit: Wonderful! You have proven yourself worthy." << endl;
        cout << "He walks to the west, and motions for you to accompany him." << endl;
        cout << "Erowit: The Great Puzzler is an enigmatic soul. " << endl;
        cout << "You approach a small hut on the outskirts of the village." << endl;
        cout << "There is a small figure huddled by the door." << endl;
        cout << "As you come closer, you see that the figure is a stuffed scarecrow. " << endl;
        cout << "Erowit crawls forwards on his hands and knees and presses his forehead to the ground in front of the scarecrow." << endl;
        cout << "Erowit: The Great Puzzler has spoken. You may attend the celebration this evening! " << endl;
        cout << "You: Uh huh. " << endl;
        cout << "He motions for you to come closer." << endl;
        cout << "\n----------------------Press any key to continue----------------------" << endl;

        cin.get();
        cin.get();
        cout << "You crawl next to Erowit and stare at the scarecrow. The wind whistles around you." << endl;
        cout << "A sudden new appreciation for puzzles fills you. The delight of unraveling layers of meaning, the complex yet logical reasoning. You close your eyes." << endl;







    end:
    cout << "----------------------The End----------------------" << endl;

	return 0;
}