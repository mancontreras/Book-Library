#include <iostream>
#include <string>
#include "Book.h"
#include "Magazine.h"
#include "DVD.h"
#include "Article.h"

using namespace std;

int main() {
    int choice;
    bool exitMenu = false;

    // Crear objetos iniciales vacíos
    Book book1("", "", 0, true, 0, "", "");
    DVD dvd1("", "", 0, true, 0.0, "", "");
    Magazine mag1("", "", 0, true, 0, "");
    
    // Crear artículos para la revista
    Article art1("", "", "");
    Article art2("", "", "");
    Article art3("", "", "");

    while (!exitMenu) {
        cout << "\nMenu:" << endl;
        cout << "1. Enter Book Information" << endl;
        cout << "2. Enter DVD Information" << endl;
        cout << "3. Enter Magazine Information" << endl;
        cout << "4. Add Articles to Magazine" << endl;
        cout << "5. Display Book Information" << endl;
        cout << "6. Display DVD Information" << endl;
        cout << "7. Display Magazine Information" << endl;
        cout << "8. Show Articles in Magazine" << endl;
        cout << "9. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();  // Limpiar el buffer de entrada

        switch (choice) {
            case 1: {
                // Ingresar información del libro
                string title, author, isbn, editorial;
                int yearPublished, numPages;
                bool availability;

                cout << "Enter Book Title: ";
                getline(cin, title);
                cout << "Enter Author: ";
                getline(cin, author);
                cout << "Enter Year Published: ";
                cin >> yearPublished;
                cout << "Is it available? (1 for Yes, 0 for No): ";
                cin >> availability;
                cout << "Enter Number of Pages: ";
                cin >> numPages;
                cin.ignore();
                cout << "Enter ISBN: ";
                getline(cin, isbn);
                cout << "Enter Editorial: ";
                getline(cin, editorial);

                // Crear el objeto book1 con la información ingresada
                book1 = Book(title, author, yearPublished, availability, numPages, isbn, editorial);
                break;
            }
            case 2: {
                // Ingresar información del DVD
                string title, author, studio, format;
                int yearPublished;
                bool availability;
                double duration;

                cout << "Enter DVD Title: ";
                getline(cin, title);
                cout << "Enter Director (Author): ";
                getline(cin, author);
                cout << "Enter Year Published: ";
                cin >> yearPublished;
                cout << "Is it available? (1 for Yes, 0 for No): ";
                cin >> availability;
                cout << "Enter Duration (in minutes): ";
                cin >> duration;
                cin.ignore();
                cout << "Enter Studio: ";
                getline(cin, studio);
                cout << "Enter Format (e.g., Blu-Ray): ";
                getline(cin, format);

                // Crear el objeto dvd1 con la información ingresada
                dvd1 = DVD(title, author, yearPublished, availability, duration, studio, format);
                break;
            }
            case 3: {
                // Ingresar información de la revista
                string title, author, editorial;
                int yearPublished, issueNumber;
                bool availability;

                cout << "Enter Magazine Title: ";
                getline(cin, title);
                cout << "Enter Author: ";
                getline(cin, author);
                cout << "Enter Year Published: ";
                cin >> yearPublished;
                cout << "Is it available? (1 for Yes, 0 for No): ";
                cin >> availability;
                cout << "Enter Issue Number: ";
                cin >> issueNumber;
                cin.ignore();
                cout << "Enter Editorial: ";
                getline(cin, editorial);

                // Crear el objeto mag1 con la información ingresada
                mag1 = Magazine(title, author, yearPublished, availability, issueNumber, editorial);
                break;
            }
            case 4: {
                // Agregar artículos a la revista
                string title, author, content;
                int numArticles;

                cout << "How many articles do you want to add? ";
                cin >> numArticles;
                cin.ignore(); // Limpiar buffer

                for (int i = 0; i < numArticles; i++) {
                    cout << "\nEnter Article " << i + 1 << " Title: ";
                    getline(cin, title);
                    cout << "Enter Article " << i + 1 << " Author: ";
                    getline(cin, author);
                    cout << "Enter Article " << i + 1 << " Content: ";
                    getline(cin, content);

                    Article article(title, author, content);
                    mag1.addArticle(article, i); // Añadir artículo a la revista
                }
                break;
            }
            case 5:
                // Mostrar información del libro
                cout << "\nBook Information:" << endl;
                cout << "Title: " << book1.getTitle() << endl;
                cout << "Author: " << book1.getAuthor() << endl;
                cout << "Year Published: " << book1.getYearPublished() << endl;
                cout << "Available: " << (book1.getAvailability() ? "Yes" : "No") << endl;
                cout << "Number of Pages: " << book1.getNumberOfPages() << endl;
                cout << "ISBN: " << book1.getISBN() << endl;
                cout << "Editorial: " << book1.getEditorial() << endl;
                break;

            case 6:
                // Mostrar información del DVD
                cout << "\nDVD Information:" << endl;
                cout << "Title: " << dvd1.getTitle() << endl;
                cout << "Author: " << dvd1.getAuthor() << endl;
                cout << "Year Published: " << dvd1.getYearPublished() << endl;
                cout << "Available: " << (dvd1.getAvailability() ? "Yes" : "No") << endl;
                cout << "Duration: " << dvd1.getDuration() << " minutes" << endl;
                cout << "Studio: " << dvd1.getStudio() << endl;
                cout << "Format: " << dvd1.getFormat() << endl;
                break;

            case 7:
                // Mostrar información de la revista
                cout << "\nMagazine Information:" << endl;
                cout << "Title: " << mag1.getTitle() << endl;
                cout << "Author: " << mag1.getAuthor() << endl;
                cout << "Year Published: " << mag1.getYearPublished() << endl;
                cout << "Available: " << (mag1.getAvailability() ? "Yes" : "No") << endl;
                cout << "Issue Number: " << mag1.getIssueNumber() << endl;
                cout << "Editorial: " << mag1.getEditorial() << endl;
                break;

            case 8:
                // Mostrar artículos de la revista
                cout << "\nArticles in Magazine \"" << mag1.getTitle() << "\":" << endl;
                for (int i = 0; i < 7; i++) {
                    Article art = mag1.getArticle(i);  // Obtener artículo en índice 'i'
                    if (!art.getTitle().empty()) {  // Si el artículo tiene título (fue agregado)
                        cout << "Article " << i + 1 << ": " << endl;
                        cout << "Title: " << art.getTitle() << endl;
                        cout << "Author: " << art.getAuthor() << endl;
                        cout << "Content: " << art.getContent() << endl << endl;
                    }
                }
                break;

            case 9:
                // Salir del menú
                cout << "Exiting program." << endl;
                exitMenu = true;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }

    return 0;
}


