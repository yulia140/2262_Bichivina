#include <iostream>

int main() {
    { int x=1, y=2, z=0;
      x=x+1;
      z=z+2*x+3*y;
      y=y+1;
      std::cout << "Base:     " << x << " " << y << " " << z << "\n"; }
      
    { int x=1, y=2, z=0;
      x=x+1, z=z+2*x+3*y, y=y+1;
      std::cout << "Variant 1: " << x << " " << y << " " << z << "\n"; }
      

    { int x=1, y=2, z=0;
      z=z+2*(++x)+3*y, ++y;
      std::cout << "Variant 2: " << x << " " << y << " " << z << "\n"; }
      
    
    { int x=1, y=2, z=0;
      z=z+2*(x+=1)+3*y, y+=1;
      std::cout << "Variant 3: " << x << " " << y << " " << z << "\n"; }
      
    return 0;
}