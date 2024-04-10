#include <iostream>
#include <iomanip>

using namespace std;

class Player{
  private: 
    string name;
    int id;
    int level;

  public:
    Player(string newName, int newId, int newLevel){
        name = newName;
        id = newId;
        level = newLevel;
    }

    void printInfo(){
        cout << "Name: " << name << " Id: " << id << " Level: " << level << endl;
    }

    void setName(string newName){
        name = newName;
    }

    void setId(int newId){
        id = newId;
    }

    void setLevel(int newLevel){
        level = newLevel;
    }
    
    string getName(){
        return name;
    }

    int getId(){
        return id;
    }

    int getLevel(){
        return level;
    }
};

int main(){
    Player player1 = Player("codins", 1, 0);
    player1.printInfo();

    cout << player1.getName() << endl;
    cout << player1.getId() << endl;;
    cout << player1.getLevel() << endl;

    player1.setName("shaivil");
    player1.setId(11);
    player1.setLevel(100);

    player1.printInfo();
}