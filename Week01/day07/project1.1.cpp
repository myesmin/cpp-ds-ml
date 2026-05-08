//ML Data Pipeline Analyzer

#include <iostream>
#include <string>


double calcMean(double scores[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }
    return sum/size;

}

double calcMax(double scores[], int size) {
    double max = scores[0];
    for (int i=1; i < size; i++) {
        if (scores[i] > max) {
            max = scores[i];
        }
    }
    return max;
}

double calcMin(double scores[], int size) {
    double min = scores[0];
    for (int i=1; i < size; i++) {
        if (scores[i] < min) {
            min = scores[i];
        }
    }
    return min;
}

double calcRange(double scores[], int size) {
    return calcMax(scores, size) - calcMin(scores, size);
}

int countAbove(double scores[], int size, double threshold) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (scores[i] > threshold) {
            count++;
        }
    }
    return count;
}

double calcPassRate(double scores[], int size, double threshold) {
    return (double)countAbove(scores, size, threshold) / size * 100;
}


void printReport(std::string label, double value) {
    std::cout << label << ": " << value << "%" << "\n";
}
void printReport(std::string label, int value){
    std::cout << label << ": " << value << "\n";   
}

int main(){
    double scores[10] = {85.5, 90.2, 78.3, 92.1, 88.0, 76.4, 95.0, 89.3, 84.7, 91.5};
    
    std::cout << "=== ML Model Performance Report ===" << "\n";
    printReport("Mean accuracy", calcMean(scores, 10));
    printReport("Best model", calcMax(scores, 10));
    printReport("Worst model", calcMin(scores, 10));
    printReport("Range", calcRange(scores, 10));
    printReport("Models above 80%", countAbove(scores, 10, 80.0));
    printReport("Pass rate", calcPassRate(scores, 10, 80.0));
    std::cout << "===================================" << "\n";
    
    return 0;
}



