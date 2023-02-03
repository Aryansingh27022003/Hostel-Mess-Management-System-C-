/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include <iostream>
#include <fstream>
#include<vector>
#include<string>
#include<map>
#include <limits>
using namespace std;
int main();
class prefect{
    public:
    string write_complain1;
    string notice_prefect1;
    
    void complain_write1(){
    std::string write_complain1;
    std::ofstream outfile;
    std::cout << "Write your complain here: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, write_complain1);
    outfile.open("Complain by students.txt", std::ios::trunc);  
    outfile << write_complain1;
    outfile.close();    
    }
    void view_notice_associate_warden5(){
    std::ifstream file("Notice by associate warden.txt");
    std::string notice2;
    if (file.is_open()) {
    while (std::getline(file, notice2)) {
        std::cout << notice2 << std::endl;
    }
    file.close();
    } else {
    std::cout << "Unable to open file" << std::endl;
    }    
    }
    void view_notice_dean5(){
    std::ifstream file("Notice by dean.txt");
    std::string notice_dean;
    if (file.is_open()) {
    while (std::getline(file, notice_dean)) {
        std::cout << notice_dean << std::endl;
    }
    file.close();
    } else {
    std::cout << "Unable to open file" << std::endl;
    }    
    }
    void view_notice_warden5(){
    std::ifstream file("Notice by warden.txt");
    std::string notice1;
    if (file.is_open()) {
    while (std::getline(file, notice1)) {
        std::cout << notice1 << std::endl;
    }
    file.close();
    } else {
    std::cout << "Unable to open file" << std::endl;
    }    
    }
    void view_notice_supervisior5(){
    std::ifstream file("Notice by supervisior.txt");
    std::string notice1;
    if (file.is_open()) {
    while (std::getline(file, notice1)) {
        std::cout << notice1 << std::endl;
    }
    file.close();
    } else {
    std::cout << "Unable to open file" << std::endl;
    }    
    }
    void publish_notice5(){
    std::string notice3;
    std::ofstream outfile;
    std::cout << "Write your notice here: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, notice3);
    outfile.open("Notice by prefect.txt", std::ios::trunc);
    outfile << notice3;

    outfile.close();
    }
    
};
class caterer{
    public:
  void write_caterer() {
  map<string, string> details;

  cout << "Enter the number of caterer details you want to enter: ";
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cout << "Enter hostel name: ";
    string key, value;
    cin >> key;
    cout<<"Enter the caterer name:";
    cin>> value;
    details[key] = value;
  }

  ofstream file;
  file.open("caterer_details.txt");

  for (auto it = details.begin(); it != details.end(); it++) {
    file << it->first << "=" << it->second << endl;
  }

  file.close();
}

map<string, string> readFromFile() {
  map<string, string> details;
  string line;
  ifstream file("caterer_details.txt");

  while (getline(file, line)) {
    int pos = line.find("=");
    string key = line.substr(0, pos);
    string value = line.substr(pos + 1);
    details[key] = value;
  }

  file.close();
  return details;
}
void view_caterer(){
    std::ifstream file("caterer_details.txt");
    std::string mess1;
    if (file.is_open()) {
    while (std::getline(file, mess1)) {
        std::cout << mess1 << std::endl;
    }
    file.close();
    } else {
    std::cout << "Unable to open file" << std::endl;
    }    
    }
};
class payment{
    
   public:
   int refund_amount;
  void writeToFile() {
  map<string, string> details;

  cout << "Enter the number of details: ";
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cout << "Enter scholar id: ";
    string key, value;
    cin >> key;
    cout<<"Enter the amount deposited:";
    cin>> value;
    details[key] = value;
  }

  ofstream file;
  file.open("person_details.txt");

  for (auto it = details.begin(); it != details.end(); it++) {
    file << it->first << "=" << it->second << endl;
  }

  file.close();
}

map<string, string> readFromFile() {
  map<string, string> details;
  string line;
  ifstream file("person_details.txt");

  while (getline(file, line)) {
    int pos = line.find("=");
    string key = line.substr(0, pos);
    string value = line.substr(pos + 1);
    details[key] = value;
  }

  file.close();
  return details;
}
void searchByKey() {
  cout << "Enter the sch_id to know amound deposited: ";
  string key;
  cin >> key;
  //string key;
  map<string, string> details = readFromFile();
  cout << "Amount: " <<details[key] << endl;
//   string key;
//   map<string, string> details = readFromFile();
}
void view_mess(){
    std::ifstream file("person_details.txt");
    std::string mess1;
    if (file.is_open()) {
    while (std::getline(file, mess1)) {
        std::cout << mess1 << std::endl;
    }
    file.close();
    } else {
    std::cout << "Unable to open file" << std::endl;
    }    
    }
void mess_salary() {
  map<string, string> details;

  cout << "Enter the number of workers: ";
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cout << "Enter workers name: ";
    string key, value;
    cin >> key;
    cout<<"Enter the amount to be given as salary:";
    cin>> value;
    details[key] = value;
  }

  ofstream file;
  file.open("salary_details.txt");

  for (auto it = details.begin(); it != details.end(); it++) {
    file << it->first << "=" << it->second << endl;
  }

  file.close();
}
map<string, string> readFromFile1() {
  map<string, string> details;
  string line;
  ifstream file("salary_details.txt");

  while (getline(file, line)) {
    int pos = line.find("=");
    string key = line.substr(0, pos);
    string value = line.substr(pos + 1);
    details[key] = value;
  }

  file.close();
  return details;
}
void view_mess_salary(){
    std::ifstream file("salary_details.txt");
    std::string salary1;
    if (file.is_open()) {
    while (std::getline(file, salary1)) {
        std::cout << salary1 << std::endl;
    }
    file.close();
    } else {
    std::cout << "Unable to open file" << std::endl;
    }
    
}
  void searchByKey1() {
  cout << "Enter the name to know amound of salary: ";
  string key;
  cin >> key;
  //string key;
  map<string, string> details = readFromFile1();
  cout << "Amount: " <<details[key] << endl;
//   string key;
//   map<string, string> details = readFromFile();
}

void attendance() {
  map<string, string> details;

  cout << "Enter the number of details: ";
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cout << "Enter scholar id: ";
    string key, value;
    cin >> key;
    cout<<"Enter the days eaten in mess:";
    cin>> value;
    details[key] = value;
  }

  ofstream file;
  file.open("attendance_details.txt");

  for (auto it = details.begin(); it != details.end(); it++) {
    file << it->first << "=" << it->second << endl;
  }

  file.close();
}
map<string, string> readFromFile2() {
  map<string, string> details2;
  string line;
  ifstream file("attendance_details.txt");

  while (getline(file, line)) {
    int pos = line.find("=");
    string key = line.substr(0, pos);
    string value = line.substr(pos + 1);
    details2[key] = value;
  }

  file.close();
  return details2;
}



void student_refund() {
  std::cout << "Enter the sch_id to know refund amount: ";
  std::string key;
  std::cin >> key;
  std::cout<<"Enter your hostel:";
  std::string hostelname;
  std::string GH1;
  std::string GH2;
  std::string GH3;
  std::string GH4;
  
  std::cin>>hostelname;
  int p;
  if(hostelname==GH1||hostelname==GH2||hostelname==GH3||hostelname==GH4){
      p=116;
  }
  else{
     p=130; 
  }

  auto details = readFromFile();
  auto details2 = readFromFile2();

  int refund = 0;
  try {
    refund = std::stoi(details.at(key)) - std::stoi(details2.at(key)) * p;
  } catch (const std::out_of_range &oor) {
    std::cerr << "Error: School ID not found." << std::endl;
    return;
  } catch (const std::invalid_argument &ia) {
    std::cerr << "Error: Invalid value in the file." << std::endl;
    return;
  }

  std::cout << "Refund amount: " << refund << std::endl;
  refund_amount=refund;
}
void print_invoice_student(){
    string name, department, hostelName;
    int scholarID;
    auto details = readFromFile();
    auto details2 = readFromFile2();
  
    cout << "Enter the name: "<<endl;
    cin >> name;
  
    cout << "Enter the Scholar ID: "<<endl;
    cin >> scholarID;
  
    cout << "Enter the department: "<<endl;
    cin >> department;
  
    cout << "Enter the hostel name: "<<endl;
    cin >> hostelName;
    std::string p = std::to_string(scholarID);
    cout << "------------------- Invoice -------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Scholar ID: " << scholarID << endl;
    cout << "Department: " << department << endl;
    cout << "Hostel Name: " << hostelName << endl;
    cout << "Mess Days:   "<<details2[p]<< endl;
    cout << "Amount deposited: "<<details[p]<<endl;
    cout << "Refund amount: "<<refund_amount<<endl;
    cout << "------------------------------------------------" << endl;
}


    
};
class Menu {
 public:
  map<string, map<string, string>> menu;

  void add_food(){
    string fileName, day, meal, food;
    cout << "Enter food for all days of the week:" << endl;
    for (const string& day : {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"}) {
      for (const string& meal : {"Breakfast", "Lunch", "Snacks", "Dinner"}) {
        cout << day << " " << meal << ": ";
        getline(cin, food);

        addFood(day, meal, food);
      }
    }
  }

  void addFood(string day, string meal, string food) {
    menu[day][meal] = food;
  }

  void displayFood() {
    cout << "Menu for the week:" << endl;
    for (auto i : menu) {
      cout << i.first << ": " << endl;
      for (auto j : i.second) cout << "\t" << j.first << ": " << j.second << endl;
    }
  }
  void displayFood1(){
    std::ifstream file("menu.txt");
    std::string salary1;
    if (file.is_open()) {
    while (std::getline(file, salary1)) {
        std::cout << salary1 << std::endl;
    }
    file.close();
    } else {
    std::cout << "Unable to open file" << std::endl;
    }
    
}

  void saveFood() {
    ofstream outfile;
    outfile.open("menu.txt");

    outfile << "Menu for the week:" << endl;
    for (auto i : menu) {
      outfile << i.first << ": " << endl;
      for (auto j : i.second) outfile << "\t" << j.first << ": " << j.second << endl;
    }
    outfile.close();
  }

  void editFood() {
    string day, meal;
    cout << "Enter the day and meal you want to edit:" << endl;
    cin >> day >> meal;

    cout << "Enter the new food:" << endl;
    string new_food;
    getline(cin, new_food);

    menu[day][meal] = new_food;
  }
};
class mmc{
    public:
    
    
    // void impose_fine3()
    

    
    
    void view_notice_associate_warden6(){
    std::ifstream file("Notice by associate warden.txt");
    std::string notice2;
    if (file.is_open()) {
    while (std::getline(file, notice2)) {
        std::cout << notice2 << std::endl;
    }
    file.close();
    } else {
    std::cout << "Unable to open file" << std::endl;
    }    
    }
    void view_notice_dean6(){
    std::ifstream file("Notice by dean.txt");
    std::string notice_dean;
    if (file.is_open()) {
    while (std::getline(file, notice_dean)) {
        std::cout << notice_dean << std::endl;
    }
    file.close();
    } else {
    std::cout << "Unable to open file" << std::endl;
    }    
    }
    void view_notice_warden6(){
    std::ifstream file("Notice by warden.txt");
    std::string notice1;
    if (file.is_open()) {
    while (std::getline(file, notice1)) {
        std::cout << notice1 << std::endl;
    }
    file.close();
    } else {
    std::cout << "Unable to open file" << std::endl;
    }    
    }
    void view_notice_supervisior6(){
    std::ifstream file("Notice by supervisior.txt");
    std::string notice1;
    if (file.is_open()) {
    while (std::getline(file, notice1)) {
        std::cout << notice1 << std::endl;
    }
    file.close();
    } else {
    std::cout << "Unable to open file" << std::endl;
    }    
    }
    void view_notice_prefect6(){
    std::ifstream file("Notice by prefect.txt");
    std::string notice1;
    if (file.is_open()) {
    while (std::getline(file, notice1)) {
        std::cout << notice1 << std::endl;
    }
    file.close();
    } else {
    std::cout << "Unable to open file" << std::endl;
    }    
    }
    
    
};

class supervisior{
    public:
    int workers_fine3;
    string notice3;
    string students_fine3;
    
    // void impose_fine3()
    

    void publish_notice3(){
    std::string notice3;
    std::ofstream outfile;
    std::cout << "Write your notice here: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, notice3);
    outfile.open("Notice by supervisior.txt", std::ios::trunc);
    outfile << notice3;

    outfile.close();
    }
    void complain_students3(){
    std::ifstream file("Complain by students.txt");
    std::string input;
    if (file.is_open()) {
    while (std::getline(file, input)) {
        std::cout << input << std::endl;
    }
    file.close();

    } else {
    std::cout << "Unable to open file" << std::endl;
    }    
    }
    void complain_workers3(){
    std::ifstream file("Complain by workers.txt");
    std::string input;
    if (file.is_open()) {
    while (std::getline(file, input)) {
        std::cout << input << std::endl;
    }
    file.close();
    } else {
    std::cout << "Unable to open file" << std::endl;
    }    
    }
    void view_notice_associate_warden3(){
    std::ifstream file("Notice by associate warden.txt");
    std::string notice2;
    if (file.is_open()) {
    while (std::getline(file, notice2)) {
        std::cout << notice2 << std::endl;
    }
    file.close();
    } else {
    std::cout << "Unable to open file" << std::endl;
    }    
    }
    void view_notice_dean3(){
    std::ifstream file("Notice by dean.txt");
    std::string notice_dean;
    if (file.is_open()) {
    while (std::getline(file, notice_dean)) {
        std::cout << notice_dean << std::endl;
    }
    file.close();
    } else {
    std::cout << "Unable to open file" << std::endl;
    }    
    }
    void view_notice_warden3(){
    std::ifstream file("Notice by warden.txt");
    std::string notice1;
    if (file.is_open()) {
    while (std::getline(file, notice1)) {
        std::cout << notice1 << std::endl;
    }
    file.close();
    } else {
    std::cout << "Unable to open file" << std::endl;
    }    
    }
    
    
};
class associate_warden{
    public:
    int workers_fine2;
    string notice2;
    string students_fine2;
    
    
    void publish_notice2(){
    std::string notice2;
    std::ofstream outfile;
    std::cout << "Write your notice here: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, notice2);
    outfile.open("Notice by associate warden.txt", std::ios::trunc);
    outfile << notice2;

    outfile.close();
    }
    void complain_students2(){
    std::ifstream file("Complain by students.txt");
    std::string input;
    if (file.is_open()) {
    while (std::getline(file, input)) {
        std::cout << input << std::endl;
    }
    file.close();

    } else {
    std::cout << "Unable to open file" << std::endl;
    }    
    }
    void complain_workers2(){
    std::ifstream file("Complain by workers.txt");
    std::string input;
    if (file.is_open()) {
    while (std::getline(file, input)) {
        std::cout << input << std::endl;
    }
    file.close();
    } else {
    std::cout << "Unable to open file" << std::endl;
    }    
    }
};
class mess_workers{
    public:
    int salry;
    string complain;
    string notice_dean;
    
    void write_complain_mess(){
    std::string complain;
    std::ofstream outfile;
    std::cout << "Write your complain here: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin,complain);
    outfile.open("Complain by workers.txt", std::ios::trunc);  
    outfile << complain;
    outfile.close();     
    }
    void view_notice_associate_warden(){
    std::ifstream file("Notice by associate warden.txt");
    std::string notice2;
    if (file.is_open()) {
    while (std::getline(file, notice2)) {
        std::cout << notice2 << std::endl;
    }
    file.close();
    } else {
    std::cout << "Unable to open file" << std::endl;
    }    
    }
    void view_notice_dean(){
    std::ifstream file("Notice by dean.txt");
    std::string notice_dean;
    if (file.is_open()) {
    while (std::getline(file, notice_dean)) {
        std::cout << notice_dean << std::endl;
    }
    file.close();
    } else {
    std::cout << "Unable to open file" << std::endl;
    }    
    }
    void view_notice_warden(){
    std::ifstream file("Notice by warden.txt");
    std::string notice1;
    if (file.is_open()) {
    while (std::getline(file, notice1)) {
        std::cout << notice1 << std::endl;
    }
    file.close();
    } else {
    std::cout << "Unable to open file" << std::endl;
    }    
    }
    void view_notice_supervisior(){
    std::ifstream file("Notice by supervisior.txt");
    std::string notice1;
    if (file.is_open()) {
    while (std::getline(file, notice1)) {
        std::cout << notice1 << std::endl;
    }
    file.close();
    } else {
    std::cout << "Unable to open file" << std::endl;
    }    
    }
    void view_notice_prefect7(){
    std::ifstream file("Notice by prefect.txt");
    std::string notice1;
    if (file.is_open()) {
    while (std::getline(file, notice1)) {
        std::cout << notice1 << std::endl;
    }
    file.close();
    } else {
    std::cout << "Unable to open file" << std::endl;
    }    
    }
};
class warden{
    public:
    int workers_fine1;
    string notice1;
    string students_fine1;
    
    
    void publish_notice1(){
    std::string notice1;
    std::ofstream outfile;
    std::cout << "Write your notice here: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, notice1);
    outfile.open("Notice by warden.txt", std::ios::trunc);
    outfile << notice1;

    outfile.close();
    }
    void complain_students1(){
    std::ifstream file("Complain by students.txt");
    std::string input;
    if (file.is_open()) {
    while (std::getline(file, input)) {
        std::cout << input << std::endl;
    }
    file.close();

    } else {
    std::cout << "Unable to open file" << std::endl;
    }    
    }
    void complain_workers1(){
    std::ifstream file("Complain by workers.txt");
    std::string input;
    if (file.is_open()) {
    while (std::getline(file, input)) {
        std::cout << input << std::endl;
    }
    file.close();
    } else {
    std::cout << "Unable to open file" << std::endl;
    }    
    }
    void impose_fine1(){
    int option11;
    cout<<"Fine to be imposed on whom:- "<<endl;
    cout<<"1. Student"<<endl;
    cout<<"2. Worker"<<endl;
    cout<<"Enter the correct option: ";
    cin>>option11;

    switch(option11)
    {
        case 1:
        {
            ofstream fout;
            fout.open("fine.txt", ios::app);
            if (fout.is_open())
            {
                int students_fine1;
                cout<<"Amount to be imposed as fine on students: ";
                cin>>students_fine1;
                fout << students_fine1 << endl;
                fout.close();
                cout << "Fine imposed on students successfully saved to file." << endl;
            }
            else
            {
                cout << "Error opening file for writing." << endl;
            }
            break;
        }
        
        case 2:
        {
            ofstream fout;
            fout.open("fine on worker.txt", ios::app);
            if (fout.is_open())
            {
                cout<<"Amount to be imposed as fine on students: ";
                cin>>workers_fine1;
                fout << workers_fine1 << endl;
                fout.close();
                cout << "Fine imposed on workers successfully saved to file." << endl;
            }
            else
            {
                cout << "Error opening file for writing." << endl;
            }
            break;
        }
        default:
        {
            cout << "Invalid option selected. Please try again." << endl;
            break;
        }
        
    }
    }

    };
class students{
    public:
    int write_complain;
    int view_refund;
    
    void complain_write(){
    std::string write_complain;
    std::ofstream outfile;
    std::cout << "Write your complain here: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, write_complain);
    outfile.open("Complain by students.txt", std::ios::trunc);  
    outfile << write_complain;
    outfile.close();    
    }
    void view_notice_associate_warden7(){
    std::ifstream file("Notice by associate warden.txt");
    std::string notice2;
    if (file.is_open()) {
    while (std::getline(file, notice2)) {
        std::cout << notice2 << std::endl;
    }
    file.close();
    } else {
    std::cout << "Unable to open file" << std::endl;
    }    
    }
    void view_notice_dean7(){
    std::ifstream file("Notice by dean.txt");
    std::string notice_dean;
    if (file.is_open()) {
    while (std::getline(file, notice_dean)) {
        std::cout << notice_dean << std::endl;
    }
    file.close();
    } else {
    std::cout << "Unable to open file" << std::endl;
    }    
    }
    void view_notice_warden7(){
    std::ifstream file("Notice by warden.txt");
    std::string notice1;
    if (file.is_open()) {
    while (std::getline(file, notice1)) {
        std::cout << notice1 << std::endl;
    }
    file.close();
    } else {
    std::cout << "Unable to open file" << std::endl;
    }    
    }
    void view_notice_supervisior7(){
    std::ifstream file("Notice by supervisior.txt");
    std::string notice1;
    if (file.is_open()) {
    while (std::getline(file, notice1)) {
        std::cout << notice1 << std::endl;
    }
    file.close();
    } else {
    std::cout << "Unable to open file" << std::endl;
    }    
    }
    
};
class Dean_SW{
    public:
    int workers_fine;
    string notice;
    string students_fine;
    
    void impose_fine(){
    int option11;
    cout<<"Fine to be imposed on whom:- "<<endl;
    cout<<"1. Student"<<endl;
    cout<<"2. Worker"<<endl;
    cout<<"Enter the correct option: ";
    cin>>option11;

    switch(option11)
    {
        case 1:
        {
            ofstream fout;
            fout.open("fine.txt", ios::app);
            if (fout.is_open())
            {
                cout<<"Amount to be imposed as fine on students: ";
                cin>>students_fine;
                fout << students_fine << endl;
                fout.close();
                cout << "Fine imposed on students successfully saved to file." << endl;
            }
            else
            {
                cout << "Error opening file for writing." << endl;
            }
            break;
        }
        case 2:
        {
            ofstream fout;
            fout.open("fine on worker.txt", ios::app);
            if (fout.is_open())
            {
                cout<<"Amount to be imposed as fine on students: ";
                cin>>workers_fine;
                fout << workers_fine << endl;
                fout.close();
                cout << "Fine imposed on workers successfully saved to file." << endl;
            }
            else
            {
                cout << "Error opening file for writing." << endl;
            }
            break;
        }
        default:
        {
            cout << "Invalid option selected. Please try again." << endl;
            break;
        }
    }

        int k;
        cout<<"1.Want to return to login section."<<endl;
        cout<<"2.Exit"<<endl;
        cout<<"Write the correct option"<<endl;
        cin>>k;
      
        switch(k){
          case 1:
          main();
          case 2:
          exit(0);
      }
    }
    void publish_notice(){
    std::string notice;
    std::ofstream outfile;
    std::cout << "Write your notice here: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, notice);
    outfile.open("Notice by dean.txt", std::ios::trunc);
    outfile << notice;

    outfile.close();
    }
    void complain_students(){
    std::ifstream file("Complain by students.txt");
    std::string students_complain;
    if (file.is_open()) {
    while (std::getline(file, students_complain)) {
        std::cout << students_complain << std::endl;
    }
    file.close();
    } else {
    std::cout << "Unable to open file" << std::endl;
    }    
    }
    void complain_workers(){
    std::ifstream file("Complain by workers.txt");
    std::string workers_complain;
    if (file.is_open()) {
    while (std::getline(file, workers_complain)) {
        std::cout << workers_complain << std::endl;
    }
    file.close();
    } else {
    std::cout << "Unable to open file" << std::endl;
    }    
    }
};
class hostel{
    public:
      //int hostel_number;
      string hostel_name;
      string hostel_type;
      int decision;

      
      
      
      void add_hostel(){
          int option5,total;
          cout<<"Write the hostel type(BOYS or GIRLS) to add to hostel list."<<endl;
          cin>>hostel_type;
          cout<<"Write the number of hostel to be added in the list."<<endl;
          cin>>total;
          if(hostel_type=="BOYS"){
            ofstream fout;
	        fout.open ("BOYS HOSTEL.txt", ios::app);
	        for(int i=0;i<total;i++){
	        while (fout){
	            cout<<"Write Hostel name to add in hostel list"<<endl;
	            cin>>hostel_name;
	            fout<<hostel_name<<endl;
	         
	            break;
	         }
	        }
	        fout.close();
	        
          }
	        
	  
	      else{   
            ofstream fout;
	        fout.open ("GIRLS HOSTEL.txt", ios::app);
	        for(int j=0;j<total;j++){
	        while (fout){
	            cout<<"Write Hostel name to add in hostel list"<<endl;
	            cin>>hostel_name;
	            fout<<hostel_name<<endl;
	            break;
	         }
	        }
	        fout.close();
        }
        
    
      }
      
      
      
      void hostel_details ()
      {
        int option,option1,option2,option3,option4,m=10,n=4;  
        cout << "1.Boys Hostel" << endl;
        cout << "2.Girls Hostel"<<endl;
        cout<<"Write correct option number"<<endl;
        cin>>option;
        ifstream fin;
        switch(option){
            case 1:
            
            fin.open("BOYS HOSTEL.txt");
            while (getline(fin, hostel_name)) {
            cout << hostel_name << endl;
            }
            fin.close();
        
            cout<<"Write the correct option"<<endl;
            //cin>>option1;
            break;
            case 2:
            fin.open("GIRLS HOSTEL.txt");
            while (getline(fin,hostel_name )) {
            cout << hostel_name << endl;
            }
            fin.close();
            //cout<<"Write the correct option"<<endl;
            //cin>>option2;
            break;
        }
       
        
      } 
      
     };
class role:public hostel,public Dean_SW,public students,public warden,public mess_workers,public associate_warden,public supervisior,public Menu,public payment,public caterer,public prefect, public mmc {
    public:
    int role_name;
    
    
       void role_justification(){
            int option3,option4,option5,option6,option7,option8,option9,option10,option11;
            string unique_key;
            cout<<"1.Dean SW"<<endl;
            cout<<"2.Warden"<<endl;
            cout<<"3.Associate Warden"<<endl;
            cout<<"4.Supervisior"<<endl;
            cout<<"5.Caterer"<<endl;
            cout<<"6.Mess workers"<<endl;
            cout<<"7.Prefect"<<endl;
            cout<<"8.Food Menu manager"<<endl;
            cout<<"9.Hostel Boarders"<<endl;
            cout<<"Write the option that correctly defines you"<<endl;
            cin>>option3;
            
            
            switch(option3){
                case 1:
                for(int i=0;i<5;i++){
                cout<<"Input your unique key"<<endl;
                cin>>unique_key;
                if(unique_key=="dean"){
                
                cout<<"1.Want to add new hostel."<<endl;
                cout<<"2.Want to see hostel list."<<endl;
                cout<<"3.Want to impose fine."<<endl;
                cout<<"4.Want to publish a notice."<<endl;
                cout<<"5.Want to view complain by students."<<endl;
                cout<<"6.Want to view copmplain by workers."<<endl;
                cout<<"7.Want to add Caterer details."<<endl;
                cout<<"Write the correct option"<<endl;
                cin>>option4;
                break;
                
                }
                else{
                    cout<<"Invalid unique_key"<<endl;
                    cout<<"You have "<<4-i<<"chance remaining."<<endl;
                    }
                
                
                }
                
                switch(option4){
                case 1:
                add_hostel();
                int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                case 2:
                hostel_details();
                //int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                case 3:
                impose_fine();
                //int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                case 4:
                publish_notice();
                //int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                case 5:
                complain_students();
                //int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                case 6:
                complain_workers();
                //int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                case 7:
                write_caterer();
                cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                
            }
                
            case 2:
                for(int i=0;i<5;i++){
                cout<<"Input your unique key"<<endl;
                cin>>unique_key;
                if(unique_key=="warden"){
                cout<<"Which hostel warden are you?"<<endl;
                hostel_details();
                cin>>option6;
                cout<<"1.Want to impose fine."<<endl;
                cout<<"2.Want to publish a notice."<<endl;
                cout<<"3.Want to view complain by students."<<endl;
                cout<<"4.Want to view copmplain by workers."<<endl;
                cout<<"5.Want to see mess amount stastistic."<<endl;
                cout<<"6.Want to see caterer details"<<endl;
                cout<<"7.Want to see mess worker salary"<<endl;
                cout<<"Write the correct option"<<endl;
                cin>>option7;
                break;
                }
                else{
                    cout<<"Invalid unique_key"<<endl;
                    cout<<"You have "<<4-i<<"chance remaining."<<endl;
                    }
                
                }
                switch(option7){
                    case 1:
                    impose_fine1();
                    int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 2:
                    publish_notice1();
                    //int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 3:
                    complain_students1();
                    //int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 4:
                    complain_workers1();
                    //int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 5:
                    view_mess();
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 6:
                    view_caterer();
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 7:
                    view_mess_salary();
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    
                }
            case 9:
            for(int i=0;i<5;i++){
                cout<<"Input your unique key"<<endl;
                cin>>unique_key;
                if(unique_key=="2023"){
                    cout<<"1.Want to add complain"<<endl;
                    cout<<"2.want to see amount deposited"<<endl;
                    cout<<"3.Want to see refund amount"<<endl;
                    cout<<"4.Want to see notice by Dean SW"<<endl;
                    cout<<"5.Want to see notice by Warden"<<endl;
                    cout<<"6.Want to see notice by Associate Warden"<<endl;
                    cout<<"7.Want to see notice by Supervisior"<<endl;
                    cout<<"8.Want to see notice by Prefect"<<endl;
                    cout<<"9.Want to see food menu"<<endl;
                    cout<<"Write the correct optiion"<<endl;
                    cin>>option5;
                    break;
                }
                else{
                    cout<<"Invalid unique_key"<<endl;
                    cout<<"You have only"<<4-i<<"chance remining."<<endl;
                }
            }
            switch(option5){
                case 1:
                write_complain_mess();
                int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                case 2:
                searchByKey();
                //int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                case 4:
                view_notice_dean7();
                cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                case 5:
                view_notice_warden7();
                cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                case 6:
                view_notice_associate_warden7();
                cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    
                case 7:
                view_notice_supervisior7();
                cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                case 8:
                view_notice_prefect7();
                cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                case 9:
                displayFood1();
                cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                case 3:
                student_refund();
                cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                
            }
            case 6:
            for(int i=0;i<5;i++){
                cout<<"Input your unique key"<<endl;
                cin>>unique_key;
                if(unique_key=="mess"){
                    cout<<"1.Want to add complain"<<endl;
                    cout<<"2.want to see salary"<<endl;
                    cout<<"3.Want to see notice by Dean SW"<<endl;
                    cout<<"4.Want to see notice by Warden"<<endl;
                    cout<<"5.Want to see notice by Associate Warden"<<endl;
                    cout<<"6.Want to see notice by Supervisior"<<endl;
                    cout<<"7.Want to see notice by Prefect"<<endl;
                    cout<<"8.Want to see food menu"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>option8;
                    break;
                }
                else{
                    cout<<"Invalid unique_key"<<endl;
                    cout<<"You have only"<<4-i<<"chance remining."<<endl;
                }
            }
            switch(option8){
                case 1:
                write_complain_mess();
                int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                break;
                case 2:
                searchByKey1();
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                case 3:
                view_notice_dean();
                //int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                break;
                case 4:
                view_notice_warden();
                //int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                break;
                case 5:
                view_notice_associate_warden();
                //int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                break;
                case 6:
                view_notice_supervisior();
                cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                break;
                
                case 7:
                view_notice_prefect7();
                cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                break;
                case 8:
                displayFood1();
                cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                break;
                
                
                
            }
            case 3:
                for(int i=0;i<5;i++){
                cout<<"Input your unique key"<<endl;
                cin>>unique_key;
                if(unique_key=="associate"){
                cout<<"Which hostel  associate warden are you?"<<endl;
                hostel_details();
                cin>>option6;
            
                cout<<"1.Want to publish a notice."<<endl;
                cout<<"2.Want to view complain by students."<<endl;
                cout<<"3.Want to view copmplain by workers."<<endl;
                cout<<"4.Want to view mess amount stastistic."<<endl;
                cout<<"5.Want to see caterer details."<<endl;
                cout<<"6.Want to see mess worker salary stastics."<<endl;
                cout<<"Write the correct option"<<endl;
                cin>>option9;
                break;
                }
                else{
                    cout<<"Invalid unique_key"<<endl;
                    cout<<"You have "<<4-i<<"chance remaining."<<endl;
                    }
                
                }
                switch(option9){
                    
                    case 1:
                    publish_notice2();
                    int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 2:
                    complain_students2();
                    //int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 3:
                    complain_workers2();
                    //int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 4:
                    view_mess();
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 5:
                    view_caterer();
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 6:
                    view_mess_salary();
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    
                    
                }
                case 4:
                for(int i=0;i<5;i++){
                cout<<"Input your unique key"<<endl;
                cin>>unique_key;
                if(unique_key=="supervisior"){
                cout<<"Which hostel Supervisior are you?"<<endl;
                hostel_details();
                cin>>option6;
                cout<<"1.Want to publish a notice."<<endl;
                cout<<"2.Want to view complain by students."<<endl;
                cout<<"3.Want to view copmplain by workers."<<endl;
                cout<<"4.Want to enter mess fee details."<<endl;
                cout<<"5.Want to see notice by Dean SW"<<endl;
                cout<<"6.Want to see notice by Warden"<<endl;
                cout<<"7.Want to see notice by Associate Warden"<<endl;
                cout<<"8.Want to see caterer details."<<endl;
                cout<<"9.Want to enter mess worker salary details."<<endl;
                cout<<"10.Want to enter the attendance details of students."<<endl;
                cout<<"11.Want to print invoice of a particular student."<<endl;
                cout<<"Write the correct option"<<endl;
                cin>>option10;
                break;
                }
                else{
                    cout<<"Invalid unique_key"<<endl;
                    cout<<"You have "<<4-i<<"chance remaining."<<endl;
                    }
                
                }
                switch(option10){
                    
                    case 1:
                    publish_notice3();
                    int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 2:
                    complain_students3();
                    //int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 3:
                    complain_workers3();
                    //int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 5:
                    view_notice_dean3();
                    //int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 6:
                    view_notice_warden3();
                    //int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    
                    break;
                    case 7:
                    view_notice_associate_warden3();
                    //int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 4:
                    writeToFile();
                    //int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 8:
                    view_caterer();
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 9:
                    mess_salary();
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 10:
                    attendance();
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 11:
                    print_invoice_student();
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    
                    
                }
                case 8:
                for(int i=0;i<5;i++){
                cout<<"Input your unique key"<<endl;
                cin>>unique_key;
                if(unique_key=="mmc"){
                cout<<"Which hostel mess manger are you?"<<endl;
                hostel_details();
                cin>>option6;
                cout<<"1.Want to work on Menu."<<endl;
                cout<<"2.Want to see notice by Dean SW"<<endl;
                cout<<"3.Want to see notice by Warden"<<endl;
                cout<<"4.Want to see notice by Associate Warden"<<endl;
                cout<<"5.Want to see notice by supervisior"<<endl;
                cout<<"6.Want to see notice by prefect"<<endl;
                cout<<"7.Want to edit food menu."<<endl;
                cout<<"Write the correct option"<<endl;
                cin>>option11;
                break;
                }
                else{
                    cout<<"Invalid unique_key"<<endl;
                    cout<<"You have "<<4-i<<"chance remaining."<<endl;
                    }
                
                }
                switch(option11){
                    case 1:
                    add_food();
                    saveFood();
                    int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 2:
                    view_notice_dean6();
                    //int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    
                    break;
                    case 3:
                    view_notice_warden6();
                    //int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 4:
                    view_notice_associate_warden6();
                    //int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 7:
                    editFood();
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 5:
                    view_notice_supervisior6();
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 6:
                    view_notice_prefect6();
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    
                    
                }
                case 5:
                for(int i=0;i<5;i++){
                cout<<"Input your unique key"<<endl;
                cin>>unique_key;
                if(unique_key=="caterer"){
                cout<<"Which hostel mess manger are you?"<<endl;
                hostel_details();
                cin>>option6;
                cout<<"1.Want to view Menu."<<endl;
                cout<<"2.Want to see caterer list"<<endl;
                cout<<"Write the correct option"<<endl;
                cin>>option11;
                break;
                }
                else{
                    cout<<"Invalid unique_key"<<endl;
                    cout<<"You have "<<4-i<<"chance remaining."<<endl;
                    }
                
                }
                switch(option11){
                    case 1:
                    displayFood1();
                    int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 2:
                    view_caterer();
                    //int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                }
                case 7:
                for(int i=0;i<5;i++){
                cout<<"Input your unique key"<<endl;
                cin>>unique_key;
                if(unique_key=="caterer"){
                cout<<"Which hostel mess manger are you?"<<endl;
                hostel_details();
                cin>>option6;
                cout<<"1.Want to view Menu."<<endl;
                cout<<"2.Want to see notice by Dean SW"<<endl;
                cout<<"3.Want to see notice by Warden"<<endl;
                cout<<"4.Want to see notice by Associate Warden"<<endl;
                cout<<"5.Want to see notice by supervisior"<<endl;
                cout<<"6.Want to add complain"<<endl;
                cout<<"7.Want to publish a notice"<<endl;
                
                cout<<"Write the correct option"<<endl;
                cin>>option11;
                break;
                }
                else{
                    cout<<"Invalid unique_key"<<endl;
                    cout<<"You have "<<4-i<<"chance remaining."<<endl;
                    }
                
                }
                switch(option11){
                    case 1:
                    displayFood1();
                    int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 2:
                    view_notice_dean5();
                    //int k;
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 3:
                    view_notice_warden5();
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 4:
                    view_notice_associate_warden5();
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 5:
                    view_notice_supervisior5();
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 6:
                    complain_write1();
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    case 7:
                    publish_notice5();
                    cout<<"1.Want to return to login section."<<endl;
                    cout<<"2.Exit"<<endl;
                    cout<<"Write the correct option"<<endl;
                    cin>>k;
       
                    switch(k){
                    case 1:
                    main();
                    case 2:
                    exit(0);
                    }
                    break;
                    
                    
                    
                }
                
                
                
            
        }
       }
    };
//hostel obj3;
class credentials:private role{
public:
  string username;
  string password;
  string line;


  void details ()
  {

    int count1 = 0;
    int count2 = 0;
    int p = 0;
    int flag = 0;
    int flag1 = 0;
    int j=0;
    

    cout <<"Enter the following details to access mess management information" <<endl;
    for (int i = 0; i < 5; i++)
      {
    	cout << "ENTER USERNAME" << endl;
	    cin >> username;
	    
	    if (username != "Nitsilchar")
	    {
	    count1 += 1;
	    if (count1 == 5)
	      {
		cout << "Authentication failed." << endl;
		break;
	      }
	    cout << "invalid username" << endl;
	    cout << "You have only : " << 4 -
	      i << " :chance remaining" << endl;;
        
	  }
	else
	  {
	    ifstream fin;
	    for (j = 0; j < 5; j++)
	    {
	    
	        fin.open ("sample.txt");
		    cout << "ENTER PASSWORD\n";
		    cin >> password;
		    
            while (getline (fin, line))
		     {
		        if (password == line)
		        {
			        cout << "Welcome to  mess management portal" << "\n";
			        role_justification();
			        flag = 1;
			        break;
			      
		        }
		     }
		     
		    if(flag==0)
		    {
			    cout << "invalid password" << endl;
			    if(4-j)
			    cout << "you have only " << 4 -
			    j << " chance remaining" << endl;
			    else
			    cout<<"Authentication failed."<<endl;
		     }
		     
		    fin.close();
		    if(flag==1 )
	        break;
	    }
	      
	  }

	  if(flag==1 ||j==5 )
	    break;
    }
    
  }
    
  void create_account ()
  {
    int n=0;
    cout << "ENTER USERNAME" << endl;
    cin >> username;
    if (username != "Nitsilchar")
      {
	cout << "You are not eligible for making account." << endl;
      }
    else
      {
	ofstream fout;
	fout.open ("sample.txt", ios::app);
	while (fout)
	  {
	    cout << "ENTER PASSWORD(Password must contains 8 digits)" << endl;
	    cin >> password;
	    ifstream fin;
	    fin.open ("sample.txt");
	     while (getline (fin, line))
		 {
		    if (password == line)
		    {
			   n=1;
			   break;
		    }
		 }
		//cout<<n;     
	    //getline(cin, line);
	    if (password.size () != 8)
	      {
		cout << "invalid password" << endl;
	      }
	      else if(n==1){
	          cout<<"Password commonly used(Try different password)"<<endl;
	          n=0;
	      }
	     else
	      {
		fout << password << endl;
		cout<<"Your account has been successfully created."<<endl;
		break;
	      }
	  }
	fout.close ();
	//break;
	
	
      }
  }

};

    
int
main ()
{
  int option;
  cout << "1.Already have an account?" << endl;
  cout << "2.Create a new account" << endl;
  cout << "Write the option number:-" << endl;
  cin >> option;
  for(int i=0;i<1000;i++){
  if(option!=1&&option!=2){
      cout<<"You have chosen wrong option"<<endl;
      cout << "1.Already have an account?" << endl;
      cout << "2.Create a new account" << endl;
      cout << "Write the option number:-" << endl;
      cin >> option;
      cout<<"Enter correct option"<<endl;
  }
  }
  credentials obj1;
  credentials obj2;

  switch (option)
    {
    case 1:
      obj1.details ();
      break;

    case 2:
      obj2.create_account ();
      break;
    }
//     Menu menu;
// string fileName, day, meal, food;
// cout << "Enter food for all days of the week:" << endl;
// for (const string& day : {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"}) {
//     for (const string& meal : {"Breakfast", "Lunch", "Snacks", "Dinner"}) {
//         cout << day << " " << meal << ": "; getline(cin, food);
//         menu.addFood(day, meal, food);
//     }
// }

// cout << "Enter file name to save menu: "; getline(cin, fileName);
// menu.saveToFile(fileName);

// cout << "Enter file name to load menu: "; getline(cin, fileName);
// menu.loadFromFile(fileName);

 

return 0;
}
    //role obj3;
    //obj3.role_justification();


