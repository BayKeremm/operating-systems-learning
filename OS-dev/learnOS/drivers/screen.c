//#include "screen.h"

///*
//Print a char on the screen at col, row, or at cursor position
//*/
//void print_char(char character, int col, int row, char attribute_byte){
    //// Create a byte (char) pointer to the start of video memory
    //unsigned char * vidmem = (unsigned char * ) VIDEO_ADDRESS;

    //// If attribute bute is zero, assume the default style
    //if(!attribute_byte){
        //attribute_byte = WHITE_ON_BLACK;
    //}

    //// Get the video memory offset for the screen location
    //int offset;
    //// If col and row are non-negative, use them for offset
    //if(col >= 0 && row >= 0){
        //offset = get_screen_offset(col, row);
    //// Otherwise, use the current cursor position
    //}else{
        //offset = get_cursor();
    //}

    //// If we see a newline character, set the offset to the end of 
    //// current row, so it wil be advanced to the first col of 
    //// the next row
    //if(character == '\n'){
        //int rows = offset / (2*MAX_COLS);
        //offset = get_screen_offset(79, rows);
    
    //// Otherwise, write the character and its attribute byte to 
    //// video memory at our calculated offset
    //}else{
        //vidmem[offset] = character;
        //vidmem[offset+1] = attribute_byte;
    //}

    //// Update the offset to the next character cell, which is
    //// two bytes ahead of the current cell
    //offset +=2;
    //// Make scrolling adjustment, for when we reach the bottom
    //// of the screen
    //offset = handle_scrolling_offset(offset);
    //// Update the cursor position on the screen device
    //set_cursor(offset);
    
//}