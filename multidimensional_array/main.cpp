//#include <iostream>
#import <iostream>

int main(void) {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6},
    };

    
    for (int line = 0; line < 2; line++) {
        for (int column = 0; column < 3; column++) {
            //std::cout << "a[" << line << "][" << column << "] =" << matrix[line][column] << "\n";
            std::cout << std::format("a[{}][{} = {}\n", line, column, matrix[line][column]) ;
        }
    }



    return 0;
}
