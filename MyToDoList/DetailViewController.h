//
//  DetailViewController.h
//  MyToDoList
//
//  Created by Akila on 9/6/16.
//  Copyright © 2016 Akila. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

