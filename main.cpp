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

    // variable initializations
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
        while (!(choice >= 1 && choice <= 4))
        {
            //Error Message
            cout << "Sorry! Your input was invalid." << endl;

            //Print Menu
            cout << "Stock options (Enter number 1 - 4 to select):" << endl;
            cout << "1. GameStop ($GME): $" << gmePrice << " per share." << endl;
            cout << "2. AMC ($AMC): $" << amcPrice << " per share" << endl;
            cout << "3. Aphria Cannabis ($APHA): $" << aphaPrice << " per share" << endl;
            cout << "4. Apple ($AAPL): $" << aaplPrice << " per share" << endl;
            cout << "5. Quit buying stocks" << endl;
            cin >> choice;

            //Get choice
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
        }

        // purchase a share of the appropriate stock

    } while (cash > 0 && choice != QUIT);

    cout << "You have left the trading business with $" << cash << endl;

    cout << "\n\nThis is your portfolio: " << endl;

    // Now simulate staying in the market for 3 years
    // first, seed the random number generator so it is different every run
    // srandom(time(NULL));   // leave this commented out so you can reproduce your runs

    //for loop over the 3 years
    {
        //calculate percent gain for each stock
        //use random() to generate a number between 0...30, subtract 10 to set gain to -10...+20

        //Now print out full portfolio

    }

    return 0;
}