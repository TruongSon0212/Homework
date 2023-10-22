#include <iostream>

int main() {
    const int NUM_MONTHS = 12;
    double rainfall[NUM_MONTHS];
    double totalRainfall = 0;
    double averageRainfall;
    double maxRainfall = 0;
    double minRainfall = 0;
    int maxMonth, minMonth;

    for (int i = 0; i < NUM_MONTHS; i++) {
        do {
            std::cout << "Enter rainfall for month " << i + 1 << ": ";
            std::cin >> rainfall[i];
        } while (rainfall[i] < 0);

        totalRainfall += rainfall[i];

        if (i == 0 || rainfall[i] > maxRainfall) {
            maxRainfall = rainfall[i];
            maxMonth = i;
        }
        if (i == 0 || rainfall[i] < minRainfall) {
            minRainfall = rainfall[i];
            minMonth = i;
        }
    }

    averageRainfall = totalRainfall / NUM_MONTHS;

    std::cout << "\nTotal rainfall for the year: " << totalRainfall << " units\n";
    std::cout << "Average monthly rainfall: " << averageRainfall << " units\n";
    std::cout << "Month with the highest amount of rainfall: " << maxMonth + 1 << " ("
              << maxRainfall << " units)\n";
    std::cout << "Month with the lowest amount of rainfall: " << minMonth + 1 << " ("
              << minRainfall << " units)\n";

    return 0;
}