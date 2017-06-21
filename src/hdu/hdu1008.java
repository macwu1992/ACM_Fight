package hdu;

import java.util.ArrayList;

public class hdu1008{

  public ArrayList<Integer> calcAllTime(ArrayList<ArrayList<Integer>> allFloorArray){
    ArrayList<Integer> timeArray = new ArrayList();

    for (ArrayList<Integer> floorArray : allFloorArray){
      timeArray.add(calcTime(floorArray));
    }

    return timeArray;
  }

  public int calcTime(ArrayList<Integer> floorArray){
    int currentFloor = 0;
    int gap = 0;
    int time = 0;

    for (int floor : floorArray) {
      gap = floor - currentFloor;

      if (gap > 0) time += gap * 6;
      if (gap < 0) time -= gap * 4;

      currentFloor = floor;
    }

    return time;
  }
}