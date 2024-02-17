#include <iostream>
#include <string>

class Text
{
protected:
	std::string text;
public:
	// Text() : text("") {};
	Text(const std::string& text) : text{ text } {}
	virtual void print()
	{
		std::cout << text << std::endl;
	}
};
class GreatTask : public Text
{
public:
	GreatTask(const std::string& text) : Text{ text } {}
	virtual void print() override
	{
		std::cout << "[!] " << text << " [!]" << std::endl;
	}
};
class DeadlineTask : public Text
{
private:
	int day;
	int month;
public:
	DeadlineTask(const std::string& text, int day, int month) : Text{ text }, day{ day }, month{ month } {}
	virtual void print() override
	{
		std::cout << text << " (Deadline: " << day << "." << month << ")" << std::endl;
	}
};
class DailyTask : public Text
{
private:
	int hours;
	int minutes;
public:
	DailyTask(const std::string& text, int hours, int minutes) : Text{ text }, hours{ hours }, minutes{ minutes } {}
	DailyTask(const std::string& text, int hours) : Text{ text }, hours{ hours }, minutes{ 00 } {}
	virtual void print() override
	{
		std::cout << text << " (Time: " << hours << ":" << minutes << ")" << std::endl;
	}
};



int main()
{
	Text* all[5];
	all[0] = new Text("Go to school");
	all[1] = new GreatTask("Write an essay");
	all[2] = new DeadlineTask("Homework", 16, 02);
	all[3] = new DailyTask("Laundry", 13, 30);
	all[4] = new DailyTask("Shower", 16);
	for (size_t i = 0; i < 5; i++)
	{
		all[i]->print();
	}
}