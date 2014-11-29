void erasedb();
int modcheck();
int savefile();
int writefile(char *fname, int r0, int c0, int rn, int cn);
void write_fd(register FILE *f, int r0, int c0, int rn, int cn);
void write_cells(register FILE *f, int r0, int c0, int rn, int cn, int dr, int dc);
void write_marks(register FILE *f);

int readfile(char *fname, int eraseflg);
char * findhome(char *path);
int backup_file(char *path);
FILE * openfile(char *fname, int *rpid, int *rfd);
void closefile(FILE *f, int pid, int rfd);
void print_options(FILE *f);

int import_csv(char * fname, char d);

void do_export();
void export_delim(char * fname, char coldelim, int r0, int c0, int rn, int cn);
