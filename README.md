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
- [Lode's Computer Graphics Tutorial](https://lodev.org/cgtutor/raycasting.html)
- [Black Book DOOM](https://fabiensanglard.net/b/gebbdoom.pdf)
- [ID Software](https://github.com/id-software/doom?tab=readme-ov-file)

