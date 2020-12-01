function calculate(){
    let good_answers = 0;
    for(let value of document.getElementById('new').elements){
        if(value.checked && value.id === 'q1a1') good_answers++;
    }
    for(let value of document.getElementById('running').elements){
        if(value.checked && value.id === 'q2a1') good_answers++;
    }
    for(let value of document.getElementById('waiting').elements){
        if(value.checked && value.id === 'q3a3') good_answers++;
    }
    for(let value of document.getElementById('terminated').elements){
        if(value.checked && value.id === 'q4a3') good_answers++;
    }
    let message;
    switch(good_answers){
        case 0:
            message = "Giudizio pessimo.";
            break;
        case 1:
            message = "Giudizio insufficiente.";
            break;
        case 2:
            message = "Giudizio sufficiente.";
            break;
        case 3:
            message = "Giudizio distinto.";
            break;
        case 4:
            message = "Giudizio ottimo.";
            break;
    }
    alert(message);
}