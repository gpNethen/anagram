// Creator: Nathan Reichert
// Date: 30 August, 2015
// Last Modified: 1 September, 2015
// Created for Project 1, CSCI301, Prof. Bryant Julstrom

#include <iostream>
#include <cstring>
using namespace std;
void countLetters(char input[], int inputSize, int output[], int outputSize){	//first function definition
	int i; // index for each array position through the for loop and switch/case
	for(i=0; i < inputSize; i++){ // for loop to check each position in the input arrays for each letter only
		//cout << input[i]; // Outputs contents of each index as a test to verify correctness
		switch (input[i]){ // checks each position of the input array and for each case, increments the associated position
			case 'A':
			case 'a':
				output[0]+=1;
				break;
			case 'B':
			case 'b':
				output[1]+=1;
				break;
			case 'C':
			case 'c':
				output[2]+=1;
				break;
			case 'D':
			case 'd':
				output[3]+=1;
				break;
			case 'E':
			case 'e':
				output[4]+=1;
				break;
			case 'F':
			case 'f':
				output[5]+=1;
				break;
			case 'G':
			case 'g':
				output[6]+=1;
				break;
			case 'H':
			case 'h':
				output[7]+=1;
				break;
			case 'I':
			case 'i':
				output[8]+=1;
				break;
			case 'J':
			case 'j':
				output[9]+=1;
				break;
			case 'K':
			case 'k':
				output[10]+=1;
				break;
			case 'L':
			case 'l':
				output[11]+=1;
				break;
			case 'M':
			case 'm':
				output[12]+=1;
				break;
			case 'N':
			case 'n':
				output[13]+=1;
				break;
			case 'O':
			case 'o':
				output[14]+=1;
				break;
			case 'P':
			case 'p':
				output[15]+=1;
				break;
			case 'Q':
			case 'q':
				output[16]+=1;
				break;
			case 'R':
			case 'r':
				output[17]+=1;
				break;
			case 'S':
			case 's':
				output[18]+=1;
				break;
			case 'T':
			case 't':
				output[19]+=1;
				break;
			case 'U':
			case 'u':
				output[20]+=1;
				break;
			case 'V':
			case 'v':
				output[21]+=1;
				break;
			case 'W':
			case 'w':
				output[22]+=1;
				break;
			case 'X':
			case 'x':
				output[23]+=1;
				break;
			case 'Y':
			case 'y':
				output[24]+=1;
				break;
			case 'Z':
			case 'z':
				output[25]+=1;
				break;
		}
	}
}

bool isAnagram(int count1[], int count2[]){ // Function for comparing two int arrays of same size
	int index; // index counter
	bool anagramous=true; // sets flag to be true
	for (index=0; index < 26; index++){ // For loop to compare each index of the two int arrays
		if(count1[index]!= count2[index]) // Directly checks if the same index in each array is not equal
			anagramous = false; // if so, the boolean flag is set to false
	}
	return anagramous;        // function returns the flag value
}
//char c;
//while(c!='\n'){cin.get(c); do stuff}
int main() // beginning of main program
{
	const int CAPACITY = 61; // constant input character array capacity for positions 0-60 + null char [0 - 61]
	const int ALPHA_CAP= 26; // constant letterCounter(n) int array capacity for 0-25 [a - z]
    char line1In[CAPACITY]={}; // initialization of first input character array
    char line2In[CAPACITY]={}; // initialization of second input character array
	int letterCounter1[ALPHA_CAP]; // initialization of first letter counting int array
	int letterCounter2[ALPHA_CAP]; // initialization of second letter counting int array
	//init lettercounts to 0 with lettercountx[0 through 25]=0
	int j; //index for letterCountern[] initialization loop
	int k; // index for testing cout of letterCounterN[]	
	for (j=0; j<ALPHA_CAP; j++){ // for loop to operate from 0 to 25
		letterCounter1[j]=0; // sets each position in the counter int arrays
		letterCounter2[j]=0; // to zero 
	}
    cout << "This program analyzes two lines of input and " << endl;     // A few short lines of
    cout << "Confirms/disconfirms their status as an anagram " << endl;  // description and
    cout << "In relation to one another. " << endl << endl;              // instruction for
    cout << "Please enter your first line below:" << endl << "     ";    // the user
    //cin.getline(line1In, CAPACITY); // Gets input and assigns to character array line1In[]
    countLetters(line1In, CAPACITY, letterCounter1, ALPHA_CAP); // Function to count each letter in line1In[]
    cout << "Please enter your second line below:" << endl << "     ";   // More instruction
    //cin.getline(line2In,CAPACITY); // Gets input and assigns to character array line2In[]
    countLetters(line2In, CAPACITY, letterCounter2, ALPHA_CAP); // Function to count each letter in line2In[]
    if(isAnagram(letterCounter1, letterCounter2)) // Compares letter counts, returns flag value compared with 'true'
    	cout << "These are definitely anagrams." << endl << endl; // Proclaims corresponding message
    if(!isAnagram(letterCounter1, letterCounter2)) // Compares letter counts, returns flag value compared with 'false'
    	cout << "These are definitely NOT anagrams." << endl << endl; // Proclaims corresponding message
   

/*  Start of debug tests (to be commented out in final product)
	cout << line1In << endl; // outputs entire first input character array           
    for (j=0; j<ALPHA_CAP; j++){ // for loop to output the result of the first letter count array
    	cout << letterCounter1[j] << "   ";
    }
    cout << endl;
    cout << line2In << endl; // outputs entire second input character array
    for (k=0; k<ALPHA_CAP; k++){ // for loop to output the result of the second letter count array
    	cout << letterCounter2[k] << "   ";
    }
    cout << endl;
    End of debug tests (to be commented out in final product) */

return 0; // ceases all computation
}
