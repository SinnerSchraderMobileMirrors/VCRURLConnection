//
//  VCRCassetteManager.h
//  VCRURLConnectionExample
//
//  Created by Dustin Barker on 11/18/12.
//  Copyright (c) 2012 Dustin Barker. All rights reserved.
//

#import "VCRCassette.h"
#import <Foundation/Foundation.h>

@interface VCRCassetteManager : NSObject

+ (VCRCassetteManager *)defaultManager;

@property (nonatomic, retain) NSURL *currentCassetteURL;
@property (nonatomic, retain) VCRCassette *currentCassette;

@end
