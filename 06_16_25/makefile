all: main drink product person
main: main.cpp drink product person
	g++ -fdiagnostics-color=always -pedantic-errors -g  main.cpp drink product person -o main
drink: drink.cpp drink.h
	g++ -fdiagnostics-color=always -pedantic-errors -g -c drink.cpp -o drink
product: product.cpp product.h
	g++ -fdiagnostics-color=always -pedantic-errors -g -c product.cpp -o product
person: person.cpp person.h
	g++ -fdiagnostics-color=always -pedantic-errors -g -c person.cpp -o person