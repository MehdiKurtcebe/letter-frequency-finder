package main

import (
	"fmt"
	"strings"
)

func main() {
	text := "Node.js is an open-source and cross-platform JavaScript runtime environment. " +
		"It is a popular tool for almost any kind of project! Node.js runs the V8 JavaScript " +
		"engine, the core of Google Chrome, outside of the browser. This allows Node.js " +
		"to be very performant. A Node.js app runs in a single process, without creating " +
		"a new thread for every request. Node.js provides a set of asynchronous I/O primitives " +
		"in its standard library that prevent JavaScript code from blocking and generally, " +
		"libraries in Node.js are written using non-blocking paradigms, making blocking behavior " +
		"the exception rather than the norm. When Node.js performs an I/O operation, like " +
		"reading from the network, accessing a database or the filesystem, instead of " +
		"blocking the thread and wasting CPU cycles waiting, Node.js will resume the operations " +
		"when the response comes back. This allows Node.js to handle thousands of concurrent " +
		"connections with a single server without introducing the burden of managing thread " +
		"concurrency, which could be a significant source of bugs. Node.js has a unique " +
		"advantage because millions of frontend developers that write JavaScript for the browser " +
		"are now able to write the server-side code in addition to the client-side code without " +
		"the need to learn a completely different language. In Node.js the new ECMAScript " +
		"standards can be used without problems, as you don't have to wait for all your users " +
		"to update their browsers - you are in charge of deciding which ECMAScript version " +
		"to use by changing the Node.js version, and you can also enable specific " +
		"experimental features by running Node.js with flags."

	frequencies := findLetterFrequency(text)
	fmt.Println("For the text: \n")
	fmt.Println(text)
	fmt.Println("\n----------LETTER FREQUENCIES----------\n")
	for k, f := range frequencies {
		fmt.Println(string(k), ": %", f * 100)
	}
}

func findLetterFrequency(text string) map[rune]float64 {
	lettersCount := initializeLetterCounter()
	var totalCounter float64 = 0
	lowerText := strings.ToLower(text)
	for _, l := range lowerText {
		if _, ok := lettersCount[l]; ok {
			lettersCount[l]++
			totalCounter++
		}
	}
	letterFrequencies := initializeLetterCounter()
	for k, c := range lettersCount {
		letterFrequencies[k] = c / totalCounter
	}
	return letterFrequencies
}

func initializeLetterCounter() map[rune]float64 {
	return map[rune]float64{
		'a': 0,
		'b': 0,
		'c': 0,
		'd': 0,
		'e': 0,
		'f': 0,
		'g': 0,
		'h': 0,
		'i': 0,
		'j': 0,
		'k': 0,
		'l': 0,
		'm': 0,
		'n': 0,
		'o': 0,
		'p': 0,
		'q': 0,
		'r': 0,
		's': 0,
		't': 0,
		'u': 0,
		'v': 0,
		'w': 0,
		'x': 0,
		'y': 0,
		'z': 0,
	}
}