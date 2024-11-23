#include <iostream>
#include "Book.h"
#include "DVD.h"
#include "Magazine.h"
#include "Article.h"
#include "Material.h" 

int main() {
    
    Book book("Never Let Me Go", "Kazuo Ishiguro", "2005", true, 288, "978-1400078776", "Knopf");
    std::cout << "Book Title: " << book.getTitle() << std::endl;
    std::cout << "Book Author: " << book.getAuthor() << std::endl;
    std::cout << "Book Year Published: " << book.getYearPublished() << std::endl;
    std::cout << "Book Availability: " << book.getAvailability() << std::endl;  
    std::cout << "Book ISBN: " << book.getISBN() << std::endl;
    std::cout << "Book Editorial: " << book.getEditorial() << std::endl;
    std::cout << "Book Number of Pages: " << book.getNumberOfPages() << std::endl;

    std::cout << std::endl;

    
    DVD dvd("Inglourious Basterds", "Quentin Tarantino", 2009, true, 153.0, "Universal Pictures", "Blu-ray");
    std::cout << "DVD Title: " << dvd.getTitle() << std::endl;
    std::cout << "DVD Author: " << dvd.getAuthor() << std::endl;
    std::cout << "DVD Year Published: " << dvd.getYearPublished() << std::endl;
    std::cout << "DVD Availability: " << dvd.getAvailability() << std::endl;  
    std::cout << "DVD Duration: " << dvd.getDuration() << " minutes" << std::endl;
    std::cout << "DVD Studio: " << dvd.getStudio() << std::endl;
    std::cout << "DVD Format: " << dvd.getFormat() << std::endl;

    std::cout << std::endl;

    
    Magazine magazine("National Geographic", "National Geographic Editorial", 2024, true, 178, "National Geographic Society");
    std::cout << "Magazine Title: " << magazine.getTitle() << std::endl;
    std::cout << "Magazine Author: " << magazine.getAuthor() << std::endl;
    std::cout << "Magazine Year Published: " << magazine.getYearPublished() << std::endl;
    std::cout << "Magazine Availability: " << magazine.getAvailability() << std::endl;  // Esto ahora retorna true/false
    std::cout << "Magazine Issue Number: " << magazine.getIssueNumber() << std::endl;
    std::cout << "Magazine Editorial: " << magazine.getEditorial() << std::endl;

    
    Article article1("The Wonders of Nature", "John Doe", "An article about the beauty of nature across the world.");
    Article article2("Exploring Mars", "Jane Smith", "An in-depth exploration of the red planet and its mysteries.");
    magazine.addArticle(article1, 0);
    magazine.addArticle(article2, 1);

    
    std::cout << "Magazine Articles:" << std::endl;
    std::cout << "Article 1: " << article1.getTitle() << " by " << article1.getAuthor() << std::endl;
    std::cout << "Article 2: " << article2.getTitle() << " by " << article2.getAuthor() << std::endl;

    return 0;
}
