#ifndef PRISONETSDILLEMA_YOURSTRATEGY_H
#define PRISONETSDILLEMA_YOURSTRATEGY_H

/*
 * Welcome to the game of prisoner's dilemma.
 * You must implement a strategy which will play against other strategies.
 * In this case you will play against a randomizer strategy, and you should try to maximize your score.
 *
 * Here are the rules of the game:
 * You are playing a couple of rounds of the game (the number of rounds is unknown to you, but you have records about past rounds).
 * In each round you and your opponents have two choices : you can cooperate or not.
 * If both of you cooperate then you will get 3 points each.
 * If both of you don't cooperate then you will get 1 points each.
 * Otherwise, one who will not cooperate will get 5 points (and second player will get 5 points).
 */

class yourStrategy {
private:
    // declare other
public:
    yourStrategy(){
        // implement this or leave it blank
    };
    /// IMPORTANT!!! If you allocated memory locally, please deallocate it in a destructor.
    ~yourStrategy(){
        // implement this or leave it blank
    };

    /*
     * method answer
     * int n : number of rounds has been played before
     * bool *you: array of n elements. Your past record.
     * bool *opponent: array of n elements. Your opponent's past record;
     *
     * return : true if you cooperate, false otherwise.
     */
    bool answer(bool *you, bool *opponent, int n) {
        /// you fill this in
        return {};
    };
};


#endif //PRISONETSDILLEMA_YOURSTRATEGY_H
