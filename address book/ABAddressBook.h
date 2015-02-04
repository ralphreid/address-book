//
//  ABAddressBook.h
//  address book
//
//  Created by Ralph Reid on 03/02/2015.
//  Copyright (c) 2015 Ralph Reid. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ABContact.h"

@interface ABAddressBook : NSObject

- (NSArray *)sortedContacts;
- (NSUInteger)numberOfContacts;
- (void)addContact:(ABContact *)contact;
- (void)removeContact:(ABContact *)contact;
- (void)clearAllContacts;


@end
