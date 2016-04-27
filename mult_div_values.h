struct mult_div_values{
int mult;
float div;
}
bool is_valid_dimensions(char*m, char*n);
mult_div_values** create_table(int a, int b);
void set_mult_values(mult_div_values **, int a, int b);
void set_div_values(mult_div_values **, int a, int b);
void delete_table(mlt_div_values **table, int m);
