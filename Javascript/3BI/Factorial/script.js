function fat(){
    var n = document.getElementById("num").value;
    if(n<100){
        var x = 1;
        for(var i=1; i<=n; i++){
            x = x*i;
        }
        document.getElementById("fatresult").innerHTML = n + "! = " + x;
    }
    else{
        alert("Numero massimo calcolabile: 100");
    }
}

function fats(){
    var n = document.getElementById("num").value;
    var add = document.getElementById("results");
    if(n<100){
        var x = 1;
        for(var i=1; i<=n; i++){
            x = x*i;
            var newSpan = document.createElement("span");
            newSpan.innerHTML = i + "! = " + x;
            add.appendChild(newSpan);
            var newBr = document.createElement("br");
            add.appendChild(newBr);
        }
    }
    else{
        alert("Numero massimo calcolabile: 100");
    }
}