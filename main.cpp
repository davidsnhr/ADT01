#include <iostream>

using namespace std;

// PascalCase
struct Movie {
    string title;
    int releaseYear{};
};


struct Athlete {
    int id;
    string name;
    string email;
    string sport;
};

void showMovie(vector<Movie>* movies) {
    cout << movies->at(0).title;
}

int main()
{
    // AD
    // Abstraction model of somenthin
    // car, person, customer
    Movie movie;
    Movie movieDemo;
    Athlete athlete;

    cout << &movie << endl;
    cout << &movieDemo << endl;

    movie.title = "El camino hacia el dorado";
    movie.releaseYear = 2002;

    std::cout << "Hello, World!" << std::endl;

    cout << "Title: " << movie.title<< endl << "Year: " << movie.releaseYear << endl;

    // Define a structure for representing atletas, clientes, pacientes, alumnos, profesores.
    // 4 atributos
    // ID number
    // Name string
    // email string
    /// Ask the user for these values, store them in a Customer Object and print result.

    cout << "ID: ";
    cin >> athlete.id;
    cout << "Name: ";
    cin >> athlete.name;
    cout << "Email: ";
    cin >> athlete.email;
    cout << "Sport: ";
    cin >> athlete.sport;

    cout << "ID: " << athlete.id << endl << "name: " << athlete.name << endl << "emaiil: " << athlete.email << endl << "sport: " << athlete.sport << endl;


    // unpaking or destructuring
    auto [id, name, email, sport] {athlete};

    cout << name << endl;

    vector<Movie> movies;

    movies.push_back({"intensamente", 2022});
    movies.push_back({"intensamente 2", 2024});


    for(const auto& movie: movies) {
        cout << movie.title << endl;
    }

    showMovie(&movies);

    // pointer and structures

    return 0;
}
