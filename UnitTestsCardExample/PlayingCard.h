//
//  PlayingCard.h
//  UnitTestsCardExample
//
//  Created by fuqian on 30/04/2016.
//  Copyright © 2016 fuqian. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
