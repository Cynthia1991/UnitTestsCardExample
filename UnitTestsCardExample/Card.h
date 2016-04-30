//
//  Card.h
//  UnitTestsCardExample
//
//  Created by fuqian on 30/04/2016.
//  Copyright © 2016 fuqian. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;
@property (nonatomic, getter=isChosen) BOOL chosen;
@property (nonatomic, getter=isMatched) BOOL matched;

- (int)match:(NSArray *)otherCards;

@end
