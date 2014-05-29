//
//  MasterViewController.h
//  CITest
//
//  Created by Andrew Pereira on 5/29/14.
//  Copyright (c) 2014 Andrew Pereira. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
