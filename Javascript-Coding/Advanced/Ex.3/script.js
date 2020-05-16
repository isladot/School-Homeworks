var arr1 = ["leone", "tigre", "squalo", "fenicottero", "balena"];
var arr2 = ["beve", "gioca", "guida", "dorme", "mangia"];
var arr3 = ["triste", "spensierato", "felice", "arrabbiato", "annoiato"];
var arr4 = ["la pasta", "con il cucchiaio", "il furgone", "sul razzo", "nel sottomarino"];

function haiku(){
    var text = document.getElementById("texthere");
    var r1 = Math.floor(Math.random() * 5);
    var r2 = Math.floor(Math.random() * 5);
    var r3 = Math.floor(Math.random() * 5);
    var r4 = Math.floor(Math.random() * 5);
    text.innerHTML = arr1[r1] + " " + arr2[r2] + " " + arr3[r3] + " " + arr4[r4];
}