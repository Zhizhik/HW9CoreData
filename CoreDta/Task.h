//
//  Task.h
//  CoreDta
//
//  Created by Zhizhik on 22.12.14.
//  Copyright (c) 2014 c. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Task;

@interface Task : NSManagedObject

@property (nonatomic, retain) NSNumber * period;
@property (nonatomic, retain) NSString * name;

@end
