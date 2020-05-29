#include "fraction.hpp"


// Заголовочный файл для рациональных комплексных чисел
// описание типа структуры FranctionComplex 
// объявления функций работы с рац. комплексными числами
//

struct FractionComplex
{
	Fraction re; //вещественная часть 
	Fraction im; //мнимая часть
};

FractionComplex fraction_complex_plus(FractionComplex self, 
									  FractionComplex other);


void fraction_complex_print(FractionComplex a);


