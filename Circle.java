package shape;

public class Circle extends GeometricObject{
	double radius = 10;
	
	public Circle(){
		setRadius(this.radius);
		System.out.println(getRadius());
		System.out.println(getDiameter());
		System.out.println(getPerimeter());
		System.out.println(getArea());
        	System.out.println(this.color);
        	System.out.println(this.filled);
	}
	public Circle(double radius){
		setRadius(radius);
		System.out.println(getRadius());
		System.out.println(getDiameter());
		System.out.println(getPerimeter());
		System.out.println(getArea());
        	System.out.println(this.color);
        	System.out.println(this.filled);
	}
	public Circle(double radius, String color, boolean filled){
		setRadius(radius);
		System.out.println(getRadius());
		System.out.println(getDiameter());
		System.out.println(getPerimeter());
		System.out.println(getArea());
		this.color = color;
        	System.out.println(this.color);
        	this.filled = filled;
        	System.out.println(this.filled);
	}
	
	public double getRadius(){
		return this.radius;
	}
	
	public void setRadius(double radius){
		this.radius = radius;
	}
	
	public double getDiameter(){
		return 2*(this.radius);
	}
	public double getPerimeter(){
	double perim = 2* 3.14 * this.radius;
		return perim;
	}
	public double getArea(){
	double area = 3.14 * this.radius * this.radius;
		return area;
	}
}
