#include "Device.hpp"
#include <iostream>

std::string Device::getOS() const {
	return _OS;
}


bool Device::isActive() const {
	return _Active;
}

unsigned int Device::getID() const {
	return _ID;
}
DeviceType Device::getType() const {
	return _Type;
}
void Device::activate() {
	_Active = ACTIVE;
}
void Device::deactivate() {
	_Active = DEACTIVE;
}

void Device::init(unsigned int id, DeviceType type, std::string os) {
	activate();
	_Type = type;
	_OS = os;
	_ID = id;
}