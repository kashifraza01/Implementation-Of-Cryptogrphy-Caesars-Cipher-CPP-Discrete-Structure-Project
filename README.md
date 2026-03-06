# 🔐 Caesar Cipher in C++

A simple C++ implementation of the **Caesar Cipher** encryption and decryption algorithm.
This program allows users to input a message and a shift value (1–25), then encrypts and decrypts the message accordingly.

---

## 📖 About Caesar Cipher

The **Caesar Cipher** is one of the oldest and simplest encryption techniques. It is a type of substitution cipher where each letter in the plaintext is shifted a certain number of places down or up the alphabet.

For example (Shift = 3):

Plaintext:

```
HELLO
```

Encrypted:

```
KHOOR
```

---

## 🚀 Features

* Encrypts alphabetic characters (A–Z, a–z)
* Preserves uppercase and lowercase letters
* Leaves non-alphabetic characters unchanged (numbers, symbols, spaces)
* Decrypts the encrypted message back to original text
* Validates shift input (must be between 1 and 25)

---

## 🛠️ Technologies Used

* C++
* Standard Library (`<iostream>`, `<string>`)

---

## 📂 Project Structure

```
caesar-cipher/
│
├── main.cpp
└── README.md
```

---

## ▶️ How to Run

### 1️⃣ Compile the Program

Using g++:

```bash
g++ main.cpp -o caesar
```

### 2️⃣ Run the Program

```bash
./caesar
```

(On Windows)

```bash
caesar.exe
```

---
## 💻 Example Usage
=== Caesar Cipher Encryption ===
Enter a message: Hello
Enter shift value (1-25): 3
Encrypted message: Khoor
Decrypted message: Hello
---

## 🧠 How It Works

### 🔒 Encryption

* Checks if each character is alphabetic.
* Determines if it's uppercase or lowercase.
* Applies the shift using modular arithmetic:

  ```
  (character - base + shift) % 26 + base
  ```

### 🔓 Decryption

* Reverses encryption by shifting back:

  ```
  encrypt(text, 26 - shift)
  ```

---

## 📌 Shift Rules

* Minimum shift: **1**
* Maximum shift: **25**
* Shift value outside this range will result in an error message.

---

## 🎯 Learning Purpose

This project is great for:

* Beginners learning C++
* Understanding basic cryptography concepts
* Practicing string manipulation
* Working with ASCII values

---

## 📜 License

This project is open-source and free to use for educational purposes.
