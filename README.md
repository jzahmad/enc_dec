This C code implements a simple encryption and decryption algorithm. It takes input from the user character by character
and performs the following operations:

1. **Shifting:** It shifts the first 3 bits of the character's ASCII value.
2. **Encoding:** It encodes the last 5 bits based on the character's position in the alphabet.
3. **Combining:** It combines the shifted first 3 bits with the encoded last 5 bits.
4. **Output:** It outputs the modified character.

The code uses bitwise operators (`^`, `>>`, `<<`, `|`) to manipulate the character's bits. The language used is C.
