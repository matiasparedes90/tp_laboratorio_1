struct{
	int id;
	char nombre[20];
    int edad;
    int estado;
    int dni;
}typedef EPersonas;

struct{
	char menor[1];
	char intermedio[1];
	char mayor[1];
}typedef Escala;
/**
 * Genera un menu y devuelve el valor.
 * @param no recibe.
 * @return devuelve el valor seleccionado
 */
int menu();
/**
 * Inserta una persona al array
 * @param recibe la estructura
 * @return devuelve 0 si se ha ingresado, caso contrario devuelve -1.
 */
 int insert(EPersonas* lista);
 /**
 * Elimina una persona por medio de un id
 * @param recibe la estructura
 * @return devuelve 0 si se ha borrado, caso contrario devuelve -1.
 */
 int dele(EPersonas* lista);
  /**
 * Muestra lista ordenada por nombre
 * @param recibe la estructura
 * @return No devuelve valor, solo imprime resultado por nombre.
 */
 void imprimir(EPersonas* lista);
   /**
 * Muestra grafico de edades
 * @param recibe la estructura
 * @return No devuelve retorno.
 */
 void edades(EPersonas* lista);
