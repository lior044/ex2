#pragma once
#include <string>
#include "User.hpp";
#include "Page.hpp";
#include "UserList.hpp";

class Profile {
public:
	void init(User owner);
	void clear();
	User getOwner() const;
	std::string getPage() const;
	std::string getFriends() const;
	std::string getFriendsWithSameNameLength() const;
	void setStatus(std::string new_ststus);
	void addPostToProfilePage(std::string post);
	void addFriend(User friend_to_add);
	void changeAllWordsInStatus(std::string word);
	void changeWordInStatus(std::string word_to_replace, std::string new_word);

private:
	User _Owner;
	Page _Page;
	UserList _Friends;

};