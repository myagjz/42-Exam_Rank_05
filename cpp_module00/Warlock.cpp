#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title) : _name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock() {}

Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" << std::endl;
}

std::string const & Warlock::getName() const
{
	return (_name);
}

std::string const & Warlock::getTitle() const
{
	return (_title);
}

void	Warlock::setTitle(std::string const & str)
{
	_title = str;
}

void	Warlock::introduce() const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}