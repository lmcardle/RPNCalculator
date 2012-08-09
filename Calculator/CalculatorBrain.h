//
//  CalculatorBrain.h
//  Calculator
//
//  Created by Liam on 8/9/12.
//  Copyright (c) 2012 Liam McArdle. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject

-(void)pushOperand:(double)operand;
-(double)performOperation:(NSString *)operation;

@end
