#pragma once

#include "Board.h"
#include "AbstractView.h"

class AbstractController {
public:    
    // Runs the game and synchronizes calls between the model and the view as necessary.    
    virtual void prepare() = 0;
    virtual void refreshView() = 0;
    virtual void reshapeView(int newWidth, int newHeight) = 0;    
    virtual void normalKeyPressed(unsigned char key) = 0;
    virtual void specialKeyPressed(int key) = 0;    
    virtual void cleanUp() = 0;
protected:
    Board board;
    AbstractView * view;
};