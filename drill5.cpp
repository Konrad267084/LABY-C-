#include <iostream>
#include "std_lib_facilities.h"

int main() {
	
	try {
		cout << "Success!\n";
		keep_window_open();
		return 0;
	}
	catch (std::exception& e) {
		std::cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}
	catch (...) {
		std::cerr << "Oops: unknown exception!\n";
		keep_window_open();
		return 2;
	}
//1. „Cout”: nie jest składową elementu „std”

//2.  w stałej występuje symbol przejścia do następnego wiersza 
//    błąd składniowy : brakuje „; ” przed identyfikatorem „keep_window_open”

//3. niedozwolona sekwencja ucieczki
//   w stałej występuje symbol przejścia do następnego wiersza
//   "n": niezadeklarowany identyfikator
//   błąd składniowy: brakuje „;” przed „ciąg”
//   błąd składniowy: brakuje „;” przed identyfikatorem „keep_window_open”

//4. "success": niezadeklarowany identyfikator

//5. Nie jest dostępny żaden operator konwersji zdefiniowany przez użytkownika, który mógłby wykonać tę konwersję lub operator nie może zostać wywołany

//6. funkcja przyjmująca 1 argumentów nie jest wynikiem przetworzenia termu
//   funkcja przyjmująca 1 argumentów nie jest wynikiem przetworzenia termu

//7. "cond": niezadeklarowany identyfikator

//9. "boo": niezadeklarowany identyfikator
//  brakuje „;” przed identyfikatorem „c”

//11. Błąd	C2678	dwuargumentowy "<": nie znaleziono żadnego operatora, który przyjmuje lewostronny operand typu "std::ostream" (lub nie istnieje akceptowalna konwersja)	drill5	C : \Users\olejn\Desktop\c++\drill5\drill5\drill5.cpp	7

//12. <==>

//16. "then": niezadeklarowany identyfikator

//19. Konwersja wymaga drugiego operatora konwersji zdefiniowanego przez użytkownika lub konstruktora
//    message : zobacz deklarację „std::vector<_Ty,_Alloc>::size”
//    message : podczas próby dopasowania listy argumentów "()"

//21. ten znak nie jest dozwolony w identyfikatorze
//    "x–2": niezadeklarowany identyfikator

//22. błąd składniowy: „<”
//    "s": niezadeklarowany identyfikator

//25. "std::istream" nie definiuje tego operatora lub konwersji do typu akceptowalnego dla wstępnie zdefiniowanego operatora



	
}