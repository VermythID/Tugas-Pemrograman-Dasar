#include <bits/stdc++.h>

using namespace std;

void logSorter(string str, ofstream& infoFile, ofstream& warningFile, ofstream& errorFile)
	{
		
	    istringstream ss(str);
    	string word;
	   

	    while (ss >> word) 
	    {
	    	
	    	if (word == "Information,31/10/2021" || word == "Information,30/10/2021" || word == "Information,29/10/2021" || word == "Information,28/10/2021")
			{
	        	infoFile << str << endl;
	        } 
			else if (word == "Warning,31/10/2021" || word == "Warning,30/10/2021" || word == "Warning,29/10/2021" || word == "Warning,28/10/2021")
			{
	        	warningFile << str << endl;
	        } 
			else if (word == "Error,31/10/2021" || word == "Error,30/10/2021" || word == "Error,29/10/2021" || word == "Error,28/10/2021")
			{
	        	errorFile << str << endl;
	        }
	        
	        cout << word << endl;
	    }
	}


int main(){
	
	//insert your .txt file path here
	ifstream logFile("C:/Users/Lenovo/Documents/UGM/Kuliah/Program Test/event_log_windows_1000.txt");
	
	//used to store all the lines containing each log message
	ofstream infoFile("information.txt");
	ofstream errorFile("error.txt");
	ofstream warningFile("warning.txt");
	
	//define variables used
	string lineText;
	
	while (getline (logFile, lineText)) { 	//get a line from each log file, 1 by 1
		logSorter(lineText, infoFile, warningFile, errorFile);
		
		//cout << lineText << endl;
	}
	
	
	infoFile.close();
	errorFile.close();
	warningFile.close();
	logFile.close();
	
	return 0;
	
}


