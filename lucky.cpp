#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> luckyNumbers = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
    int winningNumber;

    sort(luckyNumbers.begin(), luckyNumbers.end());

    cout << "Enter this week's winning 5-digit number: ";
    cin >> winningNumber;

    bool isWinner = binary_search(luckyNumbers.begin(), luckyNumbers.end(), winningNumber);

    if (isWinner) {
        cout << "Congratulations! You have a winning ticket!\n";
    } else {
        cout << "Sorry, none of your tickets are winners this week.\n";
    }

    return 0;
}
