#include <iostream>
    //using  namespace std;
    using std::cout;
    using std::cin;

    void factorial();
    void imprime_factores(int);
    void suma_factores(int);

    
    int main(){
        factorial();
        return 0;
    }
    void factorial(){
        int numero;
        cout << "teclea un numero entero positivo " << std::endl;
        cin >> numero;
        imprime_factores(numero);
        suma_factores(numero);
    }
    void imprime_factores(int numero){
        for(int i=numero;i>=0;i--){
            if (i==1){
                cout << i << " = ";
                return;
            } 
            cout << i << " x ";
        }
    } 
    void suma_factores(int numero){
        long int total=1;
        for(int i=numero;i>0;i--){
            total *= i;
        }
        cout << total << std::endl;
    }
