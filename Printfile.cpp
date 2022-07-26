#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string filename("output.txt");
    fstream output_fstream;

    output_fstream.open(filename, std::ios_base::out);
    if (!output_fstream.is_open()) {
        cerr << "Failed to open " << filename << '\n';
    } else {
        output_fstream << "Maecenas accumsan purus id \norci gravida pellentesque." << endl;
        cerr << "Done Writing!" << endl;
    }

    return EXIT_SUCCESS;
}