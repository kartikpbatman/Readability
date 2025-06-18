# 📖 Readability Analyzer (Harvard/CS50 Problem Set Solution)

This project is a solution to the **Readability** problem from the **CS50x Harvard course**. It determines the reading grade level of a given piece of text using the **Coleman-Liau index**.

---

## 🧠 What It Does

- Takes a block of input text.
- Counts the number of **letters**, **words**, and **sentences**.
- Calculates the **Coleman-Liau index** to estimate U.S. grade level.
- Outputs: `Grade X`, `Before Grade 1`, or `Grade 16+` depending on score.

---

## 🚀 Tech Used

- **Language:** C
- **Platform:** Command-line

---

## 🧪 How It Works

- The formula used is:

- **index = 0.0588 * L - 0.296 * S - 15.8**

Where:
- `L` = average number of letters per 100 words  
- `S` = average number of sentences per 100 words

---

## ▶️ How to Run

1. Clone the repo:
   ```bash
   git clone https://github.com/kartikpbatman/Readability.git
   cd Readability
