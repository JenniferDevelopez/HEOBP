#include "Singleton.h"

Singleton::Singleton() {
}

Singleton* Singleton::instance() {
    if (!Singleton::theOnlyOne) {
        Singleton::theOnlyOne = new Singleton();
    }
    return Singleton::theOnlyOne;
}

Singleton* Singleton::theOnlyOne = 0;

void Singleton::normalMethod() {
    // ...
}
