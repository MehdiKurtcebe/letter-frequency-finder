#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LETTER_NUM 26

typedef struct {
	char letter;
	double counter;
} letterCounter;

void findLetterFrequency(const char* text, letterCounter returnFrequencies[LETTER_NUM]);
letterCounter* getLetterCounter(letterCounter arr[LETTER_NUM], char c);
void initializeLetterCounter(letterCounter arr[LETTER_NUM]);

int main() {
	char text[] = "Node.js is an open-source and cross-platform JavaScript runtime environment. It is a popular tool for almost any kind of project! Node.js runs the V8 JavaScript engine, the core of Google Chrome, outside of the browser. This allows Node.js to be very performant. A Node.js app runs in a single process, without creating a new thread for every request. Node.js provides a set of asynchronous I/O primitives in its standard library that prevent JavaScript code from blocking and generally, libraries in Node.js are written using non-blocking paradigms, making blocking behavior the exception rather than the norm. When Node.js performs an I/O operation, like reading from the network, accessing a database or the filesystem, instead of blocking the thread and wasting CPU cycles waiting, Node.js will resume the operations when the response comes back. This allows Node.js to handle thousands of concurrent connections with a single server without introducing the burden of managing thread concurrency, which could be a significant source of bugs. Node.js has a unique advantage because millions of frontend developers that write JavaScript for the browser are now able to write the server-side code in addition to the client-side code without the need to learn a completely different language. In Node.js the new ECMAScript standards can be used without problems, as you don\'t have to wait for all your users to update their browsers - you are in charge of deciding which ECMAScript version to use by changing the Node.js version, and you can also enable specific experimental features by running Node.js with flags.\0";
	letterCounter frequencies[LETTER_NUM];
	findLetterFrequency(text, frequencies);
	printf("For the text: \n\n");
	printf("%s", text);
	printf("\n----------LETTER FREQUENCIES----------\n");
	for (int i = 0; i < LETTER_NUM; ++i) {
		printf("%c: %%%.2lf\n", frequencies[i].letter, frequencies[i].counter * 100);
	}
	return 0;
}

void findLetterFrequency(const char* text, letterCounter returnFrequencies[LETTER_NUM]) {
	initializeLetterCounter(returnFrequencies);
	int totalCounter = 0;
	for (int i = 0; text[i] != '\0'; ++i) {
		letterCounter* counter = getLetterCounter(returnFrequencies, text[i]);
		if (counter) {
			++counter->counter;
			++totalCounter;
		}
	}
	for (int i = 0; i < LETTER_NUM; ++i) {
		returnFrequencies[i].counter = returnFrequencies[i].counter / totalCounter;
	}
}

letterCounter* getLetterCounter(letterCounter arr[LETTER_NUM], char c) {
	for (int i = 0; i < LETTER_NUM; ++i) {
		if (arr[i].letter == tolower(c)) return arr + i;
	}
	return NULL;
}

void initializeLetterCounter(letterCounter arr[LETTER_NUM]) {
	arr[0].letter = 'a'; arr[0].counter = 0;
	arr[1].letter = 'b'; arr[1].counter = 0;
	arr[2].letter = 'c'; arr[2].counter = 0;
	arr[3].letter = 'd'; arr[3].counter = 0;
	arr[4].letter = 'e'; arr[4].counter = 0;
	arr[5].letter = 'f'; arr[5].counter = 0;
	arr[6].letter = 'g'; arr[6].counter = 0;
	arr[7].letter = 'h'; arr[7].counter = 0;
	arr[8].letter = 'i'; arr[8].counter = 0;
	arr[9].letter = 'j'; arr[9].counter = 0;
	arr[10].letter = 'k'; arr[10].counter = 0;
	arr[11].letter = 'l'; arr[11].counter = 0;
	arr[12].letter = 'm'; arr[12].counter = 0;
	arr[13].letter = 'n'; arr[13].counter = 0;
	arr[14].letter = 'o'; arr[14].counter = 0;
	arr[15].letter = 'p'; arr[15].counter = 0;
	arr[16].letter = 'q'; arr[16].counter = 0;
	arr[17].letter = 'r'; arr[17].counter = 0;
	arr[18].letter = 's'; arr[18].counter = 0;
	arr[19].letter = 't'; arr[19].counter = 0;
	arr[20].letter = 'u'; arr[20].counter = 0;
	arr[21].letter = 'v'; arr[21].counter = 0;
	arr[22].letter = 'w'; arr[22].counter = 0;
	arr[23].letter = 'x'; arr[23].counter = 0;
	arr[24].letter = 'y'; arr[24].counter = 0;
	arr[25].letter = 'z'; arr[25].counter = 0;
}