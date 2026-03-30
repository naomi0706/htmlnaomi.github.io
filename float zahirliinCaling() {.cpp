    float zahirliinCaling() {
        return hours * 15000 + 200000;
    }

public:
 
    employee() {
        number = 0;
        name   = "Todorhoigui";
        degree = "Ajilchin";
        hours  = 0;
        cout << "Anhdagch baiguulagch duudagdlaa: " << name << endl;
    }

    
    employee(int n, string nm, string deg, float h) {
        number = n;
        name   = nm;
        degree = deg;
        hours  = h;
        cout << "Parametertei baiguulagch: " << name << endl;
    }

 
    ~employee() {
        cout << "Ustgagch duudagdlaa: " << name << endl;
    }

   
    void setNumber(int n)     { number = n; }
    void setName(string nm)   { name = nm; }
    void setDegree(string d)  { degree = d; }
    void setHours(float h)    { hours = h; }


    int getNumber()   { return number; }
    string getName()  { return name; }
    string getDegree(){ return degree; }
    float getHours()  { return hours; }

  
    void getdata() {
        cout << "Code: ";    cin >> number;
        cout << "Ner: ";     cin >> name;
        cout << "Tushaal: "; cin >> degree;
        cout << "Tsag: ";    cin >> hours;
    }

   
    void showdata() {
        cout << "\nAjiltani code: " << number << endl;
        cout << "Ajiltani ner: " << name << endl;
        cout << "Alban tushaal: " << degree << endl;
        cout << "Ajillasan tsag: " << hours << endl;
    }

    float increasehours() {
        int nemelt;
        cout << "Iluu ajillasan tsag: ";
        cin >> nemelt;
        if (nemelt <= 24 && nemelt >= 0) {
            hours += nemelt;
            return 1;
        }
        return 0;
    }

    float estimatesalary() {
        if (degree == "Zahiral") {
            return zahirliinCaling();
        }
        return hours * 10000;
    }