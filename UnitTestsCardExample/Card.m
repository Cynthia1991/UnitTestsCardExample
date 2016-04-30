//
//  Card.m
//  UnitTestsCardExample
//
//  Created by fuqian on 30/04/2016.
//  Copyright © 2016 fuqian. All rights reserved.
//

#import "Card.h"

@implementation Card

- (int)match:(NSArray *)otherCards
{
    int score = 0;
    for (Card *card in otherCards)
    {
        if ([card.contents isEqualToString:self.contents])
        {
            score = 1;
        }
    }
    return score;
}
@end
