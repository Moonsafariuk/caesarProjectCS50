function rot13(str) { // LBH QVQ VG!
  
 var stringAsArray = str.split('');
 var arrayAsUTF = [];
 var altertedUTFArray = [];
 var returnString = '';  
  //caps between 65 - 90 space=32
 
  //conversion String.fromCharCode(((code - 65 + amount) % 26) + 65);
  
  for(var i = 0 ; i < stringAsArray.length ; i++){
    arrayAsUTF.push(stringAsArray[i].charCodeAt());
    
    if(arrayAsUTF[i]  >= 65 && arrayAsUTF[i] <=90 ){  
    
      returnString += String.fromCharCode((( arrayAsUTF[i] - 65 + 13) % 26) +65);
    
    } else {
      
      returnString += String.fromCharCode(arrayAsUTF[i]);
      
    }

    
  }  
  return returnString;
}

// Change the inputs below to test
rot13("SERR PBQR PNZC");
