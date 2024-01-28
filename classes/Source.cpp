#include <iostream>
#include <vector>
using namespace std;

// Parent class
class Vehicle
{
public:
	Vehicle(const string& vehicleName, int vehicleCapacity)
		: name{ vehicleName }, capacity{ vehicleCapacity }
	{

	}

	void Run()
	{
		cout << name << " running with " << capacity << " people" << endl;
	}

	int GetCapacity() const 
	{
		return capacity;
	}
	void SetCapacity(int newCapacity)
	{
		if (newCapacity < 0) return;
		capacity = newCapacity;
	}

	// weak protection, but now child classes do have acces variables to inside of protected
	// STILL NOT ACCESSIBLE OUTSIDE OF THE CLASS
protected:
	string name;

	// strong protection, even child classes don't have access
private:
	int capacity;
};

// Car class inheriting from Vehicle class
// Child class
class Car : public Vehicle
{
public:
	Car(const string& carName, int carCapacity, float carTotalMil)
		: Vehicle{ carName, carCapacity }, totalMil{ carTotalMil }
	{

	}

	void Run()
	{
		cout << name << " with " << totalMil << " mil " << GetCapacity() << " people running!" << endl;
	}

	float GetTotalMil() const
	{
		return totalMil;
	}

private:
	float totalMil;
};

int main()
{
	Vehicle newVehicle{ "Ocean2023", 1500 };

	Car anilCar{ "Benz23v", 5, 55523 };
	Vehicle& carAsVehicle = anilCar;

	anilCar.Run(); // Benz23v with 55523 mil 5 people running!
	carAsVehicle.Run(); // Benz23v running with 5 people
}