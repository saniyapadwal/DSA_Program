#include<stdio.h>

 int q[ 20 ], front = -1, rear = -1, vis[ 20 ];
 int a[20][20];

 int delete();
 void add ( int item );
  
 void bfs( int s, int n );

void main()
{
    int n, i, s,j;

	printf( "Enter the number of vertices:" );
    scanf( "%d", &n );

    for ( i = 1;i <= n;i++ )
	{
	    for ( j = 1;j <= n;j++ )
		{
		    printf( "Enter 1 if %d has a node with %d Else 0 ", i, j );
		    scanf( "%d", &a[ i ][ j ] );
		}
	}

    printf( "The adjacency matrix is\n" );
    for ( i = 1;i <= n;i++ )
	{
	    for ( j = 1;j <= n;j++ )
		{
		    printf( " %d", a[ i ][ j ] );
		}
	    printf( "\n" );
	}

	    for ( i = 1;i <= n;i++ )
		vis[ i ] = 0;

	    printf( "Enter the sources vertex :" );
	    scanf( "%d", &s );
		bfs( s, n );
}

void bfs( int s, int n )
{
    int p, i;
	add( s );
	vis[ s ] = 1;

    p = delete();

    if ( p != 0 )
	printf( " %d", p );

    while ( p != 0 )
	{
	    for ( i = 1;i <= n;i++ )
		if ( ( a[ p ][ i ] != 0 ) && ( vis[ i ] == 0 ) )
		    {
			add( i );

			vis[ i ] = 1;
		    }

	    p = delete();

	    if ( p != 0 )
		printf( " %d ", p );
	}

    for ( i = 1;i <= n;i++ )
		if ( vis[ i ] == 0 )
	    	bfs( i, n );
}

   void add( int item )
    {
	if ( rear == 19 )
	    printf( "Queue is full" );
	else
	    {
		if ( rear == -1 )
		    {
			q[ ++rear ] = item;
			front++;
		    }
		else
		    q[ ++rear ] = item;
	    }
    }

    int delete()
    {
     int k;

     if ( ( front > rear ) || ( front == -1 ) )
		return ( 0 );
      else
	{
	    k = q[ front++ ];
	    return ( k );
	}
     }