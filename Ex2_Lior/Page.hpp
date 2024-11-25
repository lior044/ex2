#pragma once
#include <string>

class Page {
public:
	void init();
	std::string getPosts() const;
	std::string getStatus() const;
	void clearPage();
	void setStatus(std::string status);
	void addLineToPosts(std::string new_Line);

private:
	std::string _Posts;
	std::string _Status;

};