#include <stdio.h>
#include <string.h>
#define size 10000 // Kich thuoc toi da cua file

void rComment(const char *input) {
    // Ham mo file de doc file
    // FILE *fopen(const char *filename, const char *mode);
    FILE *file = fopen(input, "r");
    char inp[size]; // Luu tru noi dung file
    char out[size]; // Luu tru noi dung da xu li
    int index = 0; // Vi tri mang
    // Ham doc noi dung file
    // Xu li va ghi vao output
    // size_t fread(void *ptr, size_t size, size_t count, FILE *stream);
    size_t read = fread(inp, 1, size, file);
    inp[read] = '\0'; // Ket thuc chuoi
    for (int i = 0; i < read; i++) {
        if (inp[i] == '/' && inp[i + 1] == '/') {
            i++; // Bo qua
        } 
        else if (inp[i] == '/' && inp[i + 1] == '*') {
            i++; // Bo qua
        } 
        else if (inp[i] == '*' && inp[i + 1] == '/') {
            i++; // Bo qua
        } 
        else {
            // Neu khong phai //, /*, */ thi them vao inp
            out[index++] = inp[i];
        }
    }
    out[index] = '\0';
    // Ham mo file de ghi noi dung vao file
    file = fopen(input, "w");
    if (file == NULL) {
        return;
    }
    // Ham ghi noi dung moi vao file
    // size_t fwrite(const void *ptr, size_t size, size_t count, FILE *stream);
    fwrite(out, 1, index, file);
    // Ham dong file
    // int fclose(FILE *stream);
    fclose(file);
}

int main() {
    const char *input = "test.c";
    rComment(input);
    return 0;
}