### DOOM background 
- ray casting is not just used by DOOM 1993, it was just the first and most popular use case. Disclaimer for the upcoming content,
ID Software was limited by the software developing state in the early 90s. For more information, please check out this awesome book. It was my first interaction with reverse engineering and c programming in generall. 
[Black Book - Fabien Sanglard](https://fabiensanglard.net/gebbdoom/)
- Also thank you ID Software for publishing the source code just few years after realising DOOM.
[DOOM Repo](https://github.com/id-software/doom?tab=readme-ov-file)
#### 3D structure
- ID Software used 2.5D for representing the 3D effect of DOOM. DOOM uses a 2D map with vertices (A, B &rarr; coordinates in a 2D diagram)witch are connected with lines ($\vec{AB}$), SIDEDEFS (Portal = 2 SIDEDEFS, Wall = 1 SIDEDEFS). Linevectors connecting to eachother are creating SECTORS (ABCD) &rarr; while each SECTORS defines Floor + Ceiling height, textures, light etc.
### Rendering
- All SECTORS are saved in the BSP (Binary Space Partition Tree) with all other data about the rendering like player position, field of view (FOV) etc. and the engine draws whats in the field of the view of the player (also in a BSP Tree), until the whole screen is horizontaly and verticly drawn. Since there is no overdrawing, the screen gets shared when the window is fully drawn &rarr; really efficient
#### BSP
- Key idea: we divide an option in two sub Partitions before theire are rendered. The sectors are devided into subsectors where an algorithmic scans the sice of the different subsector lines and decides which ones are splittet. Those information are saved within the WAD files (not build at run time &rarr; because there was no need). This concept was in conflict with the classic brute force, I try to show whyBSP at this time was superior
```C 
void R_RenderBSPNode (int bspnum) { // bspnum rootnote
    node_t *bsp;
    int side;
    if (bspnum & NF_SUBSECTOR) { 
        if (bspnum == -1) R_Subsector (0);
            else {  
                R_Subsector (bspnum&(~NF_SUBSECTOR));
                return;
        }
    }
    bsp = &nodes[bspnum];
    side = R_PointOnSide (viewx, viewy, bsp); // is the player on the right/left side 
    R_RenderBSPNode (bsp->children[side]); // is the backside of the node could be visible (so all notes that werent choosed, it travels back to render the entire window) -> every backside of every code will be checked
    if (R_CheckBBox (bsp->bbox[side^1]})) R_RenderBSPNode (bsp->children[side^1]);
}
```


#### FOV
- the FOV of the player is limited to 90°. By using a PROJECTION PLANE which is the line that is visible for the player and has the PROJECTION DISTANCE. The PROJECTION DISTANCE is calculated by the basic formula $tan(\alpha) * \alpha = h$ &rarr; 
$$
projection = \frac{center x}{tan(\frac{FOV}{2})} \rarr tan(45) = 1
$$
```C
#define FRACBITS 16
#define FRACUNIT (1<<FRACBITS)

void R_ExecuteSetViewSize (void) {
    centery = viewheight/2;
    centerx = viewwidth/2;
    centerxfrac = centerx<<FRACBITS;
    centeryfrac = centery<<FRACBITS;
    projection = centerxfrac; //the tan formula
}

```
- 

