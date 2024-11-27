/*private:
	std::string _NetWorkName;
	ProfileList _ProfileList;
	int _MinAge;*/

#include "SocialNetWork.hpp"


void SocialNetwork::init(std::string networkName, int minAge) {
	_NetWorkName = networkName;
	_MinAge = minAge;
}
void SocialNetwork::clear() {
	_NetWorkName = "";
	_MinAge = 0;
	_ProfileList.clear();
}
std::string SocialNetwork::getNetworkName() const {
	return _NetWorkName;
}
int SocialNetwork::getMinAge() const {
	return _MinAge;
}
bool SocialNetwork::addProfile(Profile profile_to_add) {
	if (profile_to_add.getOwner().getAge() < _MinAge) {
		return false;
	}
	else {
		_ProfileList.add(profile_to_add);
		return true;
	}
}
std::string SocialNetwork::getWindowsDevices() const {
	std::string out_put;
	DevicesList windows_devides;
	windows_devides.init();

	ProfileNode* temp_profile = new ProfileNode;
	temp_profile = _ProfileList.get_first();
	DeviceNode* temp_device = new DeviceNode;

	//get list of windows devices
	do {
		temp_device = temp_profile->get_data().getOwner().getDevices().get_first();
		do {
			if (temp_device->get_data().getOS() == WINDOWS7 || temp_device->get_data().getOS() == WINDOWS10 || temp_device->get_data().getOS() == WINDOWS11) { //checks if os of device is windows
				windows_devides.add(temp_device->get_data());
			}
			temp_device = temp_device->get_next();
		} while (temp_device->get_next() != nullptr); //checks if next device in profile is null

		
		temp_profile = temp_profile->get_next();
	} while (temp_profile->get_next() != nullptr); //checks if next profile is null

	//turn list to string
	if (windows_devides.get_first() != nullptr) {
		do {
			out_put = ", [" + windows_devides.get_first()->get_data().getID() + windows_devides.get_first()->get_data().getOS() + "]";
		} while (windows_devides.get_first()->get_next() != nullptr);
	}
	delete temp_profile;
	delete temp_device;
	return out_put;


}