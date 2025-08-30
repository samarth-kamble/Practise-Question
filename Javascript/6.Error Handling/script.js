
//  TryCatch
try {
    // Simulating a function that might throw an error
    function riskyFunction() {
        throw new Error("Something went wrong!");
    }

    // Calling the risky function
    riskyFunction();
    console.log("Function executed successfully.");
} catch (error) {
    console.error("An error occurred:", error);
}