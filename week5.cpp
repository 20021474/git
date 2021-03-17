//Cao tuyen 20021474
//bai 10

int** inputMatrix(int nRows, int nCols)
{
    int **matrix= new int *[nRows];
    for (int j=0; j<nRows; j++) matrix[j] = new int [nCols];
    for (int i=0; i<nRows; i++)
        for (int j=0; j<nCols; j++) cin >> matrix[i][j];
    return matrix;
};
void printMatrix(int** matrix, int nRows, int nCols)
{
        for (int i=0; i<nRows; i++)
        {
            for (int j=0; j<nCols; j++) cout <<  matrix[i][j] << " ";
            cout << endl;
        }
}

//bai 11

int** getImage (int nRows, int nCols)
{
    int **matrix =new int *[nRows];
    for (int j=0; j< nRows; j++) matrix[j] = new int [nCols];
    for (int i=0; i<nRows; i++)
        for (int j=0; j<nCols; j++) cin >> matrix[i][j];
        return matrix;
}
void fillImage (int** image, int nRows, int nCols, int threshold)
{
    for(int i =0;i<nRows;i++)
        for(int j = 0 ;j < nCols;j++)
            if(image[i][j]<threshold) image[i][j]=0;
}
void print (int** image, int nRows, int nCols)
{
    for (int i=0; i<nRows; i++)
        {
            for (int j=0; j<nCols; j++) cout <<  image[i][j] << " ";
            cout << endl;
        }
}
