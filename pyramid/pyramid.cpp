#define LAYERS 20
#include <iostream>
using namespace std;

int main() {

	
	for (int height = 0; height < LAYERS; height++) {
		for (int i = 0; i < LAYERS - height - 1; i++) {
			cout << " ";
		}
		for (int x = 0; x < height * 2 + 1; x++) {
			cout << "X";
		}
		cout << endl;
	}
	

	return 0;
}