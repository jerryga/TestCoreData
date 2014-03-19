//
//  ContactInfo.h
//  TestCoreData
//
//  Created by Static Ga on 14-3-12.
//  Copyright (c) 2014年 Static Ga. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class ContactDetailInfo;

@interface ContactInfo : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) ContactDetailInfo *details;

@end
