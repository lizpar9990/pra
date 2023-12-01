typedef struct ochki{
	char color [40];
	char country [40];
	int price;
	int size;
} ochki;
void create (ochki**arr, int*n);
void read (ochki**arr, int*n);
void write (ochki*arr, int n);
void search (ochki*arr, int n);
