package hdu;

import org.junit.Test;

import java.util.ArrayList;

/**
 * hdu1008 Tester.
 *
 * @author <Authors name>
 * @since <pre>06/19/2017</pre>
 * @version 1.0
 */
public class hdu1008Test {
    private static hdu1008 test = new hdu1008();

    @Test
    public void calcAllTime(){
        ArrayList<ArrayList<Integer>> allFloorArray = new ArrayList<ArrayList<Integer>>();

        ArrayList<Integer> floorList1 = new ArrayList<Integer>();
        floorList1.add(1);
        floorList1.add(2);

        ArrayList<Integer> floorList2 = new ArrayList<Integer>();
        floorList2.add(3);
        floorList2.add(2);
        floorList2.add(3);
        floorList2.add(1);

        allFloorArray.add(floorList1);
        allFloorArray.add(floorList2);

        test.calcAllTime(allFloorArray);
    }
}
