#include <stdio.h>

int main() {
    int roadLength, distanceBetweenTolls, costPerKilometer, TollCost;

    scanf("%d", &roadLength);
    scanf("%d", &distanceBetweenTolls);
    scanf("%d", &costPerKilometer);
    scanf("%d", &TollCost);

    int tollQuantity = roadLength / distanceBetweenTolls;

    int travelCost = roadLength*costPerKilometer + tollQuantity*TollCost;
    printf("%d", travelCost);

    return 0;
}