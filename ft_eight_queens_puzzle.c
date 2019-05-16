int **create_board(void)
{
	int board [4][4];
	int col;
	int row;
	
	col = 0;
	while (col < 4)
	{
		row = 0;
		while (row < 4)
		{
			board[col][row] = 0;
			row++;
		}
		col++;
	}

int fit(int board[][], int row, int col)
{
	int i;
	int j;
	int k;
	i = col;
	k = 1;
 	while (i < 4)
	{
		if (boad[i][row] == 8;
			return(-1);
		i++;
	}
	while (j < 4)
	{
		if (board[col][j] == 8;
			return(-1);
		j++;
	}
	while((((col + k) < 4) && ((row + k) < 4)))
	{
		if ((board[col + k][row + k] == 8) || (board[col - k][row - k] == 8) || (board[col - k][row + k] == 8) || (board[col + k][row - k] == 8))
			return (-1);
		k++;
	}

		
			
	
			

	

