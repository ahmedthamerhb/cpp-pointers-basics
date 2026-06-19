#include <iostream>
#include <string>

using namespace std;

// هيكل يمثل منتج في المخزن أو الكاشير
// Structure representing a product in inventory
struct Product {
    string name;
    double price;
};

// دالة لتحديث السعر مباشرة في الذاكرة باستخدام المؤشر
// Function to update the price directly in memory using a pointer
void applyDiscount(Product* productPtr, double discountPercentage) {
    
    // Checking if the pointer is safe and doesn't point to nothing (NULL)
    // التأكد من أن المؤشر آمن ولا يشير إلى مكان فارغ في الذاكرة
    if (productPtr != nullptr) {
        
        //  Using the (->) arrow operator to access the 'price' through the pointer.
        //  (->) نستخدم معامل السهم للوصول إلى متغير السعر عن طريق المؤشر وتعديله مباشرة
        double discountAmount = productPtr->price * (discountPercentage / 100);
        productPtr->price -= discountAmount; 
        
        cout << "\n[System]: Discount of " << discountPercentage << "% applied directly via Pointer!\n";
    }
}

int main() {
    // إنشاء منتج جديد (مثلاً لابتوب برمجة!)
    // Creating a new product
    Product myLaptop = {"Programming Laptop", 1200.0};

    cout << "--- Initial Product Details ---" << endl;
    cout << "Product Name: " << myLaptop.name << endl;
    cout << "Original Price: $" << myLaptop.price << endl;

    // Creating a pointer that stores the actual memory address of 'myLaptop' using the (&) operator.
    // (&) نقوم بإنشاء مؤشر يخزن العنوان الحقيقي للمنتج في الذاكرة باستخدام علامة الاند 
    Product* ptrToLaptop = &myLaptop;

    // Displaying the hexadecimal memory address where the laptop data is stored.
    // طباعة عنوان الذاكرة (مكان خزن بيانات اللابتوب) والذي يظهر كرمز سداسي عشر
    cout << "\n[Tech Info] Laptop Memory Address (Pointer Value): " << ptrToLaptop << endl;

    // استدعاء دالة التخفيض وتمرير المؤشر لها
    // Calling the function and passing the pointer to update the original object
    applyDiscount(ptrToLaptop, 15); // خصم 15%

    // طباعة السعر بعد التعديل للتأكد من أن المؤشر غيّر القيمة الأصلية
    // Printing details after update to prove the pointer changed the original data
    cout << "\n--- Updated Product Details ---" << endl;
    cout << "Product Name: " << myLaptop.name << endl;
    cout << "New Price (After Pointer Update): $" << myLaptop.price << endl;

    return 0;
}
