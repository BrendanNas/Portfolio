const myText = document.getElementById("myText");
const mySubmit = document.getElementById("mySubmit");
const resultElement = document.getElementById("resultElement");
let age;

mySubmit.onclick = function(){

    age = myText.value;
    age = Number(age);

    if(age >= 90){
        resultElement.textContent = "Aren't you supposed to be dead?"
    }
    else if(age >= 50){
        resultElement.textContent = "You're a bit old for this";
    }
    else if(age >= 18){
        resultElement.textContent = "You are old enough to be here";
    }else if(age <= 17){
        resultElement.textContent = "You are not old enough to enter";
    }
}