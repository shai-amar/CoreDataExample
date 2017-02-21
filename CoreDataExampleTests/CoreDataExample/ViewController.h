//
//  ViewController.h
//  CoreDataExample
//
//  Created by Shai Amar on 21/02/2017.
//  Copyright © 2017 IsItYou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface ViewController : UIViewController<UITableViewDelegate, UITableViewDataSource, NSFetchedResultsControllerDelegate>

@property (weak, nonatomic) IBOutlet UITableView *tableView;

@property (nonatomic, strong) NSManagedObjectContext *managedObjectContext;


@end

