#pragma once
#include <mysql.h>
#include <iostream>
using namespace std;
class ConexionBD{
private: MYSQL* conectar;
public: void abrir_conexion() {
	conectar = mysql_init(0);
	conectar = mysql_real_connect(conectar, "127.0.0.1", "usr_empresaproduc", "Empres@123", "db_empresaproduc", 3306, NULL, 0);

}
	  MYSQL* getConectar() {
		  return conectar;
	}
	  void cerrar_conexion() {
		  mysql_close(conectar);
	  }

};

