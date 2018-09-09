//
//  Project.h
//  DIPDemo1
//
//  Created by J_Knight_ on 2018/8/25.
//  Copyright © 2018年 J_Knight_. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DeveloperProtocol.h"

@interface Project : NSObject

- (instancetype)initWithDevelopers:(NSArray <id <DeveloperProtocol>>*)developers;

- (void)startDeveloping;

@end
