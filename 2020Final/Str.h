class Str
{
public:
    Str();
    Str(const int* arr);
    Str(const Array& array);
    void print();
    int getSize();
    void reverse();
    void uppercase();
private:
    int size, n=0;
    int* data;
};

