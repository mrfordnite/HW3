#include <stdio.h>
#include <iostream>
#include <iostream>
#include <time.h>
using namespace std;

const int QUIT = 5;

int main()
{
    int cash = 1000;    // the amount of money you have to invest
    int choice;
    int leftoverCash;
    // Initialize random percent variable and seed random function
    int randomPercent;
    srand(time(NULL));
    // include numbers of stocks for four companies (ints)
    int numGme = 0;
    int numAmc = 0;
    int numApha = 0;
    int numAapl = 0;
    // include starting stock prices for four companies (ints)
    int gmePrice = 120;
    int amcPrice = 50;
    int aphaPrice = 60;
    int aaplPrice = 200;


    // Build a portfolio
    cout << "Welcome to the stock market" << endl << endl;

    // do while loop buying stocks until money is all spent
    do
    {
        // Tell them how much money they have
        cout << "You have: $" << cash << " available." << endl << endl;

        // print a menu of stocks and get their choice
        cout << "Stock options (Enter number 1 - 4 to select):" << endl;
        cout << "1. GameStop ($GME): $" << gmePrice << " per share." << endl;
        cout << "2. AMC ($AMC): $" << amcPrice << " per share" << endl;
        cout << "3. Aphria Cannabis ($APHA): $" << aphaPrice << " per share" << endl;
        cout << "4. Apple ($AAPL): $" << aaplPrice << " per share" << endl;
        cout << "5. Quit buying stocks" << endl;
        cin >> choice;

        switch(choice){
            case 1:
                if(cash >= gmePrice){
                    cash -= gmePrice;
                    numGme++;
                    cout << "You have: $" << cash << " remaining." << endl;
                    cout << "You now have: " << numGme << " shares of GameStop!" << endl << endl;
                }
                else
                    cout << "Sorry! You don't have enough money." << endl << endl;
                break;
            case 2:
                if(cash >= amcPrice){
                    cash -= amcPrice;
                    numAmc++;
                    cout << "You have: $" << cash << " remaining." << endl;
                    cout << "You now have: " << numAmc << " shares of AMC!" << endl << endl;
                }
                else
                    cout << "Sorry! You don't have enough money." << endl << endl;
                break;
            case 3:
                if(cash >= aphaPrice){
                    cash -= aphaPrice;
                    numApha++;
                    cout << "You have: $" << cash << " remaining." << endl;
                    cout << "You now have: " << numApha << " shares of Aphria!" << endl << endl;
                }
                else
                    cout << "Sorry! You don't have enough money." << endl << endl;
                break;
            case 4:
                if(cash >= aaplPrice){
                    cash -= aaplPrice;
                    numAapl++;
                    cout << "You have: $" << cash << " remaining." << endl;
                    cout << "You now have: " << numAapl << " shares of Apple!" << endl << endl;
                }
                else
                    cout << "Sorry! You don't have enough money." << endl << endl;
                break;
            default: {}
        }
        // while the input is invalid
        while (!((choice >= 1 && choice <= 4) || choice == QUIT))
        {
            //Error Message
            cout << "Sorry! Your input was invalid." << endl; break;
        }

    } while (cash > 0 && choice != QUIT);

    leftoverCash = cash;

    //Print current portfolio
    cout << "You're all done buying stocks! Here is your current portfolio: " << endl << endl;
    cout << "You own: " << numGme << " shares of GameStop." << endl;
    cout << "You own: " << numAmc << " shares of AMC." << endl;
    cout << "You own: " << numApha << " shares of Aphria." << endl;
    cout << "You own: " << numAapl << " shares of Apple." << endl;
    cout << "You have: $" << leftoverCash << " leftover after buying stocks." << endl << endl;

    //Simulate stock changes
    for(int i = 1; i < 4; i++)
    {
        randomPercent = (rand() % 31) - 10;
        gmePrice *= ((randomPercent / 100.0) + 1);

        randomPercent = (rand() % 31) - 10;
        amcPrice *= ((randomPercent / 100.0) + 1);

        randomPercent = (rand() % 31) - 10;
        aphaPrice *= ((randomPercent / 100.0) + 1);

        randomPercent = (rand() % 31) - 10;
        aaplPrice *= ((randomPercent / 100.0) + 1);

        cout << "After year: " << i << " you own " << numGme << " shares of GameStop at $" << gmePrice << " per share." << endl;
        cout << "After year: " << i << " you own " << numAmc << " shares of AMC at $" << amcPrice << " per share." << endl;
        cout << "After year: " << i << " you own " << numApha << " shares of Aphria at $" << aphaPrice << " per share." << endl;
        cout << "After year: " << i << " you own " << numAapl << " shares of Apple at $" << aaplPrice << " per share." << endl;

        cash = leftoverCash + (numGme * gmePrice) + (numAmc * amcPrice) + (numApha * aphaPrice) + (numAapl * aaplPrice);
        cout << "After year: " << i << " your net worth is: $" << cash << endl << endl;
    }

    cout << "You have left the trading business with $" << cash << endl;

    return 0;
}