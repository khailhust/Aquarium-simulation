# Test Documentation for Aquarium Program

## Introduction
This document provides detailed test scenarios for the Aquarium program. The Aquarium is a program that simulates a fish tank, where fishes are objects and activities such as reducing the fish's health, fish biting each other, and printing the status of fishes in the tank are performed.

## Test Objectives
- Verify the correctness and accuracy of the program.
- Ensure that the functions and methods in the program work as expected.
- Confirm that activities such as reducing the fish's health and fish biting each other are performed correctly.

## Scope of Testing
- Testing the functions and methods in the Fish class.
- Testing the functions and methods in the Aquarium class.
- Testing the functionality of the program when executed from the main function.

## Test Scenarios

### Test case 1: Creating fishes and adding them to the aquarium
**Test Steps:**
1. Create fishes with different names and health values.
2. Add the created fishes to the aquarium.
3. Print the status of the fishes in the aquarium.

**Test Data:**
- Fish 1:
  - Name: "Koi"
  - Health: 10
- Fish 2:
  - Name: "Chep"
  - Health: 15
- Fish 3:
  - Name: "Tram"
  - Health: 18
- Fish 4:
  - Name: "Ro"
  - Health: 25

**Expected Result:**
Fish: Koi, Health: 10
Fish: Chep, Health: 15
Fish: Tram, Health: 18
Fish: Ro, Health: 25


### Test case 2: Simulating fish health reduction and printing status
**Test Steps:**
1. Create an aquarium.
2. Add fishes to the aquarium.
3. Simulate the fish health reduction for a specified number of rounds.
4. Print the status of the fishes in the aquarium.

**Test Data:**
- Fish 1:
  - Name: "Koi"
  - Health: 10
- Fish 2:
  - Name: "Chep"
  - Health: 15
- Fish 3:
  - Name: "Tram"
  - Health: 18
- Fish 4:
  - Name: "Ro"
  - Health: 25
- Number of Rounds: 3

**Expected Result:**
Round: 1
Fish: Koi, Health: 8
Fish: Chep, Health: 12
Fish: Tram, Health: 14
Fish: Ro, Health: 20

Round: 2
Fish: Koi, Health: 6
Fish: Chep, Health: 9
Fish: Tram, Health: 10
Fish: Ro, Health: 15

Round: 3
Fish: Koi, Health: 4
Fish: Chep, Health: 7
Fish: Tram, Health: 6
Fish: Ro, Health: 10

Fish: Koi, Health: 4
Fish: Chep, Health: 7
Fish: Tram, Health: 6
Fish: Ro, Health: 10


### Test case 3: Simulating fish biting each other and printing status
**Test Steps:**
1. Create an aquarium.
2. Add fishes to the aquarium.
3. Simulate the fish biting process for a specified number of rounds.
4. Print the status of the fishes in the aquarium

**Test Data:**
- Fish 1:
  - Name: "Koi"
  - Health: 10
- Fish 2:
  - Name: "Chep"
  - Health: 15
- Fish 3:
  - Name: "Tram"
  - Health: 18
- Fish 4:
  - Name: "Ro"
  - Health: 25
- Number of Rounds: 5

**Expected Result:**
Round: 1
Fish: Koi, Health: 8
Fish: Chep, Health: 12
Fish: Tram, Health: 14
Fish: Ro, Health: 20
->Chep eaten Koi

Round: 2
Fish: Koi, Health: 0
Fish: Chep, Health: 12
Fish: Tram, Health: 14
Fish: Ro, Health: 20

Round: 3
Fish: Koi, Health: 0
Fish: Chep, Health: 12
Fish: Tram, Health: 14
Fish: Ro, Health: 20

Round: 4
Fish: Koi, Health: 0
Fish: Chep, Health: 12
Fish: Tram, Health: 14
Fish: Ro, Health: 20

Round: 5
Fish: Koi, Health: 0
Fish: Chep, Health: 12
Fish: Tram, Health: 14
Fish: Ro, Health: 20

Fish: Koi, Health: 0
Fish: Chep, Health: 12
Fish: Tram, Health: 14
Fish: Ro, Health: 20


### Test case 4: Testing fish weakening when health is a multiple of 5
**Test Steps:**
1. Create a fish with health being a multiple of 5.
2. Weaken the fish.
3. Print the status of the fish.

**Test Data:**
- Fish:
  - Name: "TestFish"
  - Health: 30

**Expected Result:**
Fish: TestFish, Health: 24


### Test case 5: Testing fish weakening when health is not a multiple of 5
**Test Steps:**
1. Create a fish with health not being a multiple of 5.
2. Weaken the fish.
3. Print the status of the fish.

**Test Data:**
- Fish:
  - Name: "TestFish"
  - Health: 27

**Expected Result:**
Fish: TestFish, Health: 22

