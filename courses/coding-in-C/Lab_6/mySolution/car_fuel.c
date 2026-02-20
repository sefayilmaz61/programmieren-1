#include <stdio.h>
#include <string.h>

struct car {
    float fuel_level;
    float max_fuel_level;
    char model[50];
};

void refuel(struct car *p_car, float amount)
{
    if (p_car->fuel_level + amount <= p_car->max_fuel_level) 
    {
        p_car->fuel_level += amount;
    } 
    else 
    {
        p_car->fuel_level = p_car->max_fuel_level;
    }
}

int main(void)
{
    struct car myCar;

    myCar.fuel_level = 25.0;
    myCar.max_fuel_level = 70.0;
    strcpy(myCar.model, "Mercedes-Benz S-Coupe");

    printf("Before refueling:\n");
    printf("Model: %s\n", myCar.model);
    printf("Fuel level: %.2f / %.2f\n\n", myCar.fuel_level, myCar.max_fuel_level);

    refuel(&myCar,35.0);

    printf("After refueling:\n");
    printf("Model: %s\n", myCar.model);
    printf("Fuel level: %.2f / %.2f\n", myCar.fuel_level, myCar.max_fuel_level);

    return 0;
}
