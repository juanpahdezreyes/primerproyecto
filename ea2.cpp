#include <iostream>
#include <vector> 

class Animal {
private:
    string especie;

public:
    int edad;
    string nombre;
    string sonido;

    Animal() {
        especie = "desconocido";
        edad = 0;
        nombre = "desconocido";
        sonido = "desconocido";
    }

    Animal(string esp, int ed, string nom, string son) {
        especie = esp;
        edad = ed;
        nombre = nom;
        sonido = son;
    }

    string getEspecie() {
        return especie;
    }

    void setEspecie(string esp) {
        especie = esp;
    }

    void presentarse() {
        cout << "Hola, soy un " << especie << ". Me llamo " << nombre << ". Tengo " << edad << " años y hago " << sonido << endl;
    }
};

int main() {
    Animal a1;
    a1.setEspecie("perro");
    a1.edad = 3;
    a1.nombre = "panfilo";
    a1.sonido = "guauu";

   

     Animal a2("caballo", 7, "julian", "mmmm"); 

    vector<Animal> animales; 
    animales.push_back(a1);
    animales.push_back(a2);

    for (int i = 0; i < animales.size(); i++) {
        animales[i].presentarse();
    }

    return 0;
}
