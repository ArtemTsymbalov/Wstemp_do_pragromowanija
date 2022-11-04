//zad0
    int n;
    bool isPrime = true;
    cout << "enter a number" << endl;
    cin >> n;
    if (n <= 1) {
        cout << n << "is not a pri,e number" << endl;
    }
    else {
        for (int i = 2; i < n / 2;i++) {
            if (n % i == 0) {
                isPrime = false;
            }
        }
    }
    if (isPrime) {
        cout << n << "is a prame namber" << endl;
    }
    else {
        cout << n << "is a not prame namber" << endl;
    }
    //zad1
    int i;
    for (i = 0; i <= 50;i=i+2) {
        cout << i << ",";
    }
    while (i <= 100) {
        if (i < 100) {
            cout << i << ",";
            i = i + 2;
        }
        else {
            cout << i;
            i = i + 2;
        }
    }
    //zad2
    int n;
    int rozw=1;
    cout << "wpisz liczbe: ";
    cin >> n;
    if (n == 0) {
        rozw = 1;
    }
    if (n > 0) {
        for (int i=1; i < n; i++) {
            rozw = rozw * (i + 1);
        }
        cout << rozw;
    }
    if (n < 0) {
        cout << "nie poprawno";
    }
    //zad3
    int n, i=2;
    int sum,ppwsze=0, pwsze=1;
    cout << "wpisz liczbe: ";
    cin >> n;
    cout << "wynik:0, 1, ";
    if (n == 0) {
        sum = 0;
    }
    else if (n == 1) {
        sum = 1;
    }
    else if (n >1) {
        while (i < n) {
            sum = ppwsze + pwsze;
            ppwsze = pwsze;
            pwsze = sum;
            cout << sum <<", ";
            i = i + 1;
        }
    }
}
