/*
Syed Aalyan Raza Kazmi
22I-0833
A
*/

#include <iostream>
#include <string>
using namespace std;


class Item
{
	string Name;
	string ItemType;
	float price;
public:
	Item();
	string getname();
	string gettype();
	float getprice();
	void setname(string given);
	void settype(string given);
	void setprice(int given);
};
class Eggs : public Item
{
	int num_units;
	bool onsale;
	bool giftcard;
public:
	Eggs();
	Eggs(int number, float cost = 1, bool sale = 0, bool gift = 0);
	float price();
	bool gift();
	int getnum();
	bool getsale();

	friend ostream& operator<< (ostream& outp, Eggs given);
};
class Bread : public Item
{
	int num_units;
	bool onsale;
	bool giftcard;
public:
	Bread();
	Bread(int number, float cost = 1, bool sale = 0, bool gift = 0);
	float price();
	bool gift();
	int getnum();
	bool getsale();

	friend ostream& operator<< (ostream& outp, Bread given);

};
class Pens : public Item
{
	int num_units;
	bool onsale;
	bool giftcard;
public:
	Pens();
	Pens(int number, float cost = 1, bool sale = 0, bool gift = 0);
	float price();
	bool gift();
	int getnum();
	bool getsale();

	friend ostream& operator<< (ostream& outp, Pens given);
};
class Socks : public Item
{
	int num_units;
	bool onsale;
	bool giftcard;
public:
	Socks();
	Socks(int number, float cost = 1, bool sale = 0, bool gift = 0);
	float price();
	bool gift();
	int getnum();
	bool getsale();

	friend ostream& operator<< (ostream& outp, Socks given);
};

class Cart
{	Eggs* product;
	Bread* product2;
	Pens* product3;
	Socks* product4;
	int numegg;
	int numbread;
	int numpen;
	int numsock;
public:

	static int total_items;
	Cart();
	int getTotalItems();
	bool Discount();
	float price();
	operator string();
	~Cart();

	Cart& operator+=(Eggs& given);
	Cart& operator+=(Bread& given);
	Cart& operator+=(Pens& given);
	Cart& operator+=(Socks& given);

	Cart& operator-=(Eggs& given);
	Cart& operator-=(Bread& given);
	Cart& operator-=(Pens& given);
	Cart& operator-=(Socks& given);

	Cart& operator+(Eggs& given);
	Cart& operator+(Bread& given);
	Cart& operator+(Pens& given);
	Cart& operator+(Socks& given);

	Cart& operator-(Eggs& given);
	Cart& operator-(Bread& given);
	Cart& operator-(Pens& given);
	Cart& operator-(Socks& given);

	//Cart operator=(Cart given);
	friend ostream& operator<<(ostream& outp, Cart& given);
};
int Cart::total_items = 0;

int main()
{
	// example of non sale item.
	Bread p1(12, 3);
	cout << p1 << endl;
	// example of sale item
	Eggs p2(15, 1, true);
	// example of sale item with gift card
	Socks p3(20, 2.0, true, true);
	Cart c1;
	c1 += p1; //add bread to cart
	c1 += p1;
	c1 += p2; //add eggs to cart
	c1 += p3; //add socks to cart
	cout << c1 << endl;
	c1 = c1 - p1; // Delete all the unit of type bread
	cout << c1 << endl;
	Cart c2;
	//c2 = c1 + p2; // Add item of type eggs
	cout << c2 << endl;
	// // Delete all the units of eggs type food from the cart.
	c2 -= p2;
	cout << c2<<endl;
	cout << Cart::total_items<<endl; //displays number of all items in all carts.
	return 0;
}

Item::Item()
{
	Name = "";
	ItemType = "";
	price = 0;
}
string Item::getname()
{
	return Name;
}
string Item::gettype()
{
	return ItemType;
}
float Item::getprice()
{
	return price;
}
void Item::setname(string given)
{
	Name = given;
}
void Item::settype(string given)
{
	ItemType = given;
}
void Item::setprice(int given)
{
	price = given;
}

Eggs::Eggs()
{
	num_units = 0;
	onsale = 0;
	giftcard = 0;
	setprice(0);
	setname("Eggs");
	settype("Food");
}
Eggs::Eggs(int number, float cost, bool sale, bool gift)
{
	num_units = number;
	onsale = sale;
	giftcard = gift;
	setprice(cost);
	setname("Eggs");
	settype("Food");
}
float Eggs::price()
{
	if (!onsale)
		return getprice();
	else
		return getprice() * 0.75;
}
bool Eggs::gift()
{
	return giftcard;
}
int Eggs::getnum()
{
	return num_units;
}
bool Eggs::getsale()
{
	return onsale;
}
ostream& operator<<(ostream& outp, Eggs given)
{
	outp << '<' << given.getname() << '>' << "\t<" << given.getprice() << '>' << "\t<" << given.num_units << ">\t<Sale:" << given.onsale << ">\t<Give Card:" << given.gift() << ">\t<Price: Rs." << given.price() << '>' << endl;
	return outp;
}


Bread::Bread()
{
	num_units = 0;
	onsale = 0;
	giftcard = 0;
	setprice(0);
	setname("Bread");
	settype("Food");
}
Bread::Bread(int number, float cost, bool sale, bool gift)
{
	num_units = number;
	onsale = sale;
	giftcard = gift;
	setprice(cost);
	setname("Bread");
	settype("Food");
}
float Bread::price()
{
	if (!onsale)
		return getprice();
	else
		return getprice() * 0.75;
}
bool Bread::gift()
{
	return giftcard;
}
int Bread::getnum()
{
	return num_units;
}
bool Bread::getsale()
{
	return onsale;
}
ostream& operator<<(ostream& outp, Bread given)
{
	outp << '<' << given.getname() << '>' << "\t<" << given.getprice() << '>' << "\t<" << given.num_units << ">\t<Sale:" << given.onsale << ">\t<Give Card:" << given.gift() << ">\t<Price: Rs." << given.price() << '>' << endl;
	return outp;
}

Pens::Pens()
{
	num_units = 0;
	onsale = 0;
	giftcard = 0;
	setprice(0);
	setname("Pens");
	settype("Supplies");
}
Pens::Pens(int number, float cost, bool sale, bool gift)
{
	num_units = number;
	onsale = sale;
	giftcard = gift;
	setprice(cost);
	setname("Pens");
	settype("Supplies");
}
float Pens::price()
{
	if (!onsale)
		return getprice();
	else
		return getprice() * 0.75;
}
bool Pens::gift()
{
	return giftcard;
}
int Pens::getnum()
{
	return num_units;
}
bool Pens::getsale()
{
	return onsale;
}
ostream& operator<<(ostream& outp, Pens given)
{
	outp << '<' << given.getname() << '>' << "\t<" << given.getprice() << '>' << "\t<" << given.num_units << ">\t<Sale:" << given.onsale << ">\t<Give Card:" << given.gift() << ">\t<Price: Rs." << given.price() << '>' << endl;
	return outp;
}

Socks::Socks()
{
	num_units = 0;
	onsale = 0;
	giftcard = 0;
	setprice(0);
	setname("Socks");
	settype("Clothes");
}
Socks::Socks(int number, float cost, bool sale, bool gift)
{
	num_units = number;
	onsale = sale;
	giftcard = gift;
	setprice(cost);
	setname("Socks");
	settype("Clothes");
}
float Socks::price()
{
	if (!onsale)
		return getprice();
	else
		return getprice() * 0.75;
}
bool Socks::gift()
{
	return giftcard;
}
int Socks::getnum()
{
	return num_units;
}
bool Socks::getsale()
{
	return onsale;
}
ostream& operator<<(ostream& outp, Socks given)
{
	outp << '<' << given.getname() << '>' << "\t<" << given.getprice() << '>' << "\t<" << given.num_units << ">\t<Sale:" << given.onsale << ">\t<Give Card:" << given.gift() << ">\t<Price: Rs." << given.price() << '>' << endl;
	return outp;
}

bool operator==(Item& a, Item& b)
{
	if (a.getname() == b.getname() && a.getprice() == b.getprice() && a.gettype() == b.gettype())
		return 1;
	else
		return 0;
}

Cart::Cart()
{
	product = new Eggs[20];
	product2 = new Bread[20];
	product3 = new Pens[20];
	product4 = new Socks[20];
	numegg = 0;
	numbread = 0;
	numpen = 0;
	numsock = 0;
}
int Cart::getTotalItems()
{
	return total_items;
}
bool Cart::Discount()
{
	int count = 0;
	if (numegg + numbread + numpen + numsock < 3)
		return 0;
	else
	{
		int num = 0;
		for (int i = 0; i < numegg; i++)
			if (product[i].getsale())
				num++;
		for (int i = 0; i < numbread; i++)
			if (product2[i].getsale())
				num++;
		for (int i = 0; i < numpen; i++)
			if (product3[i].getsale())
				num++;
		for (int i = 0; i < numsock; i++)
			if (product4[i].getsale())
				num++;
		if (num >= 3)
			return 1;
		else
			return 0;
	}
}
float Cart::price()
{
	float paisay = 0;
	for (int i = 0; i < numegg; i++)
		paisay += product[i].price();
	for (int i = 0; i < numbread; i++)
		paisay += product2[i].price();
	for (int i = 0; i < numpen; i++)
		paisay += product3[i].price();
	for (int i = 0; i < numsock; i++)
		paisay += product4[i].price();

	return paisay;
}
//Cart:: operator string()
//{
//	if (numegg + numbread + numpen + numsock == 0)
//		cout << "Still no item in the cart..\n";
//	else
//	{
//		for (int i = 0; i < numegg; i++)
//			cout << product[i] << endl;
//		for (int i = 0; i < numbread; i++)
//			cout << product2[i] << endl;
//		for (int i = 0; i < numpen; i++)
//			cout << product3[i] << endl;
//		for (int i = 0; i < numsock; i++)
//			cout << product4[i] << endl;
//		cout << price() << endl;
//	}
//}
Cart:: ~Cart()
{
	delete[] product;
	product = nullptr;
	delete[] product2;
	product2 = nullptr;
	delete[] product3;
	product3 = nullptr;
	delete[] product4;
	product4 = nullptr;
}

Cart& Cart:: operator+=(Eggs& given)
{
	Eggs* tempo = new Eggs[numegg + 1];
	for (int i = 0; i < numegg; i++)
	{
		tempo[i] = product[i];
	}
	tempo[numegg] = given;
	numegg += 1;
	total_items++;
	product = tempo;

	return *this;
}
Cart& Cart:: operator+=(Bread& given)
{
	Bread* tempo = new Bread[numbread + 1];
	for (int i = 0; i < numbread; i++)
	{
		tempo[i] = product2[i];
	}
	tempo[numbread] = given;
	numbread += 1;
	total_items++;
	product2 = tempo;

	return *this;

}
Cart& Cart:: operator+=(Pens& given)
{
	Pens* tempo = new Pens[numpen + 1];
	for (int i = 0; i < numpen; i++)
	{
		tempo[i] = product3[i];
	}
	tempo[numpen] = given;
	numpen += 1;
	total_items++;
	product3 = tempo;
	return *this;

}
Cart& Cart:: operator+=(Socks& given)
{
	Socks* tempo = new Socks[numsock + 1];
	for (int i = 0; i < numsock; i++)
	{
		tempo[i] = product4[i];
	}
	tempo[numsock] = given;
	numsock += 1;
	total_items++;
	product4 = tempo;

	return *this;
}

Cart& Cart:: operator-=(Eggs& given)
{
	delete[] product;
	product = new Eggs[20];
	total_items -= numegg;
	numegg = 0;
	return *this;

}
Cart& Cart:: operator-=(Bread& given)
{
	delete[] product2;
	product2 = new Bread[20];
	total_items -= numbread;
	numbread = 0;
	return *this;

}
Cart& Cart:: operator-=(Pens& given)
{
	delete[] product3;
	product3 = new Pens[20];
	total_items -= numpen;
	numpen = 0;
	return *this;

}
Cart& Cart:: operator-=(Socks& given)
{
	delete[] product4;
	product4 = new Socks[20];
	total_items -= numsock;
	numsock = 0;
	return *this;

}

Cart& Cart:: operator+(Eggs& given)
{
	product[++numegg]=given;
	total_items++;
	return *this;
}
Cart& Cart:: operator+(Bread& given)
{
	product2[++numbread]=given;
	total_items++;
	return *this;
}
Cart& Cart:: operator+(Pens& given)
{
	product3[++numpen]=given;
	total_items++;
	return *this;
}
Cart& Cart:: operator+(Socks& given)
{
	product4[++numsock]=given;
	total_items++;
	return *this;

}

Cart& Cart:: operator-(Eggs& given)
{
	delete[] product;
	product = new Eggs[20];
	total_items -= numegg;
	numegg = 0;
	total_items--;
	return *this;

}
Cart& Cart:: operator-(Bread& given)
{
	delete[] product2;
	product2 = new Bread[20];
	product2 = nullptr;
	total_items -= numbread;
	numbread = 0;
	total_items--;
	return *this;

}
Cart& Cart:: operator-(Pens& given)
{
	delete[] product3;
	product3 = new Pens[20];
	total_items -= numpen;
	numpen = 0;
	total_items--;
	return *this;

}
Cart& Cart:: operator-(Socks& given)
{
	delete[] product4;
	product4 = new Socks[20];
	total_items -= numsock;
	numsock = 0;
	total_items--;
	return *this;
}


// Cart Cart:: operator=(Cart given)
// {
//	numegg = given.numegg;
//	numbread = given.numbread;
//	numpen = given.numpen;
//	numsock = given.numsock;
//	delete[] product;
//	product = new Eggs[20];
//	delete[] product2;
//	product2 = new Bread[20];
//	delete[] product3;
//	product3 = new Pens[20];
//	delete[] product4;
//	product4 = new Socks[20];
//
//	for (int i = 0; i < given.numegg; i++)
//		product[i] = given.product[i];
//	for (int i = 0; i < given.numbread; i++)
//		product2[i] = given.product2[i];
//	for (int i = 0; i < given.numpen; i++)
//		product3[i] = given.product3[i];
//	for (int i = 0; i < given.numsock; i++)
//		product4[i] = given.product4[i];
//	return *this;
// }
ostream& operator<<(ostream& outp, Cart& given)
{
	for (int i = 0; i < given.numegg; i++)
		outp << given.product[i] << endl;
	for (int i = 0; i < given.numbread; i++)
		outp << given.product2[i] << endl;
	for (int i = 0; i < given.numpen; i++)
		outp << given.product3[i] << endl;
	for (int i = 0; i < given.numsock; i++)
		outp << given.product4[i] << endl;
	outp << given.price() << endl;

	return outp;
}
