#pragma once

#include <iostream>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(Brain const &src);
    Brain	operator=(Brain const &src);
    ~Brain();

    void    get_ideas();
    void	display_ideas() const;
};


