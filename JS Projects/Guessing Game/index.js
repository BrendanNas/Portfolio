const minNum = 1;
const maxNum = 100;
const answer = Math.floor(Math.random() * (maxNum - minNum + 1));

let attempts = 0;
let remaining_attempts = 10;
let guess;
let running = true;

while(running){
    guess = window.prompt( `Guess a number between ${minNum} through ${maxNum}`);
    guess = Number(guess);
    if(isNaN(guess)){
        window.alert(`Please enter a number`);
    }else if(guess < minNum || guess > maxNum){
        window.alert(`Please enter a valid number`);
    }
    else{
        attempts++;
        if(guess < answer){
            remaining_attempts--;
            window.alert(`Too Low, You have ${remaining_attempts} attempt(s) left`);
        }else if(guess > answer){
            remaining_attempts--;
            window.alert(`Too High, You have ${remaining_attempts} attempt(s) left`);
        }
        else{
            window.alert(`Congrats, The Answer is ${answer} .\n It took you ${attempts} attempts.\n Thanks for playing :)`);
            running = false;
        }if(remaining_attempts == 0){
            window.alert(`Game Over. \n the answer was ${answer}`);
            running = false;
        }
    }
}