#include "tictac.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Correct namespace and class usage
    tictac::MyForm^ form = gcnew tictac::MyForm();
    Application::Run(form);
}
