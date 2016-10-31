#pragma once


class Singleton {
    public:
        static Singleton* instance();

        void normalMethod();

    private:
        Singleton();
        static Singleton* theOnlyOne;
};

