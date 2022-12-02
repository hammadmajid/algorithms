[![CircleCI](https://dl.circleci.com/status-badge/img/gh/hammadmajid/greedy-algorithm/tree/master.svg?style=svg)](https://dl.circleci.com/status-badge/redirect/gh/hammadmajid/greedy-algorithm/tree/master) [![Deploy to GitHub Pages](https://github.com/hammadmajid/greedy-algorithm/actions/workflows/jekyll-gh-pages.yml/badge.svg)](https://github.com/hammadmajid/greedy-algorithm/actions/workflows/jekyll-gh-pages.yml)

# Greedy Algorithm

A greedy algorithm is an approach for solving a problem by selecting the best option available at the moment. It doesn't worry whether the current best result will bring the overall optimal result.

## Problem

When making change, odds are you want to minimize the number of coins you’re dispensing for each customer, lest you run out (or annoy the customer!).

Suppose that a cashier owes a customer some change and in that cashier’s drawer are quarters (25¢), dimes (10¢), nickels (5¢), and pennies (1¢). The problem to be solved is to decide which coins and how many of each to hand to the customer. Think of a “greedy” cashier as one who wants to take the biggest bite out of this problem as possible with each coin they take out of the drawer. 

For instance, if some customer is owed 41¢, the biggest first (i.e., best immediate, or local) bite that can be taken is 25¢. (That bite is “best” inasmuch as it gets us closer to 0¢ faster than any other coin would.) Note that a bite of this size would whittle what was a 41¢ problem down to a 16¢ problem, since 41 - 25 = 16. That is, the remainder is a similar but smaller problem. Needless to say, another 25¢ bite would be too big (assuming the cashier prefers not to lose money), and so our greedy cashier would move on to a bite of size 10¢, leaving him or her with a 6¢ problem. At that point, greed calls for one 5¢ bite followed by one 1¢ bite, at which point the problem is solved. The customer receives one quarter, one dime, one nickel, and one penny: four coins in total.

## Usage

1. Clone the repository
```bash
$ git clone https://github.com/hammadmajid/greedy-algorithm
```
2. Change working directory
```bash
$ cd greedy-algorithm
```
3. Build the app 
```bash
$ make # or make compile
```
4. Test the app 
```bash
$ make test
```
5. Run the app 
```bash
$ make run
```
