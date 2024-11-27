    class Exp
    {
    public:
        Exp(const int n_val);
        double apprErr();
    //uses value() function’s return
    // and value of actual exp in C++ lib
    //then returns approximation error.
        void print(); // //uses value() function’s return displays it
    private:
        int n;
        double value(); // return value of e
        // with assigned number of terms
    };