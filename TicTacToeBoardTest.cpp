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
	ASSERT_EQ(board.toggleTurn(), 1);
}
TEST(TicTacToeBoardTest, toggleTwice)
{
	TicTacToeBoard board;
	ASSERT_EQ(board.toggleTurn(), 1);
}