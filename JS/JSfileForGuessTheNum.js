document.write("Hello welcome from js<br>");

var cnum = 33;

//random gives a num between 0 and 1 
//that is why 100x done

var unum = prompt("enter your guess");

while (unum != cnum) {

    if (unum > cnum) {
        document.write("Guess smaller <br>")
        unum = prompt("Guess again");
    }

    else {
        document.write("Guess bigger number <br>");
        unum = prompt("Guess again");
    }
}

if (unum == cnum) {
    document.write("Woo Hoo your guess ", unum, " is right", "<br>");
}

document.write("Thanks For playing from js <br>");
document.getElementById('abcd').innerHTML = "Good bye<br>";