all: main drink product
main: main.cpp drink product
	g++ -fdiagnostics-color=always -pedantic-errors -g  main.cpp drink product -o main
drink: drink.cpp drink.h
	g++ -fdiagnostics-color=always -pedantic-errors -g -c drink.cpp -o drink
product: product.cpp product.h
	g++ -fdiagnostics-color=always -pedantic-errors -g -c product.cpp -o product