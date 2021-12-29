import java.util.HashMap;

public class Main {
	public static void main(String[] args) {
		String text = "Node.js is an open-source and cross-platform JavaScript runtime environment. " +
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
				"experimental features by running Node.js with flags.";

		HashMap<Character, Double> frequencies = findLetterFrequency(text);
		System.out.println("For the text: \n");
		System.out.println(text);
		System.out.println("\n----------LETTER FREQUENCIES----------\n");
		for (char k : frequencies.keySet()) {
			System.out.println("" + k + ": %" + (frequencies.get(k) * 100));
		}
	}

	public static HashMap<Character, Double> findLetterFrequency(String text) {
		HashMap<Character, Double> letters_count = initializeLetterCounter();
		int totalCounter = 0;
		char[] lowerText = text.toLowerCase().toCharArray();
		for (char l : lowerText) {
			if (letters_count.get(l) != null) {
				letters_count.put(l, letters_count.get(l) + 1);
				totalCounter++;
			}
		}
		HashMap<Character, Double> letter_frequencies = initializeLetterCounter();
		for (char k : letters_count.keySet()) {
			letter_frequencies.put(k, letters_count.get(k) / totalCounter);
		}
		return letter_frequencies;
	}

	private static HashMap<Character, Double> initializeLetterCounter() {
		HashMap<Character, Double> c = new HashMap<>();
		c.put('a', 0.0);
		c.put('b', 0.0);
		c.put('c', 0.0);
		c.put('d', 0.0);
		c.put('e', 0.0);
		c.put('f', 0.0);
		c.put('g', 0.0);
		c.put('h', 0.0);
		c.put('i', 0.0);
		c.put('j', 0.0);
		c.put('k', 0.0);
		c.put('l', 0.0);
		c.put('m', 0.0);
		c.put('n', 0.0);
		c.put('o', 0.0);
		c.put('p', 0.0);
		c.put('q', 0.0);
		c.put('r', 0.0);
		c.put('s', 0.0);
		c.put('t', 0.0);
		c.put('u', 0.0);
		c.put('v', 0.0);
		c.put('w', 0.0);
		c.put('x', 0.0);
		c.put('y', 0.0);
		c.put('z', 0.0);
		return c;
	}
}