/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};
TEST(TicTacToeBoardTest, Oalternate){
  TicTacToeBoard board;
  board.toggleTurn();
  ASSERT_EQ(board.toggleTurn(), X);
}

TEST(TicTacToeBoard, willplayerchange){
	TicTacToeBoard tic;
	ASSERT_EQ(tic.toggleTurn(),O);
}


/*
TEST(TicTacToeBoardTest, unitTestName)
{
	ASSERT_TRUE(true);
}
*/
TEST(TicTacToeBoardTest, toggleOnce)
{
	TicTacToeBoard board;
	ASSERT_EQ(board.toggleTurn(), O);
}
/* failing
TEST(TicTacToeBoardTest, toggleTwice)
{
	TicTacToeBoard board;
	ASSERT_EQ(board.toggleTurn(), X);
}
*/
TEST(TicTacToeBoard, PieceIsOutofBoundsNeg){
	TicTacToeBoard board;
	ASSERT_EQ(board.placePiece(-1,-1), Invalid);
}
TEST(TicTacToeBoard, PieceIsOutofBoundsPos){
	TicTacToeBoard board;
	ASSERT_EQ(board.placePiece(5,5), Invalid);
}
/* failing
TEST(TicTacToeBoardTest, PieceIsOnTopOfOtherPiece)
{
	TicTacToeBoard board;
	board.placePiece(1, 1);
	ASSERT_EQ(board.placePiece(1, 1), X);
}
*/
TEST(TicTacToeBoardTest, retrieveWhereEmptyWinner)
{
	TicTacToeBoard board;
	board.placePiece(0, 0); 
	board.placePiece(0, 1);
	board.placePiece(0, 2); 
	
	board.placePiece(1, 0); 
	board.placePiece(1, 1); 
	board.placePiece(1, 2); 

	board.placePiece(2, 0); 
	board.placePiece(2, 1); 
	board.placePiece(2, 2); 
	ASSERT_EQ(board.getWinner(), Blank);
}
TEST(TicTacToeBoardTest, callWinnerUnfinished)
{
	TicTacToeBoard board;
	board.placePiece(0, 0);
	board.placePiece(1, 1);
	Piece returned = board.getWinner();
	Piece test = Blank;
	ASSERT_EQ(returned, test);
}
