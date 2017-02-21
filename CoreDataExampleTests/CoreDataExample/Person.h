//
//  Person.h
//  CoreDataExample
//
//  Created by Shai Amar on 21/02/2017.
//  Copyright © 2017 IsItYou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface Person : NSManagedObject

@property (nonatomic, strong) NSString *firstName;
@property (nonatomic, strong) NSString *lastName;


@end
