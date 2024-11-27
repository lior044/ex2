#pragma once
#include <string>
#include "Profile.hpp"
#include "ProfileList.hpp"

class SocialNetwork {
public:
	void init(std::string networkName, int minAge);
	void clear();
	std::string getNetworkName() const;
	int getMinAge() const;
	bool addProfile(Profile profile_to_add);
	std::string getWindowsDevices() const;

private:
	std::string _NetWorkName;
	ProfileList _ProfileList;
	int _MinAge;
};