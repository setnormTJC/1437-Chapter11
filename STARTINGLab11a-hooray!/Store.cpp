#include "Store.h"

void Store::print()
{
	cout << "Store attributes " << Store::name << "\t" << Store::revenue << endl; 
}

Store::Store(string name, double revenue)
	: name(name), revenue(revenue)
{

}
	//this instance/usage of single colon is NOT meaning inheritance


//insert a few more `Store` member function defs here (if desired/needed)


/*---------------BEGIN WEBSTORE definitions!-------------------------*/

WebStore::WebStore(string name, double revenue, string webAddress, bool hasDroneDelivery)
	:Store(name, revenue)
{
	this->webAddress = webAddress; 
	this->hasDroneDelivery = hasDroneDelivery; 
}

void WebStore::print()
{
	Store::print(); 
	cout << WebStore::webAddress << "\t" << hasDroneDelivery << endl;
}
