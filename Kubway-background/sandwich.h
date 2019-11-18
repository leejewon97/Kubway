#include <string>

using namespace std;

class menu
{
private:
	string sand;
	string bread;
	string cheese;
	string extra;
	string vegetable;
	string sauce;
public:
	void setMenu(char m);
	string getMenu();
	void setBread(char b);
	string getBread();
	void setCheese(char c);
	string getCheese();
	void setExtra(char e);
	string getExtra();
	void setVegetable(char v);
	string getVegetable();
	void setSauce(char s);
	string getSauce();
	void print(menu m);
};

class newMenu : public menu
{

};

class classicMenu : public menu
{

};

class freshLightMenu : public menu
{

};

class premiumMenu : public menu
{

};

class morningMenu : public menu
{

};

class steakCheeseAvocadoWrap : public newMenu
{

};

class shrimpEggMayoWrap : public newMenu
{

};

class chickenBaconMiniWrap : public newMenu
{

};

class baconWedgeMiniWrap : public newMenu
{

};

class shrimp : public newMenu
{

};

class shrimpAvocado : public newMenu
{

};

class eggMayo : public classicMenu
{

};

class italianBmt : public classicMenu
{

};

class blt : public classicMenu
{

};

class meatball : public classicMenu
{

};

class ham : public classicMenu
{

};

class tuna : public classicMenu
{

};

class rotisserieBarbecueChicken : public freshLightMenu
{

};

class roastedChicken : public freshLightMenu
{

};

class roastedBeef : public freshLightMenu
{

};

class subwayClub : public freshLightMenu
{

};

class turkey : public freshLightMenu
{

};

class veggieDelite : public freshLightMenu
{

};


class pulledPork : public premiumMenu
{

};

class steakCheese : public premiumMenu
{

};

class trukeyBaconAvocado : public premiumMenu
{

};

class chickenBaconRanch : public premiumMenu
{

};

class subwayMelt : public premiumMenu
{

};

class turkeyBacon : public premiumMenu
{

};

class spicyItalian : public premiumMenu
{

};

class chickenTeriyaki : public premiumMenu
{

};

class blackForestHamEggCheese : public morningMenu
{

};

class westernEggCheese : public morningMenu
{

};

class baconEggCheese : public morningMenu
{

};

class steakEggCheese : public morningMenu
{

};