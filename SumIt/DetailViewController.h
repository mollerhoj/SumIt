//
//  DetailViewController.h
//  SumIt
//
//  Created by Jens Møllerhøj on 15/09/2012.
//  Copyright (c) 2012 Jens Møllerhøj. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
