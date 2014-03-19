//
//  ContactDetailInfo.h
//  TestCoreData
//
//  Created by Static Ga on 14-3-12.
//  Copyright (c) 2014年 Static Ga. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface ContactDetailInfo : NSManagedObject

@property (nonatomic, retain) NSString * address;
@property (nonatomic, retain) NSManagedObject *sum;

@end
