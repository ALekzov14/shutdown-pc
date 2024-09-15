#include "MyForm.h"

using namespace shutdownPc;

[STAThreadAttribute]
int main() {
	Application::Run(gcnew MyForm());

	return 0;
}