#include <iostream>


class Instrument 
{
public:
    virtual ~Instrument() = default;
    virtual void play() const { std::cout << "Instrument is playing" << std::endl; }
};

class Piano : public Instrument
{
public:
    virtual void play() const override { std::cout << "Piano is playing" << std::endl; }
};

class Violin : public Instrument
{
public:

    virtual void play() const override { std::cout << "Violin is playing" << std::endl; }
};

class Drum : public Instrument
{
public:
    virtual void play() const override { std::cout << "Drum is playing" << std::endl; }
};


int main()
{
    Piano p; Violin v; Drum d;
    Instrument * orchestra[3];
    orchestra[0] = new Piano;
    orchestra[1] = new Violin;
    orchestra[2] = new Drum;

    for (int i = 0; i < 3; i++)
    {
        orchestra[i]->play();
        delete orchestra[i];
    }
    return 0;
}