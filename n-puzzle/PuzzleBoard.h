//
//  PuzzleBoard.h
//  n-puzzle
//
//  Created by Jingwei MIAO on 9/27/14.
//  Copyright (c) 2014 Jingwei MIAO. All rights reserved.
//

#ifndef __n_puzzle__PuzzleBoard__
#define __n_puzzle__PuzzleBoard__

#include <iostream>

#define BOARD_SIZE_LIMIT 5

class PuzzleBoard {
public:
    PuzzleBoard(size_t size, uint64_t data);
private:
    size_t m_size;
    uint64_t m_data;
    PuzzleBoard* m_prev;
    PuzzleBoard* m_next;
    PuzzleBoard* m_child;
    
};

#endif /* defined(__n_puzzle__PuzzleBoard__) */
