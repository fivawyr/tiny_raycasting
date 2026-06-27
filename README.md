### Overview

### Controls
| Key / Input       | Action |
| ----------- | ----------- |
| `ENTER`     | Create a new circle       |
| `ESC`   | Quit    |

### Install & run
```bash
brew install raylib
gcc main.c -o shapes -lraylib -lm
```
```bash
git clone https://github.com/raysan5/raylib.git
cd raylib/src
make PLATFORM=PLATFORM_DESKTOP
sudo make install
```
```bash
git clone https://github.com/fivawyr/tiny_circles.git
cd # where ever you clone this repo
clang code.c -I/opt/homebrew/include -L/opt/homebrew/lib -lraylib -lm -g -o shapes 
# Run it
./shapes
```
![Demo](resources/demo.png)
> Screenshot from the application 
### Resources 
- [Raylib Cheatsheet](https://www.raylib.com/cheatsheet/cheatsheet.html)
- [Raylib GitHub](https://github.com/raysan5/raylib)
- [GreeksForGreek](https://www.geeksforgeeks.org/c/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)
- I used the header file alot for checking parameters/types etc., you can find the file `cd /usr/include` or `echo | clang -E -Wp,-v -`
