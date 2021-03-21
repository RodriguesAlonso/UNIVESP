/*function alert(){
    alert("Alert");
}
function confirm(){
    answer = confirm("Confirm")
    if (resposta == 1) {
        return true;
    } else {
        return false;
        
    }
}

function enter(){
    name1 = prompt("Name");
    return name1
}*/
function askAddress(){
    do {
        address = prompt("Enter your address:");    
        confirm = confirm("Your address are: " + address);
    } while (!confirm);
    alert("The page will be changed...");
    document.write("Your address is " +address+".");
}