//
//  AppDelegate.h
//  CoreDataExample
//
//  Created by Shai Amar on 21/02/2017.
//  Copyright © 2017 IsItYou. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

