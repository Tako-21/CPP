class Point {

public:
	
	Point(int x, int y);	
	int	x;
	int	y;
};

Point::Point(int x, int y) :
x(x),
y(y)
{}

class ObjetGraphique
{
  public:
    ObjetGraphique(int x, int y, int couleur, int epaisseur);

  private:
    Point *pointBase_;
    int   couleur_;
    int   epaisseur_;
};

ObjetGraphique::ObjetGraphique(int x, int y, int couleur, int epaisseur) :
  couleur_(couleur),
  epaisseur_(epaisseur)
{
  pointBase_=new Point(x,y);
}

int	main( void )
{
	ObjetGraphique	obj(1, 1, 1, 1);
}
