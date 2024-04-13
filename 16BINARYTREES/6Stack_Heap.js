// Stack memory (primitive)
let myYoutubeName = "sunainavirdidotcom"
let anotherName = myYoutubeName
anotherName = "chaiaurcode"
console.log(myYoutubeName);
console.log(anotherName); 


// Heap memory(non-primitive)
// heap se hume refernces milta h
let userOne = {
    email: "user@google.com",
    upi: "user@upi"
}
let  userTwo = userOne

userTwo.email = "newUser@gmail.com"

console.log("User One Email : ", userOne.email)
console.log("User Two Email : ", userTwo.email)