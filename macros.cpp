#include <iostream>
#include <string>

//Macro
//#define NULL 0 --> Here we are defining a macro

#define END return 0 //semi-colon could either be here or where the macro is used
#define ENDMESSAGE cout << "Program ends here..." << endl

#define SINT int64_t 
#define SCCPC const char* const 

#define console_log(a) cout << a << endl

/*
Compiler design is a subject where you learn about how a compiler works
Everything with a # is executed first --> loaded first in the memory

*/

using namespace std;

static int macros() {
	
	//const char* const 
	SINT num = 4;
	cout << num << endl;

	int score = 400;
	console_log(400);

	string my_name = "Samandeep Singh Sandhu";
	console_log(my_name);

	ENDMESSAGE;
	END;
}