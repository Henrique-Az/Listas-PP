struct hora{
    int h, m, s;
};

struct data{
    int d, m, a;
};

struct compromisso{
    struct data;
    struct hora;
    char teto[100];
};