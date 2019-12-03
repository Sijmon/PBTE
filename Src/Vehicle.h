#pragma once

/**
 * @struct vehicle
 * This is the data structure for a vehicle which can be used as a rebalancing vehicle
 */
typedef struct Vehicle {
    
    /**
     * The current inventory of the vehicle
     */
    unsigned int inventory;
    
    /**
     * The maximum capacity of the vehicle (inclusive)
     */
    unsigned int capacity;
} Vehicle;

/**
 * calculates the available capcity (free space)
 * @param the vehicle to calculate the available capacity for
 * @return the available capacity for the vehicle
 */
unsigned int availableCapacity(Vehicle *v);
