#include <iostream>

class Instrument 
{
public:
    virtual ~Instrument() = default;
    virtual void play() const { std::cout << "Insturment is playing" << std::endl; }
};

class Piano : Instrument
{
public:
    virtual void play() const override { std::cout << "Piano is playing" << std::endl; }
};

class Violin : Instrument
{
public:

    virtual void play() const override { std::cout << "Violin is playing" << std::endl; }
};

class Drum : Instrument
{
public:
    virtual void play() const override { std::cout << "Drum is playing" << std::endl; }
};


int main()
{
    
    return 0;
}