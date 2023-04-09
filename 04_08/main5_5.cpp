
#include <iostream>
#include <fstream>
#include <json.hpp>

using json = nlohmann::json;
using std;

int main() {
    string old_filename, new_filename;
    cout << "Enter the name of the file with old users' data: ";
    getline(cin, old_filename);
    cout << "Enter the name of the file with new users' data: ";
    getline(cin, new_filename);

    // Read the old user data
    ifstream old_file(old_filename);
    json old_data;
    old_file >> old_data;

    // Read the new user data
    ifstream new_file(new_filename);
    json new_data;
    new_file >> new_data;

    // Update the old user data with the new data
    for (const auto& new_user : new_data) {
        const string& new_name = new_user["name"];
        bool found = false;
        for (auto& old_user : old_data) {
            if (old_user["name"] == new_name) {
                // Update the old user with the new data
                for (auto it = new_user.begin(); it != new_user.end(); ++it) {
                    if (it.key() != "name") {
                        // Compare the values lexicographically
                        if (it.value() > old_user[it.key()]) {
                            old_user[it.key()] = it.value();
                        }
                    }
                }
                found = true;
                break;
            }
        }
        if (!found) {
            // The new user is not in the old data, so add it
            old_data.push_back(new_user);
        }
    }

    // Write the updated data to the old file
    ofstream output_file(old_filename);
    output_file << setw(4) << old_data << endl;
    return 0;
}