#include "VIPTruck.h"

VIPTruck::VIPTruck(int speed, int capacity, int max_journeys, int maintaince_time, int ID, char s)
	: Truck(speed, capacity, max_journeys, maintaince_time, ID, 'V', s)
{

}

void VIPTruck::PolymorphismAcheive()
{
	// Does Nothing But We Can Use Dynamic Cast
}
