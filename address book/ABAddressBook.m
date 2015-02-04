//
//  ABAddressBook.m
//  address book
//
//  Created by Ralph Reid on 03/02/2015.
//  Copyright (c) 2015 Ralph Reid. All rights reserved.
//

#import "ABAddressBook.h"

@interface ABAddressBook ()

@property (nonatomic, strong) NSMutableArray *contacts;

@end


@implementation ABAddressBook


- (NSArray *)sortedContacts
{
    return nil;
}

- (NSUInteger)numberOfContacts
{
    return 6;
}

- (void)addContact:(ABContact *)contact
{
    [self.contacts addObject:contact];
}

- (void)removeContact:(ABContact *)contact
{
    
}

- (void)clearAllContacts
{
    
}


@end
