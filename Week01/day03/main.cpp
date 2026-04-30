#include <iostream>
/*
int main() {
    int age = 20;

    if (age >= 18) {
        std::cout << "You are an adult" << "\n";
    }
    return 0;
}
*/

/*
int main() {
    int age = 15;

    if (age >= 18) { 
        std::cout << "You are an adult" << "\n"; // runs if condition is TRUE
    } else {
        std::cout << "You are not an adult" << "\n"; // runs if condition is FALSE
    }
    return 0;
}

int main() {
    int score = 75;

    if (score >= 90) {
        std::cout << "Grade: A" << "\n";
    } else if (score >= 80) {
        std::cout << "Grade: B" << "\n";
    } else if (score >= 70) {
        std::cout << "Grade: C" << "\n"; 
    } else {
        std::cout << "Grade: F" << "\n";
    }
    return 0;
}


int main() {
    double accuracy = 0.75;

    if (accuracy >= 0.95) {
        std::cout << "Model is excellent" << "\n";
    } else if (accuracy >= 0.80) {
        std::cout << "Model is good" << "\n";
    } else if (accuracy >= 0.70) {
        std::cout << "Model needs imorovement" << "\n";
    } else {
        std::cout << "Model is poor" << "\n";
    }
    return 0;
}


int main() {
    int x = 10;

    if (x != 10) {
        std::cout << "x is not 10" << "\n";
    } else {
        std::cout << "x is 10" << "\n";
    }
    return 0;
}


int main() {
    int age = 20;
    bool hasID = true;

    if (age >=18 && hasID) {
        std::cout << "You can enter" << "\n";
    } else {
        std::cout << "You cannot enter" << "\n";
    }
    return 0;
}


int main() {
    int age = 15;
    bool hasPermission = true;

    if (age >= 18 || hasPermission) {
        std::cout << "You can enter" << "\n";
    } else {
        std::cout << "You cannot enter" << "\n";
    }
    return 0;
}


int main() {
    bool isRaining = false;

    if (!isRaining) {
        std::cout << "Go Outside!" << "\n";
    } else {
        std::cout << "Stay Inside!" << "\n";
    }
    return 0;
}


int main() {
    for (int i = 0; i < 5; i++) {
        std::cout << i << "\n";
    }
    return 0;
}


int main() {
    for (int i = 0; i < 5; i++) {
        std::cout << i * 2 << "\n";
    }
    return 0;
}


int main() {
    for (int i = 1; i < 6; i++) { // start at 1, stop before 6
        std::cout << i << "\n";
    }
    return 0;
}

int main() {
    for (int i = 1; i <= 5; i++) { // start at 1, stop at 5 (<=)
        std::cout << i << "\n";
    }
    return 0;
}


int main() {
    int i = 0;
    while (i < 5) {
        std::cout << i << "\n";
        i++;
    }
}



// Two types of loop
// for loop - when you know HOW many times
int main() {
    for (int i = 0; i < 5; i++) {
        std::cout << i << "\n";
    }
    return 0;
}

// while loop — when you DON'T know how many times
int main() {
    int i = 0;
    while (i < 5) {
        std::cout << i << "\n";
        i++;
    }
    return 0;
}


int main() {
    for (int i = 1; i <= 10; i++) {
        std::cout << i << "\n";
    }
    return 0;
}


int main() {
    int i = 1;
    while (i <= 10) {
        std::cout << i << "\n";
        i++;
    }
    return 0;
}


// running both inside one main() function 

int main() {

    //for loop
    for (int i = 1; i <= 10; i++) {
        std::cout << i << "\n";
    }

    std::cout << "---" << "\n"; //separator 

    //while loop
    int i = 1;
    while (i <= 10) {
        std::cout << i << "\n";
        i++;
    }

    return 0;
}


//BREAK 

int main() {
    for (int i = 0; i < 5; i++) {
        if (i == 3) {
            break;
        }
        std::cout << i << "\n";
    }
    return 0; 
}


//CONTINUE
int main() {
    for (int i = 0; i < 5; i++) {
        if (i == 3) {
            continue;
        }
        std::cout << i << "\n";
    }
    return 0;
}

//for ML
// break — stop training if loss is good enough
if (loss < 0.001) {
    break;
}

// continue — skip bad/corrupted data samples
if (isBadData) {
    continue;
}



//switch
// Using if/else
int main() {
    int day = 2;

    if (day == 1) {
        std::cout << "Monday" << "\n";
    } else if (day == 2) {
        std::cout << "Tuesday" << "\n";
    } else if (day == 3) {
        std::cout << "Wednesday" << "\n";
    } else {
        std::cout << "Other Days" << "\n";
    }
    return 0; 
}

//using switch - cleaner! 
int main() {
    int day = 2;
    switch (day) {
        case 1:
            std::cout << "Monday" << "\n";
            break; 
            
        case 2:
            std::cout << "Tuesday" << "\n";
            break;
        
        case 3:
            std::cout << "Wednesday" "\n";
            break;
        
        default:
            std::cout << "Other day" << "\n";    
    }
    return 0;
}

*/

int main() {
    int day = 2;

    switch (day) {
        case 1:
            std::cout << "Monday" << "\n";
        case 2:
            std::cout << "Tuesday" << "\n";
        case 3:
            std::cout << "Wednesday" << "\n";
        default:
            std::cout << "Other days" << "\n";
    }
    return 0;

}









