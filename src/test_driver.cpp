/*************************************************************************
 *
 * Project III: Start testing here.
 *
 * File Name:       test_driver.cpp
 * Name(s):         ?
 * Course:          CPTR 142
 * Date:            ?
 *
 */
#include <iostream>
#include <string>

#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include "Fountain.h"
#include "User.h"

TEST_CASE("Create a Fountain", "[fountain]") {
    // Setup
    Fountain* theFountain =
        new Fountain("69420nice", "Mordor", "Literally Sauron");

    SECTION("Details are correct") {
        REQUIRE(theFountain->getId() == "69420nice");
        REQUIRE(theFountain->getName() == "Literally Sauron");
    }

    // Create a review
    Review* theReview = new Review(
        "Not a good place for a date",
        "I asked my girlfriend to join me but she never showed up", 0);
    User* theUser = new User("007", "James Bond", "yesthisisanothermovie")
                        theReview->assignUser(theUser);
    theReview->assignFountain(theFountain);

    SECTION("Adding a review works") {
        REQUIRE(theReview->getUser()->getId() == "007");
        REQUIRE(theReview->getUser()->getName() == "James Bond");
        REQUIRE(theReview->getUser()->getPasscode() == "yesthisisanothermovie");
        REQUIRE(theReview->getFountain() == theFountain);
    }
    theFountain->addReview(theReview);
    theFountain->printReviews();

    // Teardown
    delete theFountain;
    delete theReview;
    delete theUser;
}

TEST_CASE("main", "[main]") {
    // Setup

    // Teardown
}

TEST_CASE("Campus", "[campus") {
    // Setup

    // Teardown
}
