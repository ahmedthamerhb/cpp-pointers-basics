#include <iostream>
#include <string>

using namespace std;

// هيكل يمثل المحفظة الرقمية للمستخدم
// Structure representing a user's digital wallet
struct Wallet {
    string userName;
    double balance;
};

// دالة لإضافة الأموال (إيداع) مباشرة في الذاكرة باستخدام المؤشر
// Function to deposit money directly into memory using a pointer
void depositMoney(Wallet* walletPtr, double amount) {
    
    // Checking if the pointer is valid (not pointing to nothing)
    // التأكد من أن المؤشر صالح ولا يشير إلى مكان فارغ في الذاكرة
    if (walletPtr != nullptr) {
        
        // Use (->) operator to access and change 'balance' directly in memory
        // نستخدم معامل السهم لتعديل الرصيد الأصلي مباشرة داخل الذاكرة بدون نسخ البيانات
        walletPtr->balance += amount;
        
        cout << "\n[System]: $" << amount << " deposited successfully via Pointer!" << endl;
    }
}

int main() {
    // إنشاء محفظة جديدة لمستخدم
    // Creating a new wallet object
    Wallet myWallet = {"Ahmed Thamer", 250.0};

    cout << "--- Wallet Before Update ---" << endl;
    cout << "User: " << myWallet.userName << endl;
    cout << "Current Balance: $" << myWallet.balance << endl;

    // Creating a pointer that stores the actual memory address of 'myWallet'
    // (&) إنشاء مؤشر يخزن العنوان الحقيقي للمحفظة في الذاكرة باستخدام علامة
    Wallet* ptrToWallet = &myWallet;

    // Printing the hexadecimal memory location of the wallet
    // طباعة مكان خزن المحفظة في الذاكرة (عنوان السداسي عشر)
    cout << "\n[Memory Info] Wallet Address in RAM: " << ptrToWallet << endl;

    // استدعاء دالة الإيداع وتمرير المؤشر لها
    // Calling the function and passing the pointer
    depositMoney(ptrToWallet, 150.0); // إضافة 150 دولار

    // طباعة البيانات بعد التعديل للتأكد أن المؤشر غيّر الحساب الأصلي
    // Printing details after update to prove the pointer modified the original wallet
    cout << "\n--- Wallet After Pointer Update ---" << endl;
    cout << "User: " << myWallet.userName << endl;
    cout << "New Balance: $" << myWallet.balance << endl; // ستصبح 400

    return 0;
}
