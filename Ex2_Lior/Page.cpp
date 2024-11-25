#include "Page.hpp"

void Page::init() {
	_Posts = "";
	_Status = "";
}
std::string Page::getPosts() const {
	return _Posts;
}
std::string Page::getStatus() const {
	return _Status;
}
void Page::clearPage() {
	_Posts = "";
}
void Page::setStatus(std::string status) {
	_Status = status;
}
void Page::addLineToPosts(std::string new_Line) {
	_Posts = _Posts + "/n" + new_Line;
}