

// Author: Shazebs
// Date:   3/29/21

// import libraries
import java.lang.String;
import java.lang.StringBuilder;

public class TwitchQuestion {
    public static void main(String[] args) {

        int[] picks = {100, 157, 35, 7, 17};
        LotteryTicket object = new LotteryTicket(picks);
        System.out.print(object);

    }
}

/*
class LotteryTicket

*/


class LotteryTicket {

    //static variables:
    public static int nextTicketNumber = 100000;

    //instance variables:
    int ticketNumber; //stores 6-digit ID number
    int [] picks; //an array that stores the numbers picked for this LotteryTicket

    //Constructor
    public LotteryTicket(int []picks){
        this.picks = picks;
        ticketNumber = nextTicketNumber;
        nextTicketNumber++;
    }

    public int getTicketNumber(){
        return ticketNumber;
    }

    //creates and returns a copy of the picks array:
    public int[] getPicks(){
        int index = picks.length;
        int [] picksCopy;

        picksCopy = new int [index];

        for(int i =0;i<picks.length;i++){
            picksCopy[i] = picks[i];
        }

        return picksCopy;
    }

    public static StringBuilder printArrayHorizontal(int[] array) {
        StringBuilder string = new StringBuilder();

        for (int i = 0; i < array.length; i++) {
            string.append(array[i] + " ");
        }
        return string;
    }

    //toString:
    @Override
    public String toString(){
        String lotteryTicketString;
        
        return String.format(
                "toString() Output: \n%s\n%s\n",
                ("Ticket number: " + ticketNumber),
                "Picks: " + printArrayHorizontal(picks)
        );
    }


}//end of class
