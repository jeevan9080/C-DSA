import java.util.*; 
public class Longest_work_slot {     
  static char findLongestSingleSlot(List<List<Integer>>leaveTimes){
      int prev = 0, duration = 0, maxDuration = 0,id=0;
      
      for(int i=0;i<leaveTimes.size();i++){             
          duration = leaveTimes.get(i).get(1) - prev;            
          prev = leaveTimes.get(i).get(1);             
          if(duration>maxDuration){                 
              maxDuration = duration;                 
              id = leaveTimes.get(i).get(0);             
              
          }         
          
      }         
    return (char)(id+97);     
      
  }          
    public static void main(String[] args) { 	   
        ArrayList<List<Integer>> leaveTimes = new ArrayList<List<Integer>>();        
        leaveTimes.add(Arrays.asList(0,2));        
        leaveTimes.add(Arrays.asList(1,3));        
        leaveTimes.add(Arrays.asList(0,7)); 		
        System.out.println(findLongestSingleSlot(leaveTimes)); 	} } 