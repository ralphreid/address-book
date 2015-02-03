//
//  ABContact.h
//  address book
//
//  Created by Ralph Reid on 03/02/2015.
//  Copyright (c) 2015 Ralph Reid. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ABContact : NSObject


@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *address;
@property (strong, nonatomic) UIImage *image;

@end
