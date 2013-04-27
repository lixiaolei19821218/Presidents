//
//  BIDDetailViewController.h
//  Presidents
//
//  Created by 李 潇磊 on 13-4-27.
//  Copyright (c) 2013年 李 潇磊. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BIDDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
