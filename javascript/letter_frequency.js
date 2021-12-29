let findLetterFrequency = (text) => {
    let letters_count = initializeLetterCounter();
    let totalCounter = 0;
    let lowerText = text.toLowerCase();
    for (let l of lowerText) {
        if (letters_count[l] >= 0) {
            letters_count[l]++;
            totalCounter++;
        }
    }
    let letter_frequencies = initializeLetterCounter();
    for (let k of Object.keys(letters_count)) {
        letter_frequencies[k] = letters_count[k] / totalCounter;
    }
    return letter_frequencies;
};

let initializeLetterCounter = () => {
    return {
        "a": 0,
        "b": 0,
        "c": 0,
        "d": 0,
        "e": 0,
        "f": 0,
        "g": 0,
        "h": 0,
        "i": 0,
        "j": 0,
        "k": 0,
        "l": 0,
        "m": 0,
        "n": 0,
        "o": 0,
        "p": 0,
        "q": 0,
        "r": 0,
        "s": 0,
        "t": 0,
        "u": 0,
        "v": 0,
        "w": 0,
        "x": 0,
        "y": 0,
        "z": 0,
    };
};

module.exports = { findLetterFrequency };