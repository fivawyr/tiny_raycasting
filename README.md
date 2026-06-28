### Overview

### Controls
| Key / Input       | Action |
| ----------- | ----------- |
| `ENTER`     | Create a new circle       |
| `ESC`   | Quit    |

### Install & run
```bash
brew install SDL2
```
### Compile & run it
```bash
git clone https://github.com/fivawyr/tiny_circles.git
cd in your folder
g++ -Wall -o game main.cpp $(sdl2-config --cflags --libs)
# Run it
./game
```
![Demo](resources/demo.png)
> Screenshot from the application 
### Resources 
- [Lode's Computer Graphics Tutorial](https://lodev.org/cgtutor/raycasting.html)
- [Black Book DOOM](https://fabiensanglard.net/b/gebbdoom.pdf)
- [ID Software](https://github.com/id-software/doom?tab=readme-ov-file)

