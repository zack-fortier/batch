/* Batch Monitor program */
#include <iostream>
#include <string>
#include <filesystem>
#include <dirent.h>
#include <sys/types.h>
#include <Windows.h>
#include <conio.h>
#include <process.h>
using namespace std;
//namespace fs = std::filesystem;
//using namespace fs;

// Lists job function
void listJob(const char *path) {
   struct dirent *entry;
   DIR *dir = opendir(path);
   
   if (dir == NULL) {
      return;
   }
   while ((entry = readdir(dir)) != NULL) {
   cout << entry->d_name << endl;
   }
   closedir(dir);

   Sleep(200);
}

// Creates a directory function
void createDir(char *directory) {
	int stat;
	stat = mkdir(directory);
	if (!stat)
    	printf("Directory created\n");
   else {
    	printf("Unable to create directory\n");
   }
}

// Compiles and runs specific programs function
void runSpecific(const char *path) {
	system(path);
}

// Compiles and runs all programs function
void runAll() {
	system("jobs\\Dot.exe");
	cout << "\n";
	Sleep(200);

	system("jobs\\Factorial.exe");
	cout << "\n";
	Sleep(200);

	system("jobs\\Hashtag.exe");
	cout << "\n";
	Sleep(200);

	system("jobs\\Neo.exe");
	cout << "\n";
	Sleep(200);

	system("jobs\\Sum.exe");
	cout << "\n";
	Sleep(200);
}

int main() {
	int option;
	string program;
	string dir;
	do {
		// Giving user options to select
		cout << "\n\nThe following numbers are options available to you: \n";
		cout << "1) List jobs\n";
		cout << "2) Set jobs directory\n";
		cout << "3) Compile and run a specific program\n";
		cout << "4) Compile and run all jobs in a specific directory\n";
		cout << "5) Shutdown\n";
		cout << "6) List program options\n";
		cout << "7) Help\n";
		cout << "\n\nEnter selection: ";
		cin >> option;

		// Going to each function depending on user input
		switch (option) {
			// List jobs option
			case 1: listJob("jobs");
				break;
			
			// Set jobs directory option
			case 2: {
				cout << "Enter a directory name: ";
				cin >> dir;
				char *dirChar = new char[dir.length() + 1];
				strcpy(dirChar, dir.c_str());
				createDir(dirChar);
				break;
			}
			
			// Compile and run a specific program option
			case 3: {
				cout << "\n\nEnter name of program that you want to run (.exe files): ";
				cin >> program;
				if (program == "Dot.exe") {
					runSpecific("jobs\\Dot.exe");
				}
				else if (program == "Factorial.exe") {
					runSpecific("jobs\\Factorial.exe");
				}
				else if (program == "Hashtag.exe") {
					runSpecific("jobs\\Hashtag.exe");
				}
				else if (program == "Neo.exe") {
					runSpecific("jobs\\Neo.exe");
				}
				else if (program == "Sum.exe") {
					runSpecific("jobs\\Sum.exe");
				}
				break;
			}
			
			// Compile and run all jobs in a directory option
			case 4: runAll();
				break;
			
			// Shutting down option
			case 5: cout << "Shutting down...";
				break;
			
			// Lists program options 
			case 6: 
				break;
			
			// Helps user option
			case 7: {
				cout << "\n\n1) By pressing 1, list jobs will simply show you all jobs in the jobs folder";
				cout << "\n2) Set jobs directory creates a directory";
				cout << "\n3) In order to run a specific program, you must enter the job name.exe (e.g. Dot.exe)";
				cout << "\n4) By pressing 4, all jobs will automatically run sequentially";
				cout << "\n5) By pressing 5, this program will shutdown";
				cout << "\n6) By pressing 6, the options will be repeated to you once more";
				break;
			}
			
			// Loop again if user inputs something invalid
			default: cout << "Invalid output";
				break;
		}
	} while (option != 5);
	return 0;
}