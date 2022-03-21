#include <iostream>
#include <string>

using namespace std;

class GameEntry{
	public :
		GameEntry(const string& n="",int s=0);
		string getName() const;
		int getScore() const;

	private:
		string name;
		int score;
};

GameEntry::GameEntry(const string& n, int s)
	:name(n), score(s) {}

string GameEntry::getName() const {return name;}
int GameEntry::getScore() const {return score;}

/*----------------------------------------------------------------*/

class Scores{
	public :
		Scores(int maxEnt=10);
		~Scores();
		void add(const GameEntry& e);
		GameEntry remove(int i)
			throw(IndexOutOfBounds);

	private :
		int maxEntries;
		int numEntries;
		GameEntry* entreis;
};

Scores::Scores(int maxEnt){
	maxEntries = maxEnt;
	entreis = new GameEntry[maxEntries];
	numEntries=0;
}

Scores::~Scores(){
	delete[] entreis;
}
