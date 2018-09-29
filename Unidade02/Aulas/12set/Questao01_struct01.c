/*
*                             IMD0012 - T03
*                       ------------------------- 
*                      LISTA 02 - EXERCICIO 01
*                 -------------------------------------
*                  https://github.com/filipegmedeiros
*             ---------------------------------------------
*/

struct produto{
    int codigo;
    char nome[20];
    char fabricante[20];
    float custo;

};


struct produto_no_estoque{
    struct produto product;
    int quantidade;
};

struct estoque{
    struct produto_no_estoque produtos[50];
    int elementos_no_estoque;
};



int main(){
    int count = 0;
    struct estoque obj;
     strcpy(obj.produtos[0].product.nome = "iphone xr";
     obj.produtos[0].product.codigo = 2329;
     strcpy(obj.produtos[0].product.fabricante, "apple");
     obj.produtos[0].product.custo = 7000;
     obj.produtos[0].quantidade = 1;
     

     strcpy(obj.produtos[1].product.nome, "iphone xr");
     obj.produtos[1].product.codigo = 2328;
     strcpy(obj.produtos[1].product.fabricante, "apple");
     obj.produtos[1].product.custo = 7000;
     obj.produtos[1].quantidade = 1;


return 0;
}
