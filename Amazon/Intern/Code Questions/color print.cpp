Define a class ColorPoint that uses the Point and adds acolor. 
Write the class and the equals method：

answer：
public class ColorPoint extends Point
{
    private PointthePoint;
    private ColortheColor;
    publicColorPoint(Point aPoint,Color aColor){
        this.thePoint= aPoint;
        this.theColor= aColor;
}
    public booleanequals(Object other){
        //check null
        if(other ==null){
            return false;
        }
        // could be:if (other instanceof ColorPoint)
       if(other.getClass()!= this.getClass()){
            returnfalse;
        }
      //cast toColorPoint

        ColorPoint=(ColorPoint)other;
        //assume Pointhas equals method      
        
       if(!other.thePoint.equals(this.thePoint)){
            returnfalse;
        }
        //assume thecolor have equal method, check color
       if(!other.thePoint.equals(this.theColor)){
            returnfalse;
        }
        return true;
        
    }
   
}