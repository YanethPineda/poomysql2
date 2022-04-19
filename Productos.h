#pragma once
#include <iostream>
using namespace std;
class Producto
{

protected: string producto, marca, descripcion, existencia;
		 int precio_costo=0, precio_venta=0, fecha_ingreso=0;

protected:
	Productos() {
	}
	Productos(string pro, string marc, string des, string exis, int prcos, int prven, int fningre) {
		producto = pro;
		marca = marc;
		descripcion = des;
		existencia = exis;
		precio_costo = prcos;
		precio_venta = prven;
		fecha_ingreso = fningre;
	}
};

 