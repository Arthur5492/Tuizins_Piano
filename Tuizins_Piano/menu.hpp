#ifndef MENU_HPP
#define MENU_HPP

#include "includes.hpp"

// Menu 1
void Charge(unsigned int times);
void gotoxy(int x, int y);
void Clear(size_t x, size_t y, size_t size);
void Pinting();
void Start(); // Start menu

// Menu 2
void RiscoX(size_t x);
void RiscoY(size_t y);
void Escritas(size_t x);
void Caixa(size_t speed1, size_t speed2);

// Menu CHs
void Ch1();
void Ch2a();
void Ch2b();

#endif
