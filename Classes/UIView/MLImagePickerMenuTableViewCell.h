//
//  MLImagePickerMenuTableViewCell.h
//  MLPhotoLib
//
//  Created by leisuro on 16/8/2.
//  Copyright © 2016年 Free. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MLPhotoPickerGroup;
@interface MLImagePickerMenuTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *iconImageView;
@property (weak, nonatomic) IBOutlet UILabel *titleLbl;
@property (weak, nonatomic) IBOutlet UILabel *assetCountLbl;

@property (nonatomic, strong) MLPhotoPickerGroup *group;
@end