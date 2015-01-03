//
//  ToDoItem.h
//  ToDoList
//
//  Created by Aditya Dhulipala on 1/3/15.
//  Copyright (c) 2015 Aditya Dhulipala. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL isCompleted;
@property (readonly) NSData *creationDate;

@end
