const decreaseTen = document.getElementById("decreaseTen")
const decreaseBtn = document.getElementById("decreaseBtn");
const resetBtn = document.getElementById("resetBtn");
const increaseBtn = document.getElementById("increaseBtn");
const countLabel = document.getElementById("countLabel");
const increaseTen = document.getElementById("increaseTen");
let count = 0;

increaseBtn.onclick = function(){
    count ++;
    countLabel.textContent = count;
}

increaseTen.onclick = function(){
    count += 10;
    countLabel.textContent = count;
}

decreaseBtn.onclick = function(){
    count --;
    countLabel.textContent = count;
}

decreaseTen.onclick = function(){
    count -= 10;
    countLabel.textContent = count;
}

resetBtn.onclick = function(){
    count = 0;
    countLabel.textContent = count;
}