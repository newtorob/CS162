#ifndef ITEM_HPP
#define ITEM_HPP

class Item {

  private:
    std::string name;
    int quantity;
    std::string unit;
    float price;

  public:
    Item();
    Item(std::string itemName, int qtyNeeded, std::string unitName = "", float unitPrice = 0);
    float print(); // returns the 'extended price' for the item after printing
    void setUnit(std::string unitName);
    void setPrice(float unitPrice);
    friend bool operator==(Item item1, Item item2);
    friend Item operator+(Item item1, int num);
    friend Item operator-(Item item1, int num);

};

#endif