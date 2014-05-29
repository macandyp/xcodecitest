//
//  DetailViewController.h
//  CITest
//
//  Created by Andrew Pereira on 5/29/14.
//  Copyright (c) 2014 Andrew Pereira. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
