/* Amerike university
 Author: Julio López
 Practice #: 19
 Date: 29/03/25
 Description: This program shall ask the user for the name of a videogame, its rating and price, and then display it */

     #include <iostream>
     using namespace std;
     struct GameData{

    private:
    string Name;
     double Rating;
     double Price;
        
    public:

        void setName(string N){
            Name = N;
        }
        
        void setRating(double R){
            Rating = R;
        }
        
        void setPrice(double P){
            Price = P;
        }
        
        string getName(){
            return Name;
        }
        
        double getRating(){
            return Rating;
        }
        
        double getPrice(){
            return Price;
        }
    };
        
int main() {
    GameData Data;
    string GameName;
    double GameRating;
    double GamePrice;

    cout << "Videogame name: ";
    cin >> GameName;
    Data.setName(GameName);

    cout << "Rating: ";
    cin >> GameRating;
    Data.setRating(GameRating);

    cout << "Price: ";
    cin >> GamePrice;
    Data.setPrice(GamePrice);

    cout << "Game data:\n";
    cout << "Name of the game: " << Data.getName() << endl;
    cout << "Rating of the game: " << Data.getRating() << endl;
    cout << "Price of the game: " << Data.getPrice() << endl;
        
 return 0;
}