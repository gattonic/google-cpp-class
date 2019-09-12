// book_store.cpp: Nicola Gatto
// Description: Calculates 

#include <iostream>
#include <vector>
using namespace std;

static const float kSaleRateNewAndRequired = .9f;
static const float kSaleRateUsedAndRequired = .65f;
static const float kSaleRateNewAndOptional = .4f;
static const float kSaleRateUsedAndOptional = .2f;
static const float kListPriceCut = .8f;

struct Book {
    int book_code;
    float price;
    int on_hand;
    int prospective_enrollment;
    bool required;
    bool new_book;
};

struct BookOrder {
    Book book;
    int amount_order;
    float total_cost;
};

Book TakeBookInput() {
    Book book;
    int required = 0;
    int new_book = 0;
    cout << "Please enter the book code: ";
    cin >> book.book_code;
    cout << " single copy price: ";
    cin >> book.price;
    cout << " number on hand: ";
    cin >> book.on_hand;
    cout << " prospective enrollment: ";
    cin >> book.prospective_enrollment;
    cout << " 1 for required / 0 for optional: ";
    cin >> required;
    book.required = (required == 1);
    cout << " 1 for new / 0 for used: ";
    cin >> new_book;
    book.new_book = (new_book == 1);
    return book;
}

void ShowBook(Book book) {
    cout << "Book: " << book.book_code << endl;
    cout << "Price: $" << book.price << endl;
    cout << "Inventory: " << book.on_hand << endl;
    cout << "Enrollment: " << book.prospective_enrollment << endl;
    cout << "This book is " << (book.required ? "required" : "optional")
        << " and " << (book.new_book ? "new" : "used") << "." << endl;
}

void PrintSeperator() {
    cout << "*************************************************************" << endl;
}

float CalculateOrderAmount(bool new_book, bool required, int prospective_enrollment) {
    float sale_rate = 0.0;
    if (new_book && required) {
        sale_rate = kSaleRateNewAndRequired;
    } else if (new_book && !required) {
        sale_rate = kSaleRateNewAndOptional;
    } else if (!new_book && required) {
        sale_rate = kSaleRateUsedAndRequired;
    } else {
        sale_rate = kSaleRateUsedAndOptional;
    }
    return sale_rate * prospective_enrollment;
}

BookOrder CalculateOrder(Book book) {
    BookOrder bookOrder;
    bookOrder.book = book;
    bookOrder.amount_order = CalculateOrderAmount(book.new_book, book.required, book.prospective_enrollment) - book.on_hand;
    bookOrder.total_cost = bookOrder.amount_order * book.price;
    return bookOrder;
}

void ShowBookOrder(BookOrder order) {
    cout << "Need to order: " << order.amount_order << endl;
    cout << "Total Cost: $" << order.total_cost << endl;
}

void ShowAllOrders(vector<BookOrder> orders) {
    float total_cost = 0.0;
    float profit = 0.0;

    for (BookOrder order : orders) {
        total_cost += order.total_cost;
    }

    cout << "Total for all orders: $" << total_cost << endl;
    cout << "Profit: $" << total_cost * (1.0 - kListPriceCut) << endl;
}

int main() {
    int done;
    vector<BookOrder> orders;
    do {
        Book book = TakeBookInput();
        PrintSeperator();
        ShowBook(book);
        PrintSeperator();
        BookOrder order = CalculateOrder(book);
        ShowBookOrder(order);
        PrintSeperator();
        orders.push_back(order);
        cout << "Enter 1 to do another book, 0 to stop.";
        cin >> done;
    } while (done == 1);
    PrintSeperator();
    ShowAllOrders(orders);
    PrintSeperator();
}