VigeneresCipher
===============

vigenere.c, is a program that encrypts a message using Vigenère’s cipher. Vigenère’s cipher uses a Caesar cipher with a different shift at each position in the text; the value of the shift is determined by a repeating keyword. For example, suppose the plaintext to be encrypted is: WATERTHEPLANTS The person sending the message chooses a keyword and repeats is until it matches the length of the plaintext. In the case of the keyword TURNIP it would be: TURNIPTURNIPTU
Plaintext: WATERTHEPLANTS
Key: TURNIP
Ciphertext:PUKRZIAYGYICMM
For example, here is a visualization of how one of the characters is encoded:
WATERTHEPLANTS
TURNIPTURNIPTU
PUKRZIAYGYICMM

Underlined is a sample input.
prompt % vigenere Foobar
Enter plaintext: Hello, World.
Ciphertext: Mszmo, Ntfze.
