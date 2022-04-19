// mysql_empreproduc.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Marcas.h"
using namespace std;

int main()
{
	string id, producto, marca, despecion, existencia;
	int precio_costo, precio_venta, fecha_ingreso;

	cout << "Ingrese Id del Producto: ";
	cin >> id;
	cout << "Ingrese el Producto: ";
	cin >> producto;
	cout << "Ingrese Marca del producto: ";
	cin >> marca;
	cout << "Ingrese Descripcion";
	cin >> descripcion;
	cout << "Ingrese el precio costo";
	cin >> precio_costo;
	cout << "Ingrese el precio venta";
	cin >> precio_venta;
	cout << "Existencia: ";
	cin >> existencia;
	cout << "Fecha_ingreso";
	cin >> fecha_ingreso;
	
	Marcas m = Marcas(producto,marca,descripcion,precio_costo,precio_venta,existencia,fecha_ingreso);
	m.crear();
	m.leer();

	system("pause");
	return 0;

}

