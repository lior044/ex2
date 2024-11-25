#pragma once
#include <string>
#include "DeviceList.hpp"

class User {
public:
	void init(unsigned int id, std::string username, unsigned int age);
	void clear();
	unsigned int getID() const;
	std::string getUserName() const;
	unsigned int getAge() const;
	DevicesList& getDevices() const;
	void addDevice(Device newDevice);
	bool checkIfDevicesAreOn() const;

private:
	unsigned int _ID;
	std::string _UserName;
	unsigned int _Age;

	DevicesList* _MyDevices;
};