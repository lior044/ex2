#include "User.hpp"
#include <iostream>

void User::init(unsigned int id, std::string username, unsigned int age) {
	_MyDevices = new DevicesList;
	_MyDevices->init();
	_ID = id;
	_UserName = username;
	_Age = age;
}

void User::clear() {
	//_MyDevices->clear();
	delete _MyDevices;
	_MyDevices = nullptr;
}
unsigned int User::getID() const {
	return _ID;
}
std::string User::getUserName() const {
	return _UserName;
}
unsigned int User::getAge() const {
	return _Age;
}
DevicesList& User::getDevices() const {
	return *_MyDevices;
}
void User::addDevice(Device newDevice) {
	_MyDevices->add(newDevice);
}
bool User::checkIfDevicesAreOn() const {
	unsigned int all_on = 1;
	DeviceNode* temp_device_node = new DeviceNode;
	Device temp_device;
	if (_MyDevices->get_first() == nullptr) {
		delete temp_device_node;
		return all_on == 1;
	}
	else {
		temp_device_node = _MyDevices->get_first();

		while (temp_device_node->get_next() != nullptr) {
			temp_device = temp_device_node->get_data();
			if (!temp_device.isActive()) {
				all_on = 0;
			}
			temp_device_node = temp_device_node->get_next();
		}
	}





	delete temp_device_node;
	return all_on == 1;
}