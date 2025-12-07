#include <iostream>
#include <string>
using namespace std;

struct Patient {
    int id;
    string name;
    int priority; // 1 = Emergency, 2 = Normal
    Patient *next;
};

Patient *head = NULL;

void addPatient() {
    Patient *temp = new Patient;
    cout << "Enter Patient ID: ";
    cin >> temp->id;
    cout << "Enter Patient Name: ";
    cin >> temp->name;
    cout << "Priority (1-Emergency / 2-Normal): ";
    cin >> temp->priority;
    temp->next = NULL;

    if (!head || head->priority > temp->priority) {
        temp->next = head;
        head = temp;
    } else {
        Patient *p = head;
        while (p->next && p->next->priority <= temp->priority)
            p = p->next;
        temp->next = p->next;
        p->next = temp;
    }
    cout << "Patient added successfully!\n";
}

void treatPatient() {
    if (!head) {
        cout << "No patients waiting!\n";
        return;
    }
    Patient *temp = head;
    head = head->next;
    cout << "Treated Patient: " << temp->name << "\n";
    delete temp;
}

void showPatients() {
    if (!head) {
        cout << "No patients in queue.\n";
        return;
    }
    Patient *p = head;
    cout << "\nCurrent Patient Queue:\n";
    cout << "ID\tName\tPriority\n";
    while (p) {
        cout << p->id << "\t" << p->name << "\t" << (p->priority == 1 ? "Emergency" : "Normal") << endl;
        p = p->next;
    }
}

int main() {
    int ch;
    do {
        cout << "\n=== Hospital Queue System ===\n";
        cout << "1. Add Patient\n2. Treat Patient\n3. Show Queue\n0. Exit\n";
        cout << "Enter choice: ";
        cin >> ch;

        if (ch == 1) addPatient();
        else if (ch == 2) treatPatient();
        else if (ch == 3) showPatients();
    } while (ch != 0);
}
