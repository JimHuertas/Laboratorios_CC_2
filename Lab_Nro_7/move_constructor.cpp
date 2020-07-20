#include <iostream>
#include <string.h>
using namespace std;

class Cadena
{
private:
    char *m_txt;
    void Dup(const char *txt){
        m_txt = new char[strlen(txt) + 1];
        strcpy(m_txt, txt);
    }
public:
    //constructor por defecto
    Cadena()
        :m_txt(0)
    {}

    //constructor con argumentos
    Cadena(const char *txt)
    {
        if (txt)
            Dup(txt);
        else
            m_txt = NULL;
    }

    //constructor copia
    Cadena(const Cadena &o)
    {
        Dup(o.m_txt);
    }
    //constructor copia de movimiento
    Cadena(Cadena &&o)
    {
        m_txt = o.m_txt;
        o.m_txt = NULL;
    }
    

    //destructor
    ~Cadena(){
        delete []m_txt;
    }


    //sobrecarga operador =
    Cadena &operator=(const Cadena &o){
        delete []m_txt;
        m_txt = NULL; // por si Dup() falla
        Dup(o.m_txt);
 
        return *this;
    }
    //operador (=) de movimiento
    Cadena &operator=(Cadena &&o){
        delete []m_txt;
        m_txt = o.m_txt;
        o.m_txt = NULL;
        return *this;
    }

    //sobrecarga operador +
    Cadena operator+(const Cadena &o)
    {
        Cadena res;
        res.m_txt = new char[strlen(m_txt) + strlen(o.m_txt) + 1];
        strcpy(res.m_txt, m_txt);
        strcat(res.m_txt, o.m_txt);
        return res;
    }

    const char *c_str() const
    {
        return m_txt? m_txt : "vacio";
    }
};

int main(){
    Cadena f, x;
    f = "foo ";
    x = f + "bar";
    Cadena y = std::move(f);
    cout<<f.c_str()<<endl;
    cout<<x.c_str()<<endl;
}
