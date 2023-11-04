#include <iostream>
using namespace std;

class vect
{
protected:
    int nelem; // nombre d'éléments
    int *adr; // adresse zone dynamique contenant les éléments

public:
    vect(int n = 0) : nelem(n), adr(n ? new int[n] : 0) {}

    vect(const vect &v) : nelem(v.nelem), adr(nelem ? new int[nelem] : 0)
    {
        for (int i = 0; i < nelem; i++)
            adr[i] = v.adr[i];
    }

    ~vect() { delete[] adr; }

    vect &operator=(const vect &v)
    {
        if (this != &v)
        {
            delete[] adr;
            nelem = v.nelem;
            adr = nelem ? new int[nelem] : 0;
            for (int i = 0; i < nelem; i++)
                adr[i] = v.adr[i];
        }
        return *this;
    }

    int &operator[](int i) { return adr[i]; }
    int operator[](int i) const { return adr[i]; }
};

class vectok : public vect
{
public:
    vectok(int n = 0) : vect(n) {}

    vectok(const vectok &v) : vect(v) {}

    int taille() const { return nelem; }
};

int main()
{
    vectok v1(3);
    v1[0] = 1;
    v1[1] = 2;
    v1[2] = 3;}