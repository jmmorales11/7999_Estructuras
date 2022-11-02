#include "gtest/gtest.h"
#include "DatosPersonales.h"

TEST(DatosPersonalesTest, Edad){
	//Arrange
	DatosPersonales *objDatos= new DatosPersonales("1721400693","Camilo","Orrico",2022,2002);
	//Act	
	objDatos->calcularEdad(*objDatos);
	int edad=objDatos->getEdad();
	//Assert
	EXPECT_EQ(edad,20);
}