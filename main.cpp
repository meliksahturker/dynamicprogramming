/*
Student Name:
Student Number:
Project Number: 5
Compile Status: [SUCCESS/FAIL]
Running Status: [SUCCESS/FAIL]
Notes: Anything you want to say about your code that will be helpful in the grading process.
*/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void parseInput(ifstream& inFile, int& N, int& M, vector<int>& P);


int main(int argc, char* argv[]){

	// Command line arguments are malformed
    if (argc != 3) {
        // cerr should be used for errors
        cerr << "Run the code with the following command: ./cmpe250-assignment3 [input_file] [output_file]" << endl;
        return 1;
    }

    // Open the input and output files, check for failures
    ifstream inFile(argv[1]);
    if (!inFile) { // operator! is synonymous to .fail(), checking if there was a failure
        cerr << "There was a problem opening \"" << argv[1] << "\" as input file" << endl;
        return 1;
    }

    ofstream outFile(argv[2]);
    if (!outFile) {
        cerr << "There was a problem opening \"" << argv[2] << "\" as output file" << endl;
        return 1;
    }


    // The main program that solves the problem
    int N, M;
    vector <int > P;
    parseInput(inFile, N, M, P);

    // IMPLEMENT HERE MY MAN
    // BONE CHANCE!


    outFile.close();	
    return 0;
}

void parseInput(ifstream& inFile, int& N, int& M, vector<int>& P){

    string line, tmp;
    getline(inFile, line);
    istringstream linestream(line);
    getline(linestream, tmp, ' ');
    N = stoi(tmp);
    getline(linestream, tmp, ' ');
    M = stoi(tmp);


    getline(inFile, line);
    istringstream linestream2(line);

    string choc_price;
    while (getline(linestream2, choc_price, ' ')) {
        P.push_back(stoi(choc_price));
    }

    inFile.close();
}