#include <iostream>

using namespace std;


/* Estructura de la pila */
struct nodo
{
	int numero1;
	nodo *anterior;
	
}*aux,* aux1;


void ingresarPila(nodo *&pila,int dato)
{
	nodo *nuevoNodo=new nodo();
	
	nuevoNodo->numero1=dato;
	nuevoNodo->anterior=pila;
		
	pila=nuevoNodo;	
		
	
}

void sacarNodo(nodo *&pila,int &dato){
	
	nodo *aux=pila;
	
	if(aux==NULL){
	cout<<"PILA VACIA";
	}
	else{
		
	dato=aux->numero1;
	
	pila=aux->anterior;
	
	delete aux;
	cout<<"\n\n\t\tNumero " << dato << " desencolado...\n\n";
	}
	
	
	
}

void vaciarNodo(nodo *&pila,int &dato){
	nodo *aux=pila;
	if(aux==NULL){
		cout<<"PILA VACIA";
	}
	
	while(aux!=NULL){
	
    /*Numero es igual a aux numero*/	
	dato=aux->numero1;	
	/*pila ahora es el numero anterior*/
	pila=aux->anterior;
	
	cout<<"\n\n\t\tNumero " << aux->numero1 << " desencolado...\n\n";
	
	/*borra a la lista aux*/
	delete (aux);
	
	/*aux es ahora pila*/
	aux=pila;
	}
	
	
	
}

void mostrarNodo(nodo *&pila){
	nodo *aux=pila;
	if(aux==NULL){
		cout<<"\t Pila vacia";
	}
	while(aux!=NULL){
	
 
	/*pila ahora es el numero anterior*/
	cout<<"\n\n\t\tNumero " << aux->numero1 << " desencolado...\n\n";
	/*pasa al siguiente nodo*/
	aux=aux->anterior;

	}
	
	
	
}



void mostrarUltPila(nodo *&pila, int dato){
	
	nodo *aux=pila;
	if(aux==NULL){
		cout<<" \t Pila vacia";
	}
	else
		while(aux!=NULL){
	    dato=aux->numero1;
		aux=aux->anterior;	
		cout<<"\n\n\t\tNumero " << dato;
	}
	

	
}

void mostrarPrimPila(nodo *&pila, int dato){
	
	nodo *aux=pila;
	
	if(aux==NULL){
		cout<<"\t Pila vacia";
	}
	else{
		dato=aux->numero1;
	    cout<<"\n\n\tNumero " << dato;
	}
	
	
}

void mostrarCantPila(nodo *&pila, int dato){
	dato=0;
	nodo *aux=pila;
	
	if(aux==NULL){
		cout<<"\n\n\t\tPILA VACIA";
	}else{
		while(aux!=NULL){
			aux=aux->anterior;
			dato++;
		}
		cout<<"\n\n\t\t son: "<<dato<<" "<<" datos";
	}

	

	
}


/*------------------ FUNCIONES COLAS-------------*/
/* Estructura de los nodos de la cola */
struct nodo1
{
	int numero;
	nodo1 *siguiente;
};

/* Estructura de la cola */
struct cola
{
	nodo1 *adelante;
	nodo1 *atras;
};

/* insertar elementos de la cola*/
void ingresarCola(nodo1 *&front,nodo1 *&back,int dato1){
	nodo1 *nuevoNodo=new nodo1();
	
	nuevoNodo->numero=dato1;
	nuevoNodo->siguiente=NULL;
	
	if(front==NULL){
		front=nuevoNodo;
		back=nuevoNodo;
	}else{
		back->siguiente=nuevoNodo;
			back=nuevoNodo;
	}

	
}


/* Eliminar elementos de la cola */



void suprimirCola(nodo1 *&front, nodo1 *&back, int &dato1) {
    dato1 = front->numero;
    nodo1 *auxiliar = front;

    if (front == back) {
        front = NULL;
        back = NULL;
    } else {
        front = auxiliar->siguiente;
    }
	cout << "Dato Eliminado: " << dato1 << "\n";
    delete auxiliar;
}


/* MOSTRAR COLA */

void MostrarCola(nodo1 *front, nodo1 *back) {
    nodo1 *temp = front;
    while (temp != NULL) {
        cout << "Dato es: " << temp->numero << "\n";
        temp = temp->siguiente;
    }
}

void MostrarultCola(nodo1 *front, nodo1 *back) {
    nodo1 *temp = front;
    
    if(temp==NULL)
	{
    	cout<<"COLA VACIA";
	}
	else
		{
		while (temp->siguiente != NULL){
		 temp = temp->siguiente;
		} 
		cout << "Dato es: " << temp->numero << "\n";	
    	}
    	    
}

void MostrarprimCola(nodo1 *front, nodo1 *back) {
    nodo1 *temp = front;
    
    if(temp==NULL)
	{
    	cout<<"COLA VACIA";
	}
	else
		{
		cout << "Dato es: " << temp->numero << "\n";	
    	}
    	    
}

void MostrarcanCola(nodo1 *front, nodo1 *back) {
    nodo1 *temp = front;
    int contador=1;
    if(temp==NULL)
	{
    	cout<<"COLA VACIA";
	}
	else
		{
		while (temp->siguiente != NULL){
		 temp = temp->siguiente;
		 
		 contador++;
		} 
		cout << "Cantidad de datos es: " << contador << "\n";	
    	}
    	    
}
/*    
void primerDato( struct cola q )
{
struct nodo *aux;

aux = q.delante;

cout<<aux->nro;
}
/*
void ultimoDato( struct cola q )
{
struct nodo *aux;

aux = q.delante;

while( aux->sgte != NULL )
{

aux = aux->sgte;
}
cout<<" "<< aux->nro;
}
*/
void menu1()
{
	cout<<"\n IMPLEMENTACION PILAS Y COLAS"<<endl;
	cout<<" 1. Pila                       "<<endl;
	cout<<" 2. Cola                       "<<endl;
	cout<<" 0. salir                      "<<endl;
	
}

void menu2()
{
	cout<<"\n IMPLEMENTACION PILAS "<<endl;
	cout<<" 1. Encolar Pila                      "<<endl;
	cout<<" 2. Desencolar                        "<<endl;
	cout<<" 3. Mostrar pila                      "<<endl;
	cout<<" 4. vaciar pila                       "<<endl;
    cout<<" 5. Mostrar Ultimo dato               "<<endl;
    cout<<" 6. Mostrar cuantos datos             "<<endl;
    cout<<" 7. Mostrar primer dato               "<<endl;
    cout<<" 8. salir                             "<<endl;
 
    cout<<"\n Ingrese opcion: ";
	
	
}


void menu3()
{
	cout<<"\n IMPLEMENTACION COLAS"<<endl;
	cout<<" 1. Encolar cola                      "<<endl;
	cout<<" 2. Desencolar                        "<<endl;
	cout<<" 3. Mostrar cola                      "<<endl;
	cout<<" 4. vaciar cola                       "<<endl;
    cout<<" 5. Mostrar Ultimo dato               "<<endl;
    cout<<" 6. Mostrar cuantos datos             "<<endl;
    cout<<" 7. Mostrar primer dato               "<<endl;
    cout<<" 8. salir                             "<<endl;
 
    cout<<"\n Ingrese opcion: ";
	
	
}



nodo1 *cola=NULL;

nodo*pila=NULL;

int main()
{
	nodo1 *front=NULL;
    nodo1 *back=NULL;
	int opcion=1,opcion2,dato,dato1;
	
	while(opcion!=0){

		menu1();
		cin>>opcion;
		
			if(opcion==1){
					
					/*HACER MIENTRAS QUE OPCION 2 SEA DIFERENTE A 8*/
					do{
							/*IMPRIME MENU2*/
					     	menu2();
					     	
					     	/*INGRESA OPCION*/
						    cin>>opcion2;
						    
						    /*MENU DE OPCIONES*/
							switch(opcion2){
							case 1:
		 						cout<< "\n Numero encolar: "; 
		 						cin>> dato;
								ingresarPila(pila,dato);
				                cout<<"\n\n\t\tNumero " << dato << " encolado...\n\n";
			            	break;
			            	 
			            	case 2:
			            		
								sacarNodo(pila, dato);
			            	break;
			            	
			            	case 3:
			            		
				 				mostrarNodo(pila);
				                
				            break;
				 
				 
				            case 4:
				 				vaciarNodo(pila,dato);
				        	    
				            break;
				            case 5:
				 
				                mostrarUltPila(pila,dato);
				                 
				            break;
				            case 6:
				 
				                 mostrarCantPila(pila,dato);
				                 
				            break;
				            case 7:
				 
				                 mostrarPrimPila(pila,dato);
				            break;
								}
								cout<<endl<<endl;
										
								system("pause");
								system("cls");			    
						}while(opcion2!=8);
		
			}else if(opcion==2)
			
			{
				
				do{
					menu3();
				    cin>>opcion2;
				    /*MENU DE OPCIONES*/
				    switch(opcion2){

							case 1:
	 
			                 cout<< "\n Numero encolar: "; 
							 cin>> dato1;
							 ingresarCola(front,back,dato1);
			                 cout<<"\n\n\t\tNumero " << dato1 << " encolado...\n\n";
			            	 break;
			            	 
			            	 case 2:
			                     suprimirCola(front,back,dato1);
			                 cout<<"\n\n\t\tNumero " << dato1 << " encolado...\n\n";
			            	 break;
			            	case 3:
				 
				                 MostrarCola(front,back);
				            break;
				 
				 
				            case 4:
				 				while(front!=NULL){
				 					suprimirCola(front,back,dato1);
				                
								 }
				        		
				            break;
				            case 5:
				 
				                MostrarultCola(front,back);
				                 cout<<"\n\n\t\tHecho...\n\n";
				            break;
				            case 6:
				 
				                 MostrarcanCola(front,back);
				                 cout<<"\n\n\t\tHecho...\n\n";
				            break;
				            case 7:
				 
				                 MostrarprimCola(front,back);
				                 cout<<"\n\n\t\tHecho...\n\n";
				            break;
								}
								cout<<endl<<endl;
										
								system("pause");
								system("cls");
					
					
				}while(opcion2!=8);	
			}
	}


	return 0;
}
