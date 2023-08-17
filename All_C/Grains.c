/*
Instructions
Calculate the number of grains of wheat on a chessboard given that the number on each square doubles.

There once was a wise servant who saved the life of a prince. The king promised to pay whatever the servant could dream up. Knowing that the king loved chess, the servant told the king he would like to have grains of wheat. One grain on the first square of a chess board, with the number of grains doubling on each successive square.

There are 64 squares on a chessboard (where square 1 has one grain, square 2 has two grains, and so on).

Write code that shows:

how many grains were on a given square, and
the total number of grains on the chessboard
Source
JavaRanch Cattle Drive, exercise 6The link opens in a new window or tab
*/


#include <stdio.h>
#include <stdint.h>

uint64_t square(uint8_t index);
uint64_t total(void);

int main() {
    int square_number;

    printf("Enter a square number (1-64): ");
    scanf("%d", &square_number);

    uint64_t answer_square = square(square_number);
    uint64_t answer_total = total();

    printf("The grains on square %d: %lu\n", square_number, answer_square);
    printf("The total grains on the chessboard: %lu\n", answer_total);

    return 0;
}

uint64_t square(uint8_t index) {
    if (index >= 1 && index <= 64) {
        return ((uint64_t)1) << (index - 1);
    }
    return 0;
}

uint64_t total(void) {
    uint64_t total = 0;
    for (int i = 1; i <= 64; i++) {
        total += square(i);
    }
    return total;
}
