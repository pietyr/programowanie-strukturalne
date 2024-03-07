#include <stdio.h>

// Zadanie 9.9 Układ równań liniowych

/**
 * Struktura reprezentująca równanie liniowe postaci Ax + By = C
 */
struct rownanie {
	float A;
	float B;
	float C;
};

/**
 * Funkcja rozwiązuje układ dwóch równań liniowych metodą wyznaczników
 * @param x 1 niewiadoma - parametr wskaźnikowy
 * @param y 2 niewiadoma - parametr wskaźnikowy
 * @param rownanie1 pierwsze równanie liniowe
 * @param rownanie2 drugie równanie liniowe
 * @return 1 - układ ma rozwiązanie
 * @return 0 - układ nieoznaczony
 * @return -1 - układ jest sprzeczny
 */
int uklad_rownan(float* x, float* y, struct rownanie rownanie1, struct rownanie rownanie2);


int main(void) {
	float x, y;
	struct rownanie R1, R2;

	printf("Program rozwiązuje układ dwóch równań liniowych metodą wyznaczników.\n");
	printf("Podaj parametr A pierwszego równania Ax + By = C");
	printf("\nA = ");
	scanf("%f", &R1.A);
	printf("Podaj parametr B pierwszego równania %.1fx + By = C", R1.A);
	printf("\nB = ");
	scanf("%f", &R1.B);
	printf("Podaj parametr C pierwszego równania %.1fx + %.1fy = C", R1.A, R1.B);
	printf("\nC = ");
	scanf("%f", &R1.C);

	printf("Podaj parametr A drugiego równania Ax + By = C");
	printf("\nA = ");
	scanf("%f", &R2.A);
	printf("Podaj parametr B drugiego równania %.1fx + By = C", R2.A);
	printf("\nB = ");
	scanf("%f", &R2.B);
	printf("Podaj parametr C drugiego równania %.1fx + %.1fy = C", R2.A, R2.B);
	printf("\nC = ");
	scanf("%f", &R2.C);

	printf("\nRównanie 1: %.1fx + %.1fy = %.1f\n", R1.A, R1.B, R1.C);
	printf("Równanie 2: %.1fx + %.1fy = %.1f\n", R2.A, R2.B, R2.C);

	int wynik = uklad_rownan(&x, &y, R1, R2);

	if (wynik == 0) {
		printf("Układ nieoznaczony");
		return 0;
	}

	if (wynik == -1) {
		printf("Układ sprzeczny");
		return 0;
	}

	printf("Rozwiązanie układu: \n");
	printf("x = %.2f;   y = %.2f\n", x, y);

	return 0;
}

int uklad_rownan(float* x, float* y, struct rownanie rownanie1, struct rownanie rownanie2) {
	float W = rownanie1.A * rownanie2.B - rownanie2.A * rownanie1.B;
	float Wx = rownanie1.C * rownanie2.B - rownanie2.C * rownanie1.B;
	float Wy = rownanie1.A * rownanie2.C - rownanie2.A * rownanie1.C;

	if (W == 0) {
		if (Wx == 0 && Wy == 0) {
			return 0; // Układ nieoznaczony
		}
		return -1; //Układ sprzeczny
	}

	*x = Wx / W;
	*y = Wy / W;
	return 1;
}
