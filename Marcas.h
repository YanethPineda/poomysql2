#pragma once
#include<mysql.h>
#include <iostream>
#include <string>
#include "ConexionBD.h"
#include "Productos.cpp"
using namespace std;
class Marcas : Productos{
private: string id;

public:
	Marcas() {
	}

	Marcas(string pro, string marc, string des, string exis, int prcos, int prven, int fningre, string d) : Productos(pro, marc, des, exis, prcos, prven, fningre) {
		id = d;
	}
	void setId(string d) { id = d; }
	void setProducto(string pro) { producto = pro; }
	void setMarca(string marc) { marca = marc; }
	void setDescripcion(string des) { descripcion = des; }
	void setPrecio_costo(int prcos) { precio_costo = prcos; }
	void setPrecio_venta(int prven) { precio_venta = prven; }
	void setExistencia(string exis) { existencia = exis; }
	void setFecha_ingreso(int fningre) { fecha_ingreso = fningre; }

	string getId() { return id; }
	string getProducto() { return producto; }
	string getMarca() { return marca; }
	string getDescripcion() { return descripcion; }
	int getPrecio_costo() { return precio_costo; }
	int getPrecio_venta() { return precio_venta; }
	string getExistencia() { return existencia; }
	int getFecha_ingreso() { return fecha_ingreso; }
	
	void crear() {
		int q_estado;
		ConexionBD cn = ConexionBD();
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string t = to_string(fecha_ingreso)
			string insert = "INSERT INTO productos(id_producto,producto,id_Marca,descripcion,precio_costo,precio_venta,existencia,fecha_ingreso) VALUES('"+id+"','"+ producto +"','" + marca + "'" + descripcion + "'" + precio_costo + "'" + precio_venta + "'" + existencia + "'," + t + ",); ";
			const char* i = insert.c_str();
			q_estado = mysql_query(cn.getConectar(), i);
			if (!q_estado) {
				cout << "Ingreso Exitoso...." << endl;
			}
		}
		else {
			cout << "---Error al ingresar la informacion---" << endl;
		}

		else {
			cout<<"--EROR EN LA CONEXION"
		}
		}
		cn.cerrar_conexion();
	}

	void leer() {
		int q_estado;
		ConexionBD cn = ConexionBD();
		MYSQL_ROW fila;
		MYSQL_RES* resultado;
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string consulta = "select * from marca";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getConectar, c);
			if(!q_estado){
			resultado = mysql_store_result(cn.getConectar());
			cout << "------------------------Marcas--------------------" << endl;
			while (fila = mysql_fetch_row(resultado)) {
				cout << fila[0] << "," << fila[1] << "," << fila[2] << "," << fila[3] << "," << fila[4] << "," << fila[5] << "," << fila[6] << "," << fila[7] << endl;
			}
		}
		else {
			cout << "---Error al ingresar la informacion---" << endl;
		}
		}
		else {
			cout << "---Error en la conexion" << endl;
		}
		cn.cerrar_conexion();
	}

};

