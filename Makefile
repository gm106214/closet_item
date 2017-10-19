closet : main.cc Closet_Item.o
	g++ main.cc Closet_Item.o -o closet
Closet_Item.o : Closet_Item.cc
	g++ -c Closet_Item.cc
