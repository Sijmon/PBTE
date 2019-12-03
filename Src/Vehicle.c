#include "Vehicle.h"
#include <stdio.h>

unsigned int availableCapacity(Vehicle *vehicle) {
    return vehicle->capacity - vehicle->inventory;
}

/**
 * @returns a negative number if the vehicle must deliver at the hub. If positive the vehicle takes inventory from the hub.
 */
int getVehicleActionAtHub(Hub *hub, Vehicle *vehicle){
    int balance = getBalance(hub);
    int action = 0;
    if(balance < 0){
        action = (-balance < vehicle->inventory) ? balance : -vehicle->inventory;
    }
    else if(balance > 0){
        action = (balance < availableCapacity(vehicle)) ? balance : availableCapacity(vehicle);
    }
    return action;
}

int doVehicleActionAtHub(Hub *hub, Vehicle *vehicle){
    int action = getVehicleActionAtHub(hub, vehicle);
    printf("Vehicle: %i/%i, Hub %i/%i -> %i\n", vehicle->inventory, vehicle->capacity, hub->inventory, hub->capacity, action);
    hub->inventory -= action;
    vehicle->inventory += action;
    return action;
}